using System.Collections.Generic;
using UnityEngine;

/* AngelGame.Render.cs : dibujo del mundo, HUD y pantallas (IMGUI sobre pantalla virtual 1024x576) */
public partial class AngelGame
{
    Texture2D white, circle;
    GUIStyle style;
    float ox, oy;                       // desplazamiento actual (cámara + temblor)
    readonly Dictionary<string, Color> colorCache = new Dictionary<string, Color>();
    const int AL_LEFT = 0, AL_CENTER = 1, AL_RIGHT = 2;
    static readonly Color OUTLINE = new Color(0.063f, 0.063f, 0.11f, 1f);

    void InitRender()
    {
        white = new Texture2D(1, 1, TextureFormat.RGBA32, false);
        white.SetPixel(0, 0, Color.white); white.Apply();
        circle = new Texture2D(64, 64, TextureFormat.RGBA32, false);
        for (int y = 0; y < 64; y++)
            for (int x = 0; x < 64; x++)
            {
                float d = Mathf.Sqrt((x - 31.5f) * (x - 31.5f) + (y - 31.5f) * (y - 31.5f));
                circle.SetPixel(x, y, new Color(1, 1, 1, Mathf.Clamp01(32f - d)));
            }
        circle.filterMode = FilterMode.Bilinear; circle.Apply();
    }

    Color C(string hex)
    {
        Color c;
        if (!colorCache.TryGetValue(hex, out c)) { c = Hex(hex); colorCache[hex] = c; }
        return c;
    }

    // ---------------------------------------------------------------- PRIMITIVAS
    void Img(Texture2D t, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh,
             bool flip = false, float alpha = 1f, float rotRad = 0f, float pvx = 0f, float pvy = 0f)
    {
        if (t == null) return;
        float u = sx / t.width, v = 1f - (sy + sh) / t.height, uw = sw / t.width, vh = sh / t.height;
        if (flip) { u += uw; uw = -uw; }
        Rect r = new Rect(Mathf.Round(dx + ox), Mathf.Round(dy + oy), dw, dh);
        GUI.color = new Color(1f, 1f, 1f, alpha);
        if (rotRad != 0f)
        {
            Matrix4x4 m = BeginRot(rotRad, new Vector2(pvx + ox, pvy + oy));
            GUI.DrawTextureWithTexCoords(r, t, new Rect(u, v, uw, vh));
            GUI.matrix = m;
        }
        else GUI.DrawTextureWithTexCoords(r, t, new Rect(u, v, uw, vh));
    }

    // Rota alrededor de un pivote en coordenadas de la pantalla virtual. (GUIUtility.RotateAroundPivot falla cuando
    // GUI.matrix está escalado, que es nuestro caso: producía objetos gigantes/desplazados e invisibles.)
    // Devuelve la matriz anterior para restaurarla con GUI.matrix = m.
    Matrix4x4 BeginRot(float rotRad, Vector2 pivot)
    {
        Matrix4x4 m = GUI.matrix;
        GUI.matrix = m
            * Matrix4x4.TRS(new Vector3(pivot.x, pivot.y, 0f), Quaternion.Euler(0f, 0f, rotRad * Mathf.Rad2Deg), Vector3.one)
            * Matrix4x4.TRS(new Vector3(-pivot.x, -pivot.y, 0f), Quaternion.identity, Vector3.one);
        return m;
    }

    void ImgFull(Texture2D t, float dx, float dy, float dw, float dh, bool flip = false, float alpha = 1f, float rotRad = 0f, float pvx = 0f, float pvy = 0f)
    {
        if (t == null) return;
        Img(t, 0, 0, t.width, t.height, dx, dy, dw, dh, flip, alpha, rotRad, pvx, pvy);
    }

    void Fill(float x, float y, float w, float h, Color c, float rotRad = 0f)
    {
        GUI.color = c;
        Rect r = new Rect(x + ox, y + oy, w, h);
        if (rotRad != 0f)
        {
            Matrix4x4 m = BeginRot(rotRad, r.center);
            GUI.DrawTexture(r, white);
            GUI.matrix = m;
        }
        else GUI.DrawTexture(r, white);
    }

    void Ell(float cx, float cy, float rx, float ry, Color c)
    {
        GUI.color = c;
        GUI.DrawTexture(new Rect(cx - rx + ox, cy - ry + oy, rx * 2, ry * 2), circle);
    }

    void Stroke(float x, float y, float w, float h, float th, Color c)
    {
        Fill(x, y, w, th, c); Fill(x, y + h - th, w, th, c); Fill(x, y, th, h, c); Fill(x + w - th, y, th, h, c);
    }

