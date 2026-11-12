using System.Collections.Generic;

// Datos de los 3 niveles (portados de levels.js). 1 tile = 64 px. Fila 0 = arriba.
public class EntDef { public string t; public int x, y, x1; }

public class LevelDef
{
    public int w, h, time;
    public string[] tiles;
    public List<EntDef> ents = new List<EntDef>();
    public Dictionary<string, string> info = new Dictionary<string, string>();
    public string name, shortName, theme, music, weapon, hint;
    public bool hasArena; public int arenaX0, arenaX1, arenaTrigger, arenaWallX;
}

public class LevelBuilder
{
    public int w, h; public char[][] g; public List<EntDef> ents = new List<EntDef>(); public Dictionary<string, string> info = new Dictionary<string, string>();
    public LevelBuilder(int w, int h) { this.w = w; this.h = h; g = new char[h][]; for (int y = 0; y < h; y++) { g[y] = new char[w]; for (int x = 0; x < w; x++) g[y][x] = ' '; } }
    public void Set(int x, int y, char c) { if (x >= 0 && x < w && y >= 0 && y < h) g[y][x] = c; }
    public void Ground(int x0, int x1, int top = 9) { for (int x = x0; x <= x1; x++) for (int y = top; y < h; y++) Set(x, y, '#'); }
    public void Plat(int x0, int x1, int y) { for (int x = x0; x <= x1; x++) Set(x, y, '-'); }
    public void Row(int x0, int x1, int y, char c) { for (int x = x0; x <= x1; x++) Set(x, y, c); }
    public void Col(int x, int y0, int y1, char c) { for (int y = y0; y <= y1; y++) Set(x, y, c); }
    public void Q(int x, int y, string item) { Set(x, y, '?'); info[x + "," + y] = item; }
    public void Lucky(int x, int y, string weapon) { Set(x, y, 'W'); info[x + "," + y] = weapon; }
    public void Spikes(int x0, int x1, int y = 8) { Row(x0, x1, y, '^'); }
    public void E(string t, int x, int y, int x1 = 0) { ents.Add(new EntDef { t = t, x = x, y = y, x1 = x1 }); }
    public void Coins(int x0, int x1, int y) { for (int x = x0; x <= x1; x++) E("coin", x, y); }
    public LevelDef Build()
    {
        var d = new LevelDef { w = w, h = h, ents = ents, info = info, tiles = new string[h] };
        for (int y = 0; y < h; y++) d.tiles[y] = new string(g[y]);
        return d;
    }
}

public static class Levels
{
    public static readonly List<LevelDef> All = Create();

