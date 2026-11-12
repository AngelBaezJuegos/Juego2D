using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

/* ============================================================
   ANGEL vs LA MAFIA  -  Plataformas 2D para Unity
   AngelGame.Core.cs : datos, entrada, carga de imágenes, bucle principal
   El juego se dibuja con IMGUI (OnGUI) sobre una pantalla virtual de 1024x576.
   ============================================================ */

// ---------------------------------------------------------------- CLASES DE DATOS
public class Body
{
    public float x, y, vx, vy, w, h;
    public bool onGround, hitWall, drop;
}

public class Player : Body
{
    public int facing = 1, hp = 3, maxHp = 3, inv, hurtT, attackT, cd, coyote, jbuf, dropT, deadT, animT;
    public string pose = "none", weapon = "punch";
    public bool dead, ending;
    public HashSet<object> punchHit;
    public Mp onMp;
}

public class Enemy : Body
{
    public string type, state = "idle";
    public int dir = -1, hp = 2, st, flash, hurtT, deadT, score = 150;
    public float cd, animT, x0, y0, range, rot;
    public bool dead, remove;
}

public class Boss : Body
{
    public int hp = 60, maxHp = 60, st, dir = -1, flash, inv, phase = 1, deadT, animT;
    public string state = "wait";
    public bool dead, active, fast;
}

public class Item : Body
{
    public string type, id;
    public float t;
    public bool phys, taken;
}

public class Bullet
{
    public string kind = "bullet", team = "p";
    public float x, y, vx, vy, g, rot;
    public int dmg = 1, boss = 1, life = 60, t;
    public bool big;
}

public class Flame { public float x, y; public int t, life; }
public class Fx { public string k; public float x, y, vx, vy, r; public int t, life; public Color col; }
public class FText { public float x, y; public string s; public Color col; public int t; }
public class Mp { public float x, y, w, h, x0, x1, dir, dx; }
public class Decor { public string type; public float x, y; public int cd; public bool on; }
public class Marlin { public float x, y; public string state = "caged"; public int t; }
public class Goal { public float x, y; }
public class Notice { public string s, sub; public int t; }

public class Lvl
{
    public LevelDef def; public int idx, w, h;
    public char[][] tiles;
    public Dictionary<string, string> info;
    public List<Enemy> enemies = new List<Enemy>();
    public List<Item> items = new List<Item>();
    public List<Bullet> bullets = new List<Bullet>();
    public List<Flame> flames = new List<Flame>();
    public List<Fx> fx = new List<Fx>();
    public List<FText> texts = new List<FText>();
    public List<Mp> mps = new List<Mp>();
    public List<Decor> decor = new List<Decor>();
    public Dictionary<int, int> bumps = new Dictionary<int, int>();
    public Boss boss; public Marlin marlin; public Goal goal;
    public bool arena, freed;
    public float startX, startY;
}

public class WeaponDef
{
    public string name, img, snd, label; public int cd, start, box, max;
}

public enum St { Loading, Menu, Story, Card, Play, Clear, Over, Win }

public partial class AngelGame : MonoBehaviour
{
    public const int VW = 1024, VH = 576, TILE = 64;
    const float GRAV = 0.62f, MAXFALL = 16f;
    const float STEP = 1f / 60f;

    // ---------------------------------------------------------------- ESTADO GLOBAL
    St state = St.Loading;
    int gt, idx, lives = 3, score, coins, page, storyT, cardT, clearT, overT, winT, bonus;
    float time, shake, menuX, camX, camY, cpX, cpY;
    string overText = "", overSub = "";
    bool paused;
    Notice notice;
    Lvl L; Player P;
    readonly Dictionary<string, bool> have = new Dictionary<string, bool>();
    readonly Dictionary<string, int> ammo = new Dictionary<string, int>();
    int fireDelay = -1;

    public static readonly Dictionary<string, WeaponDef> WEAPONS = new Dictionary<string, WeaponDef>
    {
        { "punch",   new WeaponDef { name = "PUÑOS" } },
        { "pistol",  new WeaponDef { name = "PISTOLA .38", img = "arma_pistola", cd = 20, start = 15, box = 8, max = 40, snd = "pistol", label = "la PISTOLA" } },
        { "shotgun", new WeaponDef { name = "ESCOPETA", img = "arma_escopeta", cd = 52, start = 8, box = 4, max = 20, snd = "shotgun", label = "la ESCOPETA" } },
        { "tommy",   new WeaponDef { name = "TOMMY GUN", img = "arma_tommy", cd = 6, start = 60, box = 30, max = 150, snd = "tommy", label = "la TOMMY GUN" } }
    };
    static readonly string[] W_ORDER = { "punch", "pistol", "shotgun", "tommy" };

    static float R() { return Random.value; }
    static float Rand(float a, float b) { return a + Random.value * (b - a); }
    static float Clamp(float v, float a, float b) { return Mathf.Max(a, Mathf.Min(b, v)); }
    static bool RectsOverlap(Rect a, Rect b) { return a.x < b.x + b.width && a.x + a.width > b.x && a.y < b.y + b.height && a.y + a.height > b.y; }
    static Rect BodyRect(Body b) { return new Rect(b.x - b.w / 2, b.y - b.h, b.w, b.h); }

    // ---------------------------------------------------------------- ENTRADA
    // Se leen los eventos de teclado de IMGUI (funciona con el Input Manager antiguo y con el Input System nuevo).
    readonly HashSet<KeyCode> keys = new HashSet<KeyCode>();
    readonly HashSet<KeyCode> pressed = new HashSet<KeyCode>();

    static readonly KeyCode[] K_LEFT = { KeyCode.LeftArrow, KeyCode.A };
    static readonly KeyCode[] K_RIGHT = { KeyCode.RightArrow, KeyCode.D };
    static readonly KeyCode[] K_JUMP = { KeyCode.UpArrow, KeyCode.W, KeyCode.Space };
    static readonly KeyCode[] K_RUN = { KeyCode.LeftShift, KeyCode.RightShift };
    static readonly KeyCode[] K_ATK = { KeyCode.X, KeyCode.J, KeyCode.Z };
    static readonly KeyCode[] K_OK = { KeyCode.Return, KeyCode.KeypadEnter };
    static readonly KeyCode[] K_DOWN = { KeyCode.DownArrow, KeyCode.S };

    bool Down(params KeyCode[] ks) { for (int i = 0; i < ks.Length; i++) if (keys.Contains(ks[i])) return true; return false; }
    bool Hit(params KeyCode[] ks) { for (int i = 0; i < ks.Length; i++) if (pressed.Contains(ks[i])) return true; return false; }

    void HandleInputEvent(Event e)
    {
        if (e.type == EventType.KeyDown)
        {
            if (e.keyCode != KeyCode.None)
            {
                if (!keys.Contains(e.keyCode)) pressed.Add(e.keyCode);
                keys.Add(e.keyCode);
            }
        }
        else if (e.type == EventType.KeyUp)
        {
            if (e.keyCode != KeyCode.None) keys.Remove(e.keyCode);
        }
        else if (e.type == EventType.MouseDown) { pressed.Add(KeyCode.Return); }
        // Shift (algunas plataformas no envían KeyDown para los modificadores)
        if (e.isKey || e.isMouse)
        {
            if (e.shift) keys.Add(KeyCode.LeftShift);
            else { keys.Remove(KeyCode.LeftShift); keys.Remove(KeyCode.RightShift); }
        }
    }

    void OnApplicationFocus(bool focus) { if (!focus) keys.Clear(); }

    // ---------------------------------------------------------------- CARGA DE IMÁGENES
    // Los PNG están en Assets/StreamingAssets/Art/... y se cargan como texturas con filtro "Point" (pixel art).
    readonly Dictionary<string, Texture2D> IMG = new Dictionary<string, Texture2D>();
    int loadedCount, loadTotal;
    bool ready;

    static readonly Dictionary<string, string[]> SHEETS = new Dictionary<string, string[]>
    {
        { "angel", new[] { "idle", "walk", "run", "jump", "attack_1", "hurt", "dead" } },
        { "brawler", new[] { "idle", "walk", "run", "attack_1", "hurt", "dead" } },
        { "tommy", new[] { "idle", "walk", "run", "shot", "hurt", "dead" } },
        { "pistolero", new[] { "idle", "walk", "shot", "hurt", "dead" } },
        { "molotovero", new[] { "idle", "walk", "attack_1", "hurt", "dead" } },
        { "jefe", new[] { "idle", "walk", "run", "jump", "shot", "attack", "hurt", "dead" } }
    };
    static readonly string[] OBJS = { "arma_pistola", "arma_escopeta", "arma_tommy", "barril", "caja_municion", "corazon", "vida_extra",
        "cuervo", "farola", "llamarada", "molotov", "moneda", "pila_barriles", "puerta" };

    IEnumerator LoadAll()
    {
        var list = new List<string[]>(); // {clave, ruta relativa}
        foreach (var kv in SHEETS) foreach (string a in kv.Value) list.Add(new[] { kv.Key + "_" + a, "personajes/" + kv.Key + "_" + a + ".png" });
        list.Add(new[] { "marlin", "personajes/marlin.png" });
        foreach (string o in OBJS) list.Add(new[] { o, "objetos/" + o + ".png" });
        foreach (string w in new[] { "w1", "w2", "w3" })
        {
            list.Add(new[] { "tiles_" + w, "tiles/tiles_" + w + ".png" });
            foreach (string l in new[] { "cielo", "lejos", "cerca" }) list.Add(new[] { "bg_" + w + "_" + l, "fondos/" + w + "_" + l + ".png" });
        }
        loadTotal = list.Count + 1;
        foreach (var item in list)
        {
            string path = Path.Combine(Path.Combine(Application.streamingAssetsPath, "Art"), item[1]);
            string url = path.Contains("://") ? path : new System.Uri(path).AbsoluteUri;
            using (var req = UnityWebRequestTexture.GetTexture(url))
            {
                yield return req.SendWebRequest();
                if (req.result == UnityWebRequest.Result.Success)
                {
                    Texture2D t = DownloadHandlerTexture.GetContent(req);
                    t.filterMode = FilterMode.Point; t.wrapMode = TextureWrapMode.Clamp;
                    IMG[item[0]] = t;
                }
                else Debug.LogWarning("No se pudo cargar " + url + " : " + req.error);
            }
            loadedCount++;
        }
        yield return StartCoroutine(Snd.Generate());
        loadedCount++;
        ready = true; state = St.Menu;
    }

    Texture2D Tex(string name) { Texture2D t; return IMG.TryGetValue(name, out t) ? t : null; }

    // ---------------------------------------------------------------- CICLO DE VIDA UNITY
    public static AngelGame Instance;
    float acc;

    void Awake()
    {
        Instance = this;
        Application.runInBackground = true;
        Snd.Init(gameObject);
        InitRender();
        have["pistol"] = have["shotgun"] = have["tommy"] = false;
        ammo["pistol"] = ammo["shotgun"] = ammo["tommy"] = 0;
        if (Camera.main == null)
        {
            var cgo = new GameObject("Camara");
            var cam = cgo.AddComponent<Camera>();
            cam.clearFlags = CameraClearFlags.SolidColor; cam.backgroundColor = Color.black; cam.tag = "MainCamera";
            cam.orthographic = true;
            cgo.AddComponent<AudioListener>();
        }
    }

    void Start() { StartCoroutine(LoadAll()); }

    void Update()
    {
        if (!ready) return;
        acc += Mathf.Min(0.1f, Time.unscaledDeltaTime);
        int steps = 0;
        while (acc >= STEP && steps < 5)
        {
            UpdateGame();
            pressed.Clear();
            acc -= STEP; steps++;
        }
    }

    void OnGUI()
    {
        Event e = Event.current;
        if (e.isKey || e.isMouse) HandleInputEvent(e);
        if (e.type == EventType.Repaint) Render();
    }

    // ---------------------------------------------------------------- RESET / CREACIÓN
    void ResetGameData()
    {
        lives = 3; score = 0; coins = 0;
        foreach (string w in new[] { "pistol", "shotgun", "tommy" }) { have[w] = false; ammo[w] = 0; }
    }

    string BestWeapon()
    {
        for (int i = W_ORDER.Length - 1; i > 0; i--) if (have[W_ORDER[i]] && ammo[W_ORDER[i]] > 0) return W_ORDER[i];
        return "punch";
    }

    // ---------------------------------------------------------------- TILES / COLISIONES
    static bool IsSolid(char c) { return c == '#' || c == 'B' || c == 'C' || c == '?' || c == 'W' || c == 'u'; }

    static char TileAt(Lvl l, int tx, int ty)
    {
        if (tx < 0 || tx >= l.w) return '#';
        if (ty < 0 || ty >= l.h) return ' ';
        return l.tiles[ty][tx];
    }

    static void MoveBody(Body b, Lvl l, System.Action<int, int> onHead = null)
    {
        b.x += b.vx; b.hitWall = false;
        float left = b.x - b.w / 2, right = b.x + b.w / 2, top = b.y - b.h, bottom = b.y;
        int ty0 = Mathf.FloorToInt(top / TILE), ty1 = Mathf.FloorToInt((bottom - 0.01f) / TILE);
        if (b.vx > 0)
        {
            int tx = Mathf.FloorToInt((right - 0.01f) / TILE);
            for (int ty = ty0; ty <= ty1; ty++) if (IsSolid(TileAt(l, tx, ty))) { b.x = tx * TILE - b.w / 2; b.vx = 0; b.hitWall = true; break; }
        }
        else if (b.vx < 0)
        {
            int tx = Mathf.FloorToInt(left / TILE);
            for (int ty = ty0; ty <= ty1; ty++) if (IsSolid(TileAt(l, tx, ty))) { b.x = (tx + 1) * TILE + b.w / 2; b.vx = 0; b.hitWall = true; break; }
        }
        float prevBottom = b.y; b.y += b.vy; b.onGround = false;
        left = b.x - b.w / 2; right = b.x + b.w / 2; top = b.y - b.h; bottom = b.y;
        int tx0 = Mathf.FloorToInt(left / TILE), tx1 = Mathf.FloorToInt((right - 0.01f) / TILE);
        if (b.vy >= 0)
        {
            int ty = Mathf.FloorToInt(bottom / TILE);
            for (int tx = tx0; tx <= tx1; tx++)
            {
                char c = TileAt(l, tx, ty);
                if (IsSolid(c) || (c == '-' && prevBottom <= ty * TILE + 0.5f && !b.drop)) { b.y = ty * TILE; b.vy = 0; b.onGround = true; break; }
            }
        }
        else
        {
            int ty = Mathf.FloorToInt(top / TILE); int bestTx = -1; float bestD = 0;
            for (int tx = tx0; tx <= tx1; tx++)
            {
                if (IsSolid(TileAt(l, tx, ty)))
                {
                    float d = Mathf.Abs((tx + 0.5f) * TILE - b.x);
                    if (bestTx < 0 || d < bestD) { bestTx = tx; bestD = d; }
                }
            }
            if (bestTx >= 0)
            {
                b.y = (ty + 1) * TILE + b.h; b.vy = 0;
                if (onHead != null) onHead(bestTx, ty);
            }
        }
    }

    static bool GroundAhead(Enemy e, Lvl l, int dir)
    {
        int tx = Mathf.FloorToInt((e.x + dir * (e.w / 2 + 6)) / TILE), ty = Mathf.FloorToInt((e.y + 6) / TILE);
        char c = TileAt(l, tx, ty); return IsSolid(c) || c == '-';
    }

    // ---------------------------------------------------------------- CREACIÓN DEL NIVEL
    Lvl BuildRuntime(int index)
    {
        LevelDef def = Levels.All[index];
        var l = new Lvl { def = def, idx = index, w = def.w, h = def.h, info = new Dictionary<string, string>(def.info) };
        l.tiles = new char[def.h][];
        for (int y = 0; y < def.h; y++) l.tiles[y] = def.tiles[y].ToCharArray();
        foreach (EntDef e in def.ents)
        {
            float px = (e.x + 0.5f) * TILE, feet = (e.y + 1) * TILE;
            switch (e.t)
            {
                case "player": l.startX = px; l.startY = feet; break;
                case "coin": l.items.Add(new Item { type = "coin", x = px, y = feet - 22, w = 36, h = 36, t = R() * 40 }); break;
                case "brawler": case "tommy": case "pistolero": case "molotovero": case "crow": l.enemies.Add(MakeEnemy(e.t, px, feet)); break;
                case "barrels": l.decor.Add(new Decor { type = "barrelSpawn", x = px, y = feet, cd = 90 }); break;
                case "check": l.decor.Add(new Decor { type = "check", x = px, y = feet }); break;
                case "goal": l.goal = new Goal { x = px, y = feet }; break;
                case "mp": l.mps.Add(new Mp { x = e.x * TILE, y = feet, w = TILE * 3, h = 18, x0 = e.x * TILE, x1 = e.x1 * TILE, dir = 1 }); break;
                case "boss": l.boss = MakeBoss(px, feet); break;
                case "marlin": l.marlin = new Marlin { x = px, y = feet }; break;
            }
        }
        return l;
    }

    Enemy MakeEnemy(string type, float x, float y)
    {
        var e = new Enemy { type = type, x = x, y = y, w = 28, h = 62, dir = -1, hp = 2, state = "idle", cd = 60 + R() * 60, animT = R() * 20, score = 150, x0 = x, y0 = y };
        switch (type)
        {
            case "brawler": e.hp = 2; e.state = "patrol"; e.score = 150; e.range = 400; break;
            case "tommy": e.hp = 3; e.score = 250; break;
            case "pistolero": e.hp = 2; e.state = "patrol"; e.score = 200; break;
            case "molotovero": e.hp = 2; e.score = 250; break;
            case "crow": e.w = 38; e.h = 28; e.hp = 1; e.state = "fly"; e.score = 100; e.y = y - 10; e.y0 = y - 10; break;
        }
        return e;
    }

    Boss MakeBoss(float x, float y) { return new Boss { x = x, y = y, w = 46, h = 126, hp = 60, maxHp = 60, state = "wait", dir = -1 }; }

    Player MakePlayer(float x, float y) { return new Player { x = x, y = y, w = 26, h = 62, weapon = BestWeapon() }; }

    // ---------------------------------------------------------------- EFECTOS
    void FxPuff(float x, float y, int n = 5, string col = "#cfd3e6")
    {
        for (int i = 0; i < n; i++) L.fx.Add(new Fx { k = "puff", x = x + Rand(-8, 8), y = y, vx = Rand(-1.4f, 1.4f), vy = Rand(-1.8f, -0.2f), life = 22, r = Rand(3, 6), col = Hex(col) });
    }
    void FxSpark(float x, float y, int n = 5)
    {
        for (int i = 0; i < n; i++) L.fx.Add(new Fx { k = "spark", x = x, y = y, vx = Rand(-3, 3), vy = Rand(-3, 1), life = 12, r = Rand(1.5f, 3), col = Hex("#ffe27a") });
    }
    void FxBoom(float x, float y, int n = 12)
    {
        for (int i = 0; i < n; i++) L.fx.Add(new Fx { k = "boom", x = x, y = y, vx = Rand(-4, 4), vy = Rand(-5, 1.5f), life = (int)Rand(24, 42), r = Rand(5, 12), col = Hex(R() < 0.5f ? "#ff7a1a" : "#ffd24a") });
    }
    void FxCoinPop(float x, float y) { L.fx.Add(new Fx { k = "coin", x = x, y = y, vx = 0, vy = -7, life = 28 }); }
    void FxHeart(float x, float y) { L.fx.Add(new Fx { k = "heartfx", x = x, y = y, vx = Rand(-0.6f, 0.6f), vy = Rand(-1.6f, -0.8f), life = 70 }); }
    void FxText(float x, float y, string s, string col = "#ffffff") { L.texts.Add(new FText { x = x, y = y, s = s, col = Hex(col) }); }

    static Color Hex(string h) { Color c; ColorUtility.TryParseHtmlString(h, out c); return c; }

    void UpdateFx()
    {
        foreach (Fx f in L.fx) { f.t++; f.x += f.vx; f.y += f.vy; if (f.k == "boom" || f.k == "coin") f.vy += 0.25f; }
        L.fx.RemoveAll(f => f.t >= f.life);
        foreach (FText t in L.texts) { t.t++; t.y -= 0.8f; }
        L.texts.RemoveAll(t => t.t >= 55);
    }

    void Notify(string s, string sub = "") { notice = new Notice { s = s, sub = sub }; }
}