    void Panel(float x, float y, float w, float h, float a = 0.6f)
    {
        Fill(x, y, w, h, new Color(8f / 255f, 8f / 255f, 22f / 255f, a));
        Stroke(x, y, w, h, 1, new Color(1, 1, 1, 0.18f));
    }

    void Txt(string s, float x, float y, int size, Color col, int al = AL_LEFT, float alpha = 1f)
    {
        if (style == null)
        {
            style = new GUIStyle(GUI.skin.label);
            style.fontStyle = FontStyle.Bold; style.wordWrap = false; style.clipping = TextClipping.Overflow;
            style.normal.textColor = Color.white; style.padding = new RectOffset(0, 0, 0, 0);
        }
        style.fontSize = size;
        style.alignment = al == AL_LEFT ? TextAnchor.MiddleLeft : (al == AL_CENTER ? TextAnchor.MiddleCenter : TextAnchor.MiddleRight);
        const float bw = 1600f;
        float rx = al == AL_LEFT ? x : (al == AL_CENTER ? x - bw / 2 : x - bw);
        Rect r = new Rect(rx + ox, y - size + oy, bw, size * 2);
        float d = Mathf.Max(1.5f, size / 10f);
        GUI.color = new Color(1, 1, 1, alpha);
        GUI.contentColor = OUTLINE;
        for (int i = 0; i < 8; i++)
        {
            float a = i * Mathf.PI / 4f;
            GUI.Label(new Rect(r.x + Mathf.Cos(a) * d, r.y + Mathf.Sin(a) * d, r.width, r.height), s, style);
        }
        GUI.contentColor = col;
        GUI.Label(r, s, style);
        GUI.contentColor = Color.white;
    }

    void Txt(string s, float x, float y, int size, string col, int al = AL_LEFT, float alpha = 1f) { Txt(s, x, y, size, C(col), al, alpha); }

    void DrawSprite(string name, int frame, float cx, float feet, bool flip, float scale = 1f, float alpha = 1f, float ax = 60f)
    {
        Texture2D t = Tex(name); if (t == null) return;
        int n = Mathf.Max(1, t.width / 128); frame = Mathf.Clamp(frame, 0, n - 1);
        float dx = flip ? cx - (128 - ax) * scale : cx - ax * scale;
        Img(t, frame * 128, 0, 128, 128, Mathf.Round(dx), Mathf.Round(feet) - 128 * scale, 128 * scale, 128 * scale, flip, alpha);
    }

    // ---------------------------------------------------------------- MUNDO
    void DrawBackground(float camx, float camy, string theme, int hTiles)
    {
        float maxY = hTiles * TILE - VH;
        string[] names = { "cielo", "lejos", "cerca" };
        float[] fxs = { 0.02f, 0.12f, 0.3f }, fys = { 0.12f, 0.22f, 0.34f };
        for (int i = 0; i < 3; i++)
        {
            Texture2D im = Tex("bg_" + theme + "_" + names[i]); if (im == null) continue;
            float y0 = VH - im.height + (maxY - camy) * fys[i];
            float x0 = -((camx * fxs[i]) % VW); if (x0 > 0) x0 -= VW;
            for (float x = x0; x < VW; x += VW) ImgFull(im, Mathf.Round(x), Mathf.Round(y0), im.width, im.height);
        }
    }

    int TileIndex(char c, Lvl l, int tx, int ty)
    {
        switch (c)
        {
            case '#': return IsSolid(TileAt(l, tx, ty - 1)) ? 1 : 0;
            case 'B': return 2;
            case '-': return 3;
            case 'C': return 4;
            case '?': return 5 + ((gt >> 4) & 1);
            case 'W': return 7 + ((gt >> 4) & 1);
            case 'u': return 9;
            case '^': return 10;
        }
        return -1;
    }

    void DrawTiles()
    {
        Texture2D atlas = Tex("tiles_" + L.def.theme); if (atlas == null) return;
        int x0 = Mathf.Max(0, Mathf.FloorToInt(camX / TILE)), x1 = Mathf.Min(L.w - 1, Mathf.FloorToInt((camX + VW) / TILE));
        int y0 = Mathf.Max(0, Mathf.FloorToInt(camY / TILE)), y1 = Mathf.Min(L.h - 1, Mathf.FloorToInt((camY + VH) / TILE));
        for (int ty = y0; ty <= y1; ty++)
            for (int tx = x0; tx <= x1; tx++)
            {
                char c = L.tiles[ty][tx]; if (c == ' ') continue;
                int i = TileIndex(c, L, tx, ty); if (i < 0) continue;
                float by = 0; int b;
                if (L.bumps.TryGetValue(ty * 1000 + tx, out b)) by = -Mathf.Sin(b / 12f * Mathf.PI) * 14;
                Img(atlas, i * 64, 0, 64, 64, tx * TILE, ty * TILE + by, 64, 64);
            }
        foreach (Mp m in L.mps) for (int i = 0; i < 3; i++) Img(atlas, 3 * 64, 0, 64, 64, Mathf.Round(m.x) + i * 64, m.y, 64, 64);
    }

    void DrawDecor()
    {
        foreach (Decor d in L.decor)
        {
            if (d.type == "check") Img(Tex("farola"), d.on ? 32 : 0, 0, 32, 64, d.x - 16, d.y - 64, 32, 64);
            else if (d.type == "barrelSpawn") ImgFull(Tex("pila_barriles"), d.x - 32, d.y - 64, 64, 64);
        }
        if (L.goal != null) { int f = (gt >> 4) & 1; Img(Tex("puerta"), 2 + f * 64, 2, 64, 128, L.goal.x - 32, L.goal.y - 128, 64, 128); }
    }

    void DrawItems()
    {
        foreach (Item it in L.items)
        {
            float bob = Mathf.Sin((gt + it.t) / 14f) * 3;
            switch (it.type)
            {
                case "coin": Img(Tex("moneda"), (Mathf.FloorToInt((gt + it.t) / 6f) % 4) * 32, 0, 32, 32, it.x - 16, it.y - 16 + bob, 32, 32); break;
                case "ammo": ImgFull(Tex("caja_municion"), it.x - 24, it.y - 36, 48, 36); break;
                case "heart": ImgFull(Tex("corazon"), it.x - 16, it.y - 34 + bob, 32, 35); break;
                case "1up": ImgFull(Tex("vida_extra"), it.x - 16, it.y - 34 + bob, 32, 35); break;
                case "weapon":
                    {
                        Texture2D im = Tex(WEAPONS[it.id].img); if (im == null) break;
                        Ell(it.x, it.y - 16, 34, 34, new Color(1f, 0.965f, 0.627f, 0.5f + 0.3f * Mathf.Sin(gt / 6f)));
                        ImgFull(im, it.x - im.width / 2f, it.y - im.height - 4 + bob, im.width, im.height);
                        break;
                    }
            }
        }
    }

    void EnemyFrame(Enemy e, out string nm, out int fr)
    {
        float t = e.animT; nm = "brawler_idle"; fr = 0;
        switch (e.type)
        {
            case "brawler":
                if (e.dead) { nm = "brawler_dead"; fr = Mathf.Min(4, e.deadT / 6); }
                else if (e.hurtT > 0) { nm = "brawler_hurt"; fr = 1; }
                else if (e.state == "attack") { nm = "brawler_attack_1"; fr = Mathf.Min(5, e.st / 4); }
                else if (e.state == "chase") { nm = "brawler_run"; fr = Mathf.FloorToInt(t / 4) % 10; }
                else { nm = "brawler_walk"; fr = Mathf.FloorToInt(t / 6) % 10; }
                break;
            case "tommy":
                if (e.dead) { nm = "tommy_dead"; fr = Mathf.Min(4, e.deadT / 6); }
                else if (e.hurtT > 0) { nm = "tommy_hurt"; fr = 1; }
                else if (e.state == "shoot") { nm = "tommy_shot"; fr = (e.st / 6) % 4; }
                else { nm = "tommy_idle"; fr = Mathf.FloorToInt(t / 9) % 6; }
                break;
            case "pistolero":
                if (e.dead) { nm = "pistolero_dead"; fr = Mathf.Min(4, e.deadT / 6); }
                else if (e.hurtT > 0) { nm = "pistolero_hurt"; fr = 1; }
                else if (e.state == "aim") { nm = "pistolero_shot"; fr = Mathf.Min(11, Mathf.FloorToInt(e.st / 3.4f)); }
                else { nm = "pistolero_walk"; fr = Mathf.FloorToInt(t / 6) % 10; }
                break;
            case "molotovero":
                if (e.dead) { nm = "molotovero_dead"; fr = Mathf.Min(4, e.deadT / 6); }
                else if (e.hurtT > 0) { nm = "molotovero_hurt"; fr = 1; }
                else if (e.state == "throw") { nm = "molotovero_attack_1"; fr = Mathf.Min(5, e.st / 5); }
                else { nm = "molotovero_idle"; fr = Mathf.FloorToInt(t / 9) % 7; }
                break;
        }
    }

    void DrawEnemies()
    {
        foreach (Enemy e in L.enemies)
        {
            if (e.x < camX - 200 || e.x > camX + VW + 200) continue;
            float alpha = 1;
            if (e.dead) alpha = Mathf.Clamp01(1 - (e.deadT - 50) / 30f);
            else if (e.flash > 0 && (e.flash >> 1) % 2 == 0) alpha = 0.45f;
            if (e.type == "crow")
            {
                int f = e.state == "dive" ? 0 : Mathf.FloorToInt(e.animT / 6) % 2;
                Img(Tex("cuervo"), 2 + f * 44, 2, 44, 32, e.x - 22, e.y - 28, 44, 32, e.dir < 0, alpha);
                continue;
            }
            if (e.type == "barrel")
            {
                ImgFull(Tex("barril"), e.x - 24, e.y - 22 - 24, 48, 48, false, alpha, e.rot, e.x, e.y - 22);
                continue;
            }
            string nm; int fr; EnemyFrame(e, out nm, out fr);
            DrawSprite(nm, fr, e.x, e.y, e.dir < 0, 1, alpha, e.type == "tommy" ? 58f : 60f);
        }
    }

    void DrawBoss()
    {
        Boss B = L.boss; if (B == null) return;
        string nm; int fr;
        if (B.dead) { nm = "jefe_dead"; fr = Mathf.Min(4, B.deadT / 9); }
        else
        {
            switch (B.state)
            {
                case "shoot": nm = "jefe_shot"; fr = Mathf.Min(11, Mathf.FloorToInt(B.st / 4.4f)); break;
                case "charge": nm = "jefe_run"; fr = (B.animT / 4) % 10; break;
                case "air": nm = "jefe_jump"; fr = Mathf.Clamp(Mathf.RoundToInt((B.vy + 17) / 34f * 9), 0, 9); break;
                case "jumpwind": nm = "jefe_jump"; fr = Mathf.Min(2, B.st / 7); break;
                case "stun": nm = "jefe_hurt"; fr = (B.animT / 8) % 4; break;
                default: nm = "jefe_idle"; fr = (B.animT / 9) % 7; break;
            }
        }
        float alpha = 1; if (B.flash > 0 && (B.flash >> 1) % 2 == 0) alpha = 0.5f;
        if (B.dead) alpha = Mathf.Clamp01(1 - (B.deadT - 90) / 40f);
        DrawSprite(nm, fr, B.x, B.y, B.dir < 0, 2, alpha);
    }

    void DrawMarlin()
    {
        Marlin M = L.marlin; if (M == null) return;
        int f = M.state == "hug" ? 2 : (M.t / 24) % 2;
        if (M.state == "caged" || !L.freed)
        {
            float cx = M.x, top = M.y - 150; Color gray = C("#8a8fa3");
            Fill(cx - 2, 0, 4, top - 10, gray);
            Fill(cx - 56, top - 8, 112, 10, C("#4a4e63"));
            for (int i = -48; i <= 48; i += 16) Fill(cx + i - 1.5f, top, 3, M.y - top, gray);
        }
        bool flip = M.state == "walk" || M.state == "hug";
        Img(Tex("marlin"), 2 + f * 68, 2, 68, 72, M.x - 34, M.y - 72, 68, 72, flip);
        if (M.state == "caged" && L.arena && gt % 120 < 60) Txt("¡ANGEL!", M.x, M.y - 175, 20, "#ff9ab0", AL_CENTER);
    }

    void DrawPlayer()
    {
        string nm; int fr;
        if (P.dead) { nm = "angel_dead"; fr = Mathf.Min(4, P.deadT / 7); }
        else if (P.ending) { nm = "angel_idle"; fr = (P.animT / 8) % 7; }
        else if (P.hurtT > 0) { nm = "angel_hurt"; fr = Mathf.Min(3, (22 - P.hurtT) / 6); }
        else if (P.attackT > 0)
        {
            nm = "angel_attack_1";
            fr = P.pose == "shoot" ? 4 : Mathf.Clamp((18 - P.attackT) / 3, 0, 5);
        }
        else if (!P.onGround) { nm = "angel_jump"; fr = Mathf.Clamp(Mathf.RoundToInt((P.vy + 15) / 31f * 9), 0, 9); }
        else if (Mathf.Abs(P.vx) > 3.3f) { nm = "angel_run"; fr = (P.animT / 4) % 10; }
        else if (Mathf.Abs(P.vx) > 0.4f) { nm = "angel_walk"; fr = (P.animT / 5) % 10; }
        else { nm = "angel_idle"; fr = (P.animT / 9) % 7; }
        float alpha = 1; if (P.inv > 0 && !P.dead && ((P.inv >> 2) % 2) == 0) alpha = 0.4f;
        bool flip = P.facing < 0;
        DrawSprite(nm, fr, P.x, P.y, flip, 1, alpha);
        if (!P.dead && P.attackT > 0 && P.pose == "shoot")
        {
            Texture2D gim = Tex(WEAPONS[P.weapon].img);
            if (gim != null)
            {
                float gw = gim.width, gh = gim.height, gy = Mathf.Round(P.y) - 51 - gh * 0.5f - 1;
                float gx = flip ? Mathf.Round(P.x) - 20 - gw : Mathf.Round(P.x) + 20;
                Img(gim, 0, 0, gw, gh, gx, gy, gw, gh, flip, alpha);
            }
        }
    }

    void DrawBullets()
    {
        foreach (Bullet b in L.bullets)
        {
            if (b.kind == "mol")
                Img(Tex("molotov"), 3 + ((gt >> 3) % 2) * 30, 3, 30, 54, b.x - 15, b.y - 27, 30, 54, false, 1f, b.rot, b.x, b.y);
            else if (b.kind == "wave")
            {
                float ry = 18 + Mathf.Sin(gt / 3f) * 4;
                Ell(b.x, b.y - 14, 22, ry, new Color(1f, 0.702f, 0.278f, 0.85f));
                Ell(b.x, b.y - 12, 11, 9, new Color(1f, 0.949f, 0.69f, 0.85f));
            }
            else if (b.big)
            {
                Ell(b.x, b.y, 8, 8, C("#ff3a2a")); Ell(b.x, b.y, 3.5f, 3.5f, C("#ffd0a0"));
            }
            else
            {
                float ang = Mathf.Atan2(b.vy, b.vx);
                Fill(b.x - 7, b.y - 2, 14, 4, b.team == "p" ? C("#fff3a0") : C("#ff7a4a"), ang);
                float ix = b.x + Mathf.Cos(ang) * 4.5f, iy = b.y + Mathf.Sin(ang) * 4.5f;
                Fill(ix - 2.5f, iy - 1, 5, 2, b.team == "p" ? Color.white : C("#ffe0c0"), ang);
            }
        }
        foreach (Flame f in L.flames)
        {
            float a = f.t > f.life - 30 ? (f.life - f.t) / 30f : 1f;
            Img(Tex("llamarada"), (f.t / 5 % 3) * 44, 0, 44, 56, f.x - 22, f.y - 56, 44, 56, false, a);
        }
    }

    void DrawFx()
    {
        foreach (Fx f in L.fx)
        {
            float a = 1f - (float)f.t / f.life;
            if (f.k == "coin") Img(Tex("moneda"), ((f.t >> 2) % 4) * 32, 0, 32, 32, f.x - 16, f.y - 16, 32, 32, false, a);
            else if (f.k == "heartfx") ImgFull(Tex("corazon"), f.x - 12, f.y - 12, 24, 26, false, a);
            else
            {
                float r = f.r * (f.k == "puff" ? 1 + f.t / 18f : 1f);
                Color c = f.col; c.a = a; Ell(f.x, f.y, r, r, c);
            }
        }
        foreach (FText t in L.texts) Txt(t.s, t.x, t.y, 20, t.col, AL_CENTER, Mathf.Clamp01(1.4f - t.t / 55f));
    }

    void DrawWorld()
    {
        ox = 0; oy = 0;
        DrawBackground(camX, camY, L.def.theme, L.h);
        ox = -Mathf.Round(camX); oy = -Mathf.Round(camY);
        if (shake > 0) { ox += Rand(-shake, shake); oy += Rand(-shake, shake); }
        DrawTiles(); DrawDecor(); DrawMarlin(); DrawItems(); DrawEnemies(); DrawBoss(); DrawPlayer(); DrawBullets(); DrawFx();
        ox = 0; oy = 0;
    }

    // ---------------------------------------------------------------- HUD Y PANTALLAS
    void DrawHUD()
    {
        Panel(0, 0, VW, 56, 0.55f);
        Txt("ANGEL", 16, 14, 15, "#9fd0ff");
        for (int i = 0; i < P.maxHp; i++) ImgFull(Tex("corazon"), 16 + i * 30, 24, 26, 28, false, i < P.hp ? 1f : 0.22f);
        Txt("VIDAS", 128, 14, 15, "#9fd0ff"); Txt("x " + lives, 128, 38, 24, "#ffffff");
        Txt("MONEDAS", 232, 14, 15, "#9fd0ff"); Img(Tex("moneda"), 0, 0, 32, 32, 230, 26, 26, 26); Txt(coins + "/10", 262, 40, 20, "#ffd24a");
        Txt("PUNTOS", 360, 14, 15, "#9fd0ff"); Txt(score.ToString("D6"), 360, 38, 24, "#ffffff");
        Txt("NIVEL " + (idx + 1), 560, 14, 15, "#9fd0ff"); Txt(L.def.shortName, 560, 38, 20, "#ffffff");
        int secs = Mathf.CeilToInt(time); bool low = secs <= 30;
        Txt("TIEMPO", VW - 16, 14, 15, "#9fd0ff", AL_RIGHT);
        Txt(secs.ToString(), VW - 16, 38, 28, low && ((gt >> 4) % 2 == 1) ? "#ff5a4a" : (low ? "#ffb0a0" : "#ffffff"), AL_RIGHT);
        // arma
        Panel(12, VH - 64, 292, 52, 0.6f);
        string w = P.weapon; WeaponDef W = WEAPONS[w];
        if (w == "punch") Txt("PUÑOS", 28, VH - 38, 20, "#ffffff");
        else
        {
            Texture2D im = Tex(W.img);
            if (im != null) ImgFull(im, 24, VH - 38 - im.height / 2f, im.width, im.height);
            Txt(W.name, 100, VH - 46, 15, "#ffffff"); Txt("MUNICIÓN: " + ammo[w], 100, VH - 26, 15, "#ffd24a");
        }
        Txt("[1-4 / Q] arma", 292, VH - 12, 12, "#9aa3c0", AL_RIGHT);
        // jefe
        Boss B = L.boss;
        if (B != null && B.active && !(B.dead && B.deadT > 100))
        {
            float bw = 460, bx = 350, by = VH - 44;
            Txt("DON VITTORIO", bx + bw / 2, by - 12, 18, "#ffd2d2", AL_CENTER);
            Fill(bx - 3, by - 3, bw + 6, 26, C("#1a0a10"));
            float frac = (float)B.hp / B.maxHp;
            Fill(bx, by, bw * frac, 20, B.phase == 2 ? C("#ff8a1a") : C("#d82a3a"));
            Fill(bx, by, bw * frac, 6, new Color(1, 1, 1, 0.25f));
            Stroke(bx - 3, by - 3, bw + 6, 26, 2, Color.white);
        }
        // avisos
        if (notice != null)
        {
            float a = Mathf.Clamp01(Mathf.Min(notice.t / 12f, (210 - notice.t) / 25f));
            Txt(notice.s, VW / 2, 130, 40, "#ffe27a", AL_CENTER, a);
            if (notice.sub != "") Txt(notice.sub, VW / 2, 172, 20, "#ffffff", AL_CENTER, a);
        }
        // etiqueta de muerte
        if (P.dead && P.deadT > 18)
        {
            Fill(0, 0, VW, VH, new Color(0, 0, 0, Mathf.Min(0.55f, (P.deadT - 18) / 40f)));
            Txt("¡ANGEL HA MUERTO!", VW / 2, VH / 2 - 20, 66, "#ff3a3a", AL_CENTER);
            Txt(lives > 1 ? "Vidas restantes: " + (lives - 1) : "Esa era tu última vida...", VW / 2, VH / 2 + 40, 26, "#ffffff", AL_CENTER);
        }
        if (paused)
        {
            Fill(0, 0, VW, VH, new Color(0, 0, 0, 0.6f));
            Txt("PAUSA", VW / 2, VH / 2 - 20, 72, "#ffffff", AL_CENTER); Txt("Pulsa P o ESC para continuar", VW / 2, VH / 2 + 40, 24, "#cfd6f0", AL_CENTER);
        }
        if (Snd.Muted) Txt("SONIDO: OFF (M)", VW - 16, VH - 14, 14, "#ff9a9a", AL_RIGHT);
    }

    void DrawMenuBackdrop()
    {
        DrawBackground(menuX * 4, 192, "w1", 12);
        Texture2D at = Tex("tiles_w1"); if (at == null) return;
        float off = -((menuX * 14) % 64);
        for (float x = off - 64; x < VW + 64; x += 64)
        {
            Img(at, 0, 0, 64, 64, Mathf.Round(x), 448, 64, 64);
            Img(at, 64, 0, 64, 64, Mathf.Round(x), 512, 64, 64);
        }
    }

    void DrawMenu()
    {
        DrawMenuBackdrop();
        Fill(0, 0, VW, VH, new Color(0, 0, 0, 0.28f));
        DrawSprite("angel_idle", (gt / 9) % 7, 230, 448, false, 2);
        DrawSprite("jefe_idle", (gt / 9) % 7, 800, 448, true, 2);
        Txt("ANGEL", VW / 2, 98, 104, "#ffd24a", AL_CENTER);
        Txt("vs  LA  MAFIA", VW / 2, 182, 54, "#ff4a5a", AL_CENTER);
        Txt("El rescate de Marlin", VW / 2, 232, 26, "#ffffff", AL_CENTER);
        if ((gt >> 5) % 2 == 0) Txt("PRESIONA ENTER PARA JUGAR", VW / 2, 300, 30, "#ffffff", AL_CENTER);
        Panel(60, 470, VW - 120, 92, 0.65f);
        Txt("FLECHAS / A D: mover      W / FLECHA ARRIBA / ESPACIO: saltar      X / J: golpear o disparar      SHIFT: correr", VW / 2, 490, 15, "#e8ecff", AL_CENTER);
        Txt("1-4 / Q: cambiar de arma      FLECHA ABAJO / S: bajar de plataformas      P: pausa      M: sonido", VW / 2, 513, 15, "#e8ecff", AL_CENTER);
        Txt("Salta sobre los enemigos  -  Golpea bloques desde abajo  -  Llega a la puerta antes de que se acabe el tiempo", VW / 2, 538, 14, "#ffd24a", AL_CENTER);
    }

    void DrawStory()
    {
        DrawMenuBackdrop(); Fill(0, 0, VW, VH, new Color(0, 0, 0, 0.55f));
        StoryPage pg = STORY[page]; int t = storyT / 2;
        if (pg.who == "marlin") Img(Tex("marlin"), 2 + 68 * ((gt / 24) % 2), 2, 68, 72, 120, 120, 204, 216);
        else if (pg.who == "boss") DrawSprite("jefe_idle", (gt / 9) % 7, 230, 330, false, 2);
        else DrawSprite("angel_idle", (gt / 9) % 7, 230, 330, false, 2);
        Panel(60, 360, VW - 120, 170, 0.75f);
        int left = t;
        for (int i = 0; i < pg.text.Length; i++)
        {
            string line = pg.text[i];
            string s = line.Substring(0, Mathf.Clamp(left, 0, line.Length));
            left -= line.Length + 1;
            Txt(s, 90, 398 + i * 40, 26, "#ffffff");
        }
        Txt("ENTER: continuar      ESC: saltar historia", VW / 2, 555, 14, "#9aa3c0", AL_CENTER);
        Txt((page + 1) + " / " + STORY.Length, VW - 80, 385, 14, "#9aa3c0", AL_RIGHT);
    }

    void Overlay(float a) { Fill(0, 0, VW, VH, new Color(0, 0, 0, a)); }

    void DrawCard()
    {
        DrawWorld(); Overlay(0.78f);
        bool boss = idx == 2;
        string nm = L.def.name; int k = nm.IndexOf('-'); if (k >= 0) nm = nm.Substring(k + 1);
        nm = nm.Trim().ToUpper().Replace(" (JEFE FINAL)", "");
        Txt("NIVEL " + (idx + 1), VW / 2, 190, 78, boss ? "#ff4a5a" : "#ffd24a", AL_CENTER);
        Txt(nm, VW / 2, 268, 38, "#ffffff", AL_CENTER);
        if (boss) Txt("¡JEFE FINAL: DON VITTORIO!", VW / 2, 322, 28, "#ff8a8a", AL_CENTER);
        Txt("Arma de este mundo: " + WEAPONS[L.def.weapon].name, VW / 2, 380, 22, "#9fd0ff", AL_CENTER);
        Txt(L.def.hint, VW / 2, 420, 18, "#e8ecff", AL_CENTER);
        Txt("Tiempo: " + L.def.time + " s      Vidas: " + lives, VW / 2, 470, 18, "#cfd6f0", AL_CENTER);
        if (cardT > 45 && (gt >> 5) % 2 == 0) Txt("ENTER para empezar", VW / 2, 520, 18, "#ffffff", AL_CENTER);
    }

    void DrawOver()
    {
        DrawWorld(); Overlay(Mathf.Min(0.88f, overT / 50f));
        if (overT > 15)
        {
            Txt(overText, VW / 2, VH / 2 - 40, 68, "#ff3a3a", AL_CENTER);
            Txt(overSub, VW / 2, VH / 2 + 30, 26, "#ffffff", AL_CENTER);
            Txt("Puntos: " + score, VW / 2, VH / 2 + 76, 22, "#ffd24a", AL_CENTER);
            if (overT > 100 && (gt >> 5) % 2 == 0) Txt("ENTER para empezar de nuevo en el Nivel 1", VW / 2, VH / 2 + 130, 20, "#cfd6f0", AL_CENTER);
        }
    }

    void DrawClear()
    {
        DrawWorld(); Overlay(0.55f);
        Txt("¡NIVEL COMPLETADO!", VW / 2, 190, 66, "#ffd24a", AL_CENTER);
        if (clearT > 25) Txt("Bonus de tiempo: +" + bonus, VW / 2, 270, 30, "#ffffff", AL_CENTER);
        if (clearT > 70) Txt("Puntos: " + score, VW / 2, 320, 30, "#9fd0ff", AL_CENTER);
        if (clearT > 110 && (gt >> 5) % 2 == 0) Txt("ENTER para continuar", VW / 2, 400, 20, "#ffffff", AL_CENTER);
    }

    void DrawWin()
    {
        DrawBackground(winT * 0.8f, 192, "w3", 12); Overlay(0.55f);
        Texture2D at = Tex("tiles_w3");
        if (at != null) for (int x = 0; x < VW; x += 64) { Img(at, 0, 0, 64, 64, x, 448, 64, 64); Img(at, 64, 0, 64, 64, x, 512, 64, 64); }
        DrawSprite("angel_idle", (gt / 9) % 7, 430, 448, false, 2);
        Img(Tex("marlin"), 2 + 68 * 2, 2, 68, 72, 590 - 68, 448 - 144, 136, 144, true);
        for (int i = 0; i < 9; i++)
        {
            float y = 400 - ((winT * 1.2f + i * 70) % 330), x = 340 + i * 42 + Mathf.Sin(winT / 20f + i) * 14;
            ImgFull(Tex("corazon"), x, y, 24, 26, false, 0.9f);
        }
        Txt("¡MARLIN ESTÁ A SALVO!", VW / 2, 84, 60, "#ffd24a", AL_CENTER);
        Txt("Angel derrotó a Don Vittorio y acabó con la banda.", VW / 2, 142, 24, "#ffffff", AL_CENTER);
        Txt("FIN", VW / 2, 196, 56, "#ff4a5a", AL_CENTER);
        Txt("Puntos finales: " + score + "   (bonus tiempo y vidas: +" + bonus + ")", VW / 2, 252, 22, "#9fd0ff", AL_CENTER);
        if (winT > 120 && (gt >> 5) % 2 == 0) Txt("ENTER: volver al menú", VW / 2, 300, 20, "#ffffff", AL_CENTER);
        Txt("Gracias por jugar", VW / 2, 548, 18, "#cfd6f0", AL_CENTER);
    }

    // ---------------------------------------------------------------- RENDER PRINCIPAL
    void Render()
    {
        float s = Mathf.Min(Screen.width / (float)VW, Screen.height / (float)VH);
        float offX = (Screen.width - VW * s) / 2f, offY = (Screen.height - VH * s) / 2f;
        GUI.matrix = Matrix4x4.TRS(new Vector3(offX, offY, 0), Quaternion.identity, new Vector3(s, s, 1));
        GUI.BeginGroup(new Rect(0, 0, VW, VH));
        ox = 0; oy = 0;
        Fill(0, 0, VW, VH, C("#0b0b18"));
        switch (state)
        {
            case St.Loading:
                Txt("Cargando... " + loadedCount + "/" + Mathf.Max(1, loadTotal), VW / 2, VH / 2, 32, "#ffffff", AL_CENTER);
                break;
            case St.Menu: DrawMenu(); break;
            case St.Story: DrawStory(); break;
            case St.Card: DrawCard(); break;
            case St.Play: DrawWorld(); DrawHUD(); break;
            case St.Clear: DrawClear(); break;
            case St.Over: DrawOver(); break;
            case St.Win: DrawWin(); break;
        }
        GUI.EndGroup();
        GUI.matrix = Matrix4x4.identity;
        GUI.color = Color.white;
    }
}