    static List<LevelDef> Create()
    {
        var list = new List<LevelDef>();
        {
            var L = new LevelBuilder(140, 12);
            L.Ground(0, 16);
            L.Coins(6, 8, 8);
            L.Q(10, 6, "coin");
            L.Row(12, 12, 6, 'B');
            L.Lucky(13, 6, "pistol");
            L.Row(14, 14, 6, 'B');
            L.Q(15, 6, "heart");
            L.Ground(19, 40);
            L.Coins(17, 18, 6);
            L.E("brawler", 26, 8);
            L.Spikes(32, 33);
            L.Coins(32, 33, 6);
            L.Row(37, 38, 8, 'C');
            L.E("tommy", 37, 7);
            L.Plat(34, 36, 6);
            L.Ground(43, 62);
            L.Plat(46, 48, 6);
            L.Coins(46, 48, 5);
            L.E("crow", 50, 5);
            L.E("brawler", 54, 8);
            L.Q(52, 6, "coin");
            L.Q(53, 6, "heart");
            L.E("check", 57, 8);
            L.E("barrels", 61, 8);
            L.Ground(65, 90);
            L.Ground(72, 82, 7);
            L.E("brawler", 75, 6);
            L.E("tommy", 79, 6);
            L.Coins(73, 76, 5);
            L.Plat(76, 78, 4);
            L.Coins(76, 78, 3);
            L.Spikes(86, 87);
            L.Plat(85, 88, 6);
            L.Coins(85, 88, 5);
            L.Ground(93, 115);
            L.E("check", 95, 8);
            L.E("crow", 97, 5);
            L.E("crow", 101, 4);
            L.Q(98, 6, "ammo");
            L.Q(99, 6, "coin");
            L.Q(100, 6, "ammo");
            L.E("brawler", 103, 8);
            L.E("tommy", 108, 8);
            L.Row(111, 112, 8, 'C');
            L.Row(112, 112, 7, 'C');
            L.E("brawler", 114, 8);
            L.Ground(118, 139);
            L.E("tommy", 124, 8);
            L.Coins(120, 123, 8);
            L.E("brawler", 128, 8);
            L.Spikes(130, 131);
            L.E("goal", 136, 8);
            L.E("player", 2, 8);
            var def = L.Build();
            def.name = "NIVEL 1  -  Las calles del barrio"; def.shortName = "El Barrio"; def.theme = "w1"; def.time = 220; def.music = "l1";
            def.weapon = "pistol"; def.hint = "Golpea el LUCKY BLOCK dorado desde abajo para conseguir un arma.";
            list.Add(def);
        }
        {
            var L = new LevelBuilder(170, 12);
            L.Ground(0, 30);
            L.Coins(4, 6, 8);
            L.Q(5, 6, "coin");
            L.Row(9, 9, 6, 'B');
            L.Lucky(10, 6, "shotgun");
            L.Row(11, 11, 6, 'B');
            L.Q(12, 6, "heart");
            L.E("pistolero", 19, 8);
            L.Row(22, 23, 8, 'C');
            L.Row(23, 23, 7, 'C');
            L.E("brawler", 27, 8);
            L.Coins(31, 34, 6);
            L.E("mp", 31, 8, 34);
            L.Ground(35, 58);
            L.E("molotovero", 44, 5);
            L.Plat(42, 46, 6);
            L.E("tommy", 40, 8);
            L.E("check", 50, 8);
            L.Spikes(54, 55);
            L.Coins(54, 55, 6);
            L.E("barrels", 57, 8);
            L.Coins(59, 63, 6);
            L.E("mp", 59, 8, 62);
            L.Ground(64, 100);
            L.Plat(68, 70, 6);
            L.Plat(73, 75, 5);
            L.Plat(78, 80, 6);
            L.Coins(68, 70, 5);
            L.Coins(73, 75, 4);
            L.Q(74, 2, "ammo");
            L.E("crow", 72, 3);
            L.E("crow", 78, 4);
            L.E("tommy", 70, 8);
            L.E("pistolero", 76, 8);
            L.E("brawler", 82, 8);
            L.Spikes(86, 88);
            L.Plat(86, 88, 5);
            L.Coins(86, 88, 4);
            L.Ground(90, 98, 7);
            L.E("molotovero", 95, 6);
            L.E("pistolero", 92, 6);
            L.Q(94, 4, "heart");
            L.E("check", 99, 8);
            L.Ground(103, 125);
            L.E("crow", 108, 4);
            L.E("crow", 112, 5);
            L.E("pistolero", 110, 8);
            L.Q(106, 6, "heart");
            L.Q(107, 6, "ammo");
            L.E("tommy", 114, 8);
            L.E("brawler", 118, 8);
            L.E("barrels", 124, 8);
            L.Coins(126, 131, 6);
            L.E("mp", 126, 8, 129);
            L.Ground(132, 169);
            L.E("tommy", 138, 8);
            L.E("pistolero", 142, 8);
            L.E("brawler", 146, 8);
            L.Plat(149, 152, 6);
            L.E("molotovero", 150, 5);
            L.Coins(150, 153, 8);
            L.Spikes(156, 157);
            L.E("brawler", 160, 8);
            L.E("goal", 166, 8);
            L.E("player", 2, 8);
            var def = L.Build();
            def.name = "NIVEL 2  -  Los muelles"; def.shortName = "Los Muelles"; def.theme = "w2"; def.time = 270; def.music = "l2";
            def.weapon = "shotgun"; def.hint = "Cuidado con los molotov. Usa las plataformas móviles sobre el agua.";
            list.Add(def);
        }
        {
            var L = new LevelBuilder(96, 12);
            L.Ground(0, 20);
            L.Coins(5, 7, 8);
            L.Q(9, 6, "coin");
            L.Q(10, 6, "ammo");
            L.E("brawler", 12, 8);
            L.E("tommy", 17, 7);
            L.Row(17, 18, 8, 'C');
            L.Ground(23, 60);
            L.E("pistolero", 27, 8);
            L.E("check", 30, 8);
            L.Plat(32, 34, 6);
            L.E("molotovero", 33, 5);
            L.Coins(35, 38, 8);
            L.E("brawler", 37, 8);
            L.Spikes(40, 41);
            L.Plat(39, 42, 6);
            L.Coins(39, 42, 5);
            L.E("barrels", 46, 8);
            L.E("tommy", 49, 8);
            L.E("crow", 52, 4);
            L.E("crow", 55, 5);
            L.Q(51, 6, "heart");
            L.Q(53, 6, "ammo");
            L.E("pistolero", 57, 8);
            L.Ground(63, 95);
            L.Coins(63, 64, 8);
            L.Row(65, 65, 6, 'B');
            L.Lucky(66, 6, "tommy");
            L.Row(67, 67, 6, 'B');
            L.Q(68, 6, "heart");
            L.E("check", 71, 8);
            L.Col(90, 0, 8, 'C');
            L.Col(91, 0, 11, 'C');
            L.Plat(77, 79, 6);
            L.Plat(84, 86, 6);
            L.Plat(80, 83, 4);
            L.E("boss", 85, 8);
            L.E("marlin", 88, 8);
            L.E("player", 2, 8);
            var def = L.Build();
            def.name = "NIVEL 3  -  La mansión (JEFE FINAL)"; def.shortName = "La Mansión"; def.theme = "w3"; def.time = 300; def.music = "l2";
            def.weapon = "tommy"; def.hint = "Don Vittorio te espera al final. Consigue la Tommy gun en el Lucky Block.";
            def.hasArena = true; def.arenaX0 = 74; def.arenaX1 = 89; def.arenaTrigger = 75; def.arenaWallX = 73;
            list.Add(def);
        }
        return list;
    }
}