using System.Collections.Generic;
using UnityEngine;

/* AngelGame.Play.cs : jugador, bloques, enemigos, proyectiles, objetos, jefe y flujo del juego */
public partial class AngelGame
{
    // ---------------------------------------------------------------- DAÑO / MUERTE DEL JUGADOR
    void HurtPlayer(int dmg, float fromX)
    {
        if (P.dead || P.inv > 0 || P.ending) return;
        P.hp -= dmg; P.inv = 110; P.hurtT = 22; P.attackT = 0;
        P.vx = (P.x >= fromX ? 1 : -1) * 5; P.vy = -7; P.onGround = false; shake = Mathf.Max(shake, 8);
        if (P.hp <= 0) KillPlayer(); else Snd.Play("hurt");
    }

    void KillPlayer()
    {
        if (P.dead) return;
        P.dead = true; P.deadT = 0; P.hp = 0; P.vx = 0; P.vy = -11; P.attackT = 0;
        Snd.Play("die"); Snd.StopMusic(); shake = 12;
    }

    // ---------------------------------------------------------------- BLOQUES
    void SpawnItem(string type, float x, float y, string id = null, float w = 30, float h = 30, float vy = -8)
    {
        L.items.Add(new Item { type = type, x = x, y = y, w = w, h = h, vx = 0, vy = vy, phys = true, id = id });
    }

    void AddCoin()
    {
        coins++; score += 50;
        if (coins >= 10) { coins -= 10; lives++; Snd.Play("life"); FxText(P.x, P.y - 90, "¡VIDA EXTRA!", "#7dff8a"); }
    }

    void BumpBlock(int tx, int ty)
    {
        char c = L.tiles[ty][tx]; string key = tx + "," + ty; float cx = (tx + 0.5f) * TILE, top = ty * TILE;
        if (c == '?' || c == 'W')
        {
            string item; L.info.TryGetValue(key, out item);
            L.tiles[ty][tx] = 'u'; L.bumps[ty * 1000 + tx] = 0; Snd.Play("bump");
            if (c == 'W') { SpawnItem("weapon", cx, top, item, 44, 28); Snd.Play("item"); }
            else if (item == "coin") { AddCoin(); Snd.Play("coin"); FxCoinPop(cx, top - 10); }
            else if (item == "ammo") SpawnItem("ammo", cx, top);
            else if (item == "heart") SpawnItem("heart", cx, top);
            else if (item == "1up") SpawnItem("1up", cx, top);
        }
        else if (c == 'B')
        {
            L.bumps[ty * 1000 + tx] = 0; Snd.Play("bump"); FxPuff(cx, top, 4, "#b04a3c");
        }
        else return;
        foreach (Enemy e in L.enemies.ToArray())
            if (!e.dead && e.type != "barrel" && Mathf.Abs(e.x - cx) < 46 && Mathf.Abs(e.y - top) < 8) DamageEnemy(e, 3, cx);
    }

    // ---------------------------------------------------------------- JUGADOR
    void SelectWeapon(string w)
    {
        if (w == "punch" || (have[w] && ammo[w] > 0)) { P.weapon = w; Snd.Play("tick"); }
    }

    void CycleWeapon()
    {
        int i = System.Array.IndexOf(W_ORDER, P.weapon);
        for (int k = 1; k <= W_ORDER.Length; k++)
        {
            string w = W_ORDER[(i + k) % W_ORDER.Length];
            if (w == "punch" || (have[w] && ammo[w] > 0)) { P.weapon = w; Snd.Play("tick"); return; }
        }
    }

    Bullet MkBullet(float x, float y, float vx, float vy, int dmg, int boss, int life)
    {
        return new Bullet { kind = "bullet", team = "p", x = x, y = y, vx = vx, vy = vy, dmg = dmg, boss = boss, life = life };
    }

    void DoAttack()
    {
        string w = P.weapon; WeaponDef W = WEAPONS[w]; int f = P.facing;
        if (w != "punch" && ammo[w] > 0)
        {
            float ox = P.x + f * 44, oy = P.y - 50;
            ammo[w]--;
            if (w == "pistol") L.bullets.Add(MkBullet(ox, oy, f * 11, 0, 1, 2, 55));
            else if (w == "shotgun")
            {
                for (int i = -2; i <= 2; i++) { float a = i * 0.1f; L.bullets.Add(MkBullet(ox, oy, f * Mathf.Cos(a) * 10, Mathf.Sin(a) * 10, 1, 2, 24)); }
                P.vx -= f * 2;
            }
            else { float a = Rand(-0.05f, 0.05f); L.bullets.Add(MkBullet(ox, oy, f * Mathf.Cos(a) * 12, Mathf.Sin(a) * 12, 1, 1, 50)); }
            P.cd = W.cd; P.attackT = 12; P.pose = "shoot"; Snd.Play(W.snd); FxSpark(ox + f * 14, oy, 4);
            if (ammo[w] <= 0) { Notify("SIN MUNICIÓN", "Busca cajas de munición"); P.weapon = BestWeapon(); }
        }
        else
        {
            P.cd = 26; P.attackT = 18; P.pose = "punch"; P.punchHit = new HashSet<object>(); Snd.Play("punch");
        }
    }

    void UpdateMps()
    {
        foreach (Mp m in L.mps)
        {
            float px = m.x; m.x += m.dir * 1.4f;
            if (m.x >= m.x1) { m.x = m.x1; m.dir = -1; } else if (m.x <= m.x0) { m.x = m.x0; m.dir = 1; }
            m.dx = m.x - px;
        }
    }

    void UpdatePlayer()
    {
        P.animT++;
        if (P.dead) { P.deadT++; P.vy = Mathf.Min(P.vy + GRAV, MAXFALL); P.vx *= 0.9f; MoveBody(P, L); return; }
        if (P.ending) { P.vx *= 0.8f; P.vy = Mathf.Min(P.vy + GRAV, MAXFALL); MoveBody(P, L); return; }
        if (P.inv > 0) P.inv--;
        if (P.hurtT > 0) P.hurtT--;
        if (P.cd > 0) P.cd--;
        if (P.attackT > 0) P.attackT--;
        bool ctrl = P.hurtT <= 0;
        float ax = 0;
        if (ctrl) { if (Down(K_LEFT)) ax -= 1; if (Down(K_RIGHT)) ax += 1; }
        bool run = ctrl && Down(K_RUN);                        // SHIFT = correr
        float accel = (P.onGround ? 0.62f : 0.4f) * (run ? 1.3f : 1f), maxV = run ? 7.2f : 4.4f;
        if (ax != 0)
        {
            P.vx = Clamp(P.vx + ax * accel, -maxV, maxV); P.facing = ax > 0 ? 1 : -1;
            if (Mathf.Abs(P.vx) > maxV) P.vx = Mathf.Sign(P.vx) * maxV;
        }
        else { P.vx *= P.onGround ? 0.7f : 0.96f; if (Mathf.Abs(P.vx) < 0.08f) P.vx = 0; }
        // salto (con coyote time y buffer)
        if (P.onGround) P.coyote = 7; else if (P.coyote > 0) P.coyote--;
        if (ctrl && Hit(K_JUMP)) P.jbuf = 7; else if (P.jbuf > 0) P.jbuf--;
        if (P.jbuf > 0 && P.coyote > 0) { P.vy = -17.6f; P.jbuf = 0; P.coyote = 0; P.onGround = false; Snd.Play("jump"); FxPuff(P.x, P.y, 4); }
        P.vy = Mathf.Min(P.vy + GRAV, MAXFALL);
        if (P.vy < -4 && !Down(K_JUMP)) P.vy += 0.9f;
        // atravesar plataformas finas hacia abajo
        if (ctrl && Hit(K_DOWN)) P.dropT = 12;
        P.drop = P.dropT > 0; if (P.dropT > 0) P.dropT--;
        // armas
        if (Hit(KeyCode.Alpha1, KeyCode.Keypad1)) SelectWeapon("punch");
        if (Hit(KeyCode.Alpha2, KeyCode.Keypad2)) SelectWeapon("pistol");
        if (Hit(KeyCode.Alpha3, KeyCode.Keypad3)) SelectWeapon("shotgun");
        if (Hit(KeyCode.Alpha4, KeyCode.Keypad4)) SelectWeapon("tommy");
        if (Hit(KeyCode.Q, KeyCode.E)) CycleWeapon();
        if (ctrl && Down(K_ATK) && P.cd <= 0) DoAttack();
        // plataformas móviles
        P.onMp = null;
        foreach (Mp m in L.mps)
        {
            if (P.vy >= 0 && P.y <= m.y + 1 && P.y + P.vy >= m.y && P.x + P.w / 2 > m.x && P.x - P.w / 2 < m.x + m.w && !P.drop)
            {
                P.y = m.y; P.vy = 0; P.onMp = m; P.x += m.dx;
            }
        }
        Mp wasMp = P.onMp;
        MoveBody(P, L, BumpBlock);
        if (wasMp != null) P.onGround = true;
        // golpe con el puño
        if (P.pose == "punch" && P.attackT <= 13 && P.attackT >= 6)
        {
            Rect r = new Rect(P.facing > 0 ? P.x : P.x - 60, P.y - 62, 60, 62);
            foreach (Enemy e in L.enemies.ToArray())
            {
                if (e.dead || e.type == "barrel" || P.punchHit.Contains(e)) continue;
                if (RectsOverlap(r, BodyRect(e))) { P.punchHit.Add(e); DamageEnemy(e, 1, P.x); FxSpark(e.x, e.y - 40, 4); }
            }
            Boss B = L.boss;
            if (B != null && B.active && !B.dead && !P.punchHit.Contains(B) && RectsOverlap(r, BodyRect(B))) { P.punchHit.Add(B); HitBoss(2); }
        }
        // pinchos
        Rect rr = BodyRect(P);
        for (int ty = Mathf.FloorToInt(rr.y / TILE); ty <= Mathf.FloorToInt((rr.y + rr.height - 1) / TILE); ty++)
            for (int tx = Mathf.FloorToInt(rr.x / TILE); tx <= Mathf.FloorToInt((rr.x + rr.width) / TILE); tx++)
                if (TileAt(L, tx, ty) == '^' && RectsOverlap(rr, new Rect(tx * TILE + 8, ty * TILE + 34, 48, 30)))
                {
                    if (P.inv <= 0) HurtPlayer(1, (tx + 0.5f) * TILE);
                }
        // fuego
        foreach (Flame fl in L.flames) if (RectsOverlap(rr, new Rect(fl.x - 24, fl.y - 50, 48, 50))) HurtPlayer(1, fl.x);
        // caída al vacío
        if (P.y > L.h * TILE + 140) KillPlayer();
        if (P.onGround && P.vy == 0 && Mathf.Abs(P.vx) > 3.5f && gt % 9 == 0) FxPuff(P.x - P.facing * 8, P.y, 1);
    }

    // ---------------------------------------------------------------- ENEMIGOS
    void DamageEnemy(Enemy e, int dmg, float srcX)
    {
        if (e.dead) return;
        e.hp -= dmg; e.flash = 10;
        if (e.hp <= 0) KillEnemy(e);
        else { Snd.Play("punch"); e.hurtT = 14; if (e.type != "barrel") e.vx = (e.x >= srcX ? 1 : -1) * 2.2f; }
    }

    void KillEnemy(Enemy e)
    {
        if (e.type == "barrel") { e.dead = true; e.remove = true; FxBoom(e.x, e.y - 20, 10); Snd.Play("boom"); score += 50; return; }
        e.dead = true; e.deadT = 0; e.vx = (R() - 0.5f) * 3; e.vy = -6; score += e.score;
        FxText(e.x, e.y - 70, "+" + e.score, "#ffe27a"); Snd.Play("stomp");
        if ((e.type == "tommy" || e.type == "pistolero") && R() < 0.4f) SpawnItem("ammo", e.x, e.y - 30);
    }

    void EnemyShoot(Enemy e, float ox, float oy, float speed, bool aimed)
    {
        float vx = e.dir * speed, vy = 0;
        if (aimed)
        {
            float dx = P.x - ox, dy = (P.y - 34) - oy, d = Mathf.Sqrt(dx * dx + dy * dy); if (d < 0.0001f) d = 1;
            vx = dx / d * speed; vy = dy / d * speed;
        }
        L.bullets.Add(new Bullet { kind = "bullet", team = "e", x = ox, y = oy, vx = vx, vy = vy, dmg = 1, life = 120 });
        Snd.Play("enemyshot");
    }

    void ThrowMolotov(Enemy e)
    {
        float sx = e.x + e.dir * 30, sy = e.y - 62, T = 62, g = 0.35f;
        float tx = Clamp(P.x, e.x - 480, e.x + 480), ty = P.y - 10;
        L.bullets.Add(new Bullet { kind = "mol", team = "e", x = sx, y = sy, vx = (tx - sx) / T, vy = (ty - sy - 0.5f * g * T * T) / T, g = g, life = 200 });
        Snd.Play("tick");
    }

    void UpdateEnemy(Enemy e)
    {
        e.animT++;
        if (e.flash > 0) e.flash--;
        if (e.hurtT > 0) e.hurtT--;
        if (e.cd > 0) e.cd--;
        if (e.dead) { e.deadT++; e.vy = Mathf.Min(e.vy + GRAV, MAXFALL); e.vx *= 0.94f; MoveBody(e, L); return; }
        float dx = P.x - e.x, dy = P.y - e.y, adx = Mathf.Abs(dx); int sgn = dx >= 0 ? 1 : -1; bool alive = !P.dead;
        if (e.hurtT > 0 && e.type != "crow") { e.vy = Mathf.Min(e.vy + GRAV, MAXFALL); MoveBody(e, L); e.vx *= 0.8f; return; }
        switch (e.type)
        {
            case "brawler":
                if (e.state == "patrol")
                {
                    e.vx = e.dir * 1.0f;
                    if (e.hitWall || !GroundAhead(e, L, e.dir)) e.dir *= -1;
                    if (alive && adx < e.range && Mathf.Abs(dy) < 100) e.state = "chase";
                }
                else if (e.state == "chase")
                {
                    e.dir = sgn;
                    e.vx = GroundAhead(e, L, e.dir) ? e.dir * 3.0f : 0;
                    if (adx < 78 && e.cd <= 0 && Mathf.Abs(dy) < 70) { e.state = "attack"; e.st = 0; e.cd = 80; e.vx = 0; }
                    if (!alive || adx > e.range + 220) e.state = "patrol";
                }
                else if (e.state == "attack")
                {
                    e.vx = 0; e.st++;
                    if (e.st == 11 && alive && adx < 100 && Mathf.Abs(dy) < 70) HurtPlayer(1, e.x);
                    if (e.st >= 24) e.state = "chase";
                }
                break;
            case "tommy":
                if (alive && adx < 600 && Mathf.Abs(dy) < 160) e.dir = sgn;
                if (e.state == "idle" && e.cd <= 0 && alive && adx < 560 && Mathf.Abs(dy) < 160) { e.state = "shoot"; e.st = 0; }
                if (e.state == "shoot")
                {
                    e.st++;
                    if (e.st == 6 || e.st == 14 || e.st == 22) EnemyShoot(e, e.x + e.dir * 54, e.y - 42, 7.5f, false);
                    if (e.st >= 34) { e.state = "idle"; e.cd = 110; }
                }
                break;
            case "pistolero":
                if (e.state == "patrol")
                {
                    e.vx = e.dir * 0.8f;
                    if (e.hitWall || !GroundAhead(e, L, e.dir)) e.dir *= -1;
                    if (alive && e.cd <= 0 && adx < 520 && Mathf.Abs(dy) < 140) { e.state = "aim"; e.st = 0; e.vx = 0; e.dir = sgn; }
                }
                else if (e.state == "aim")
                {
                    e.vx = 0; e.st++; e.dir = sgn;
                    if (e.st == 21) EnemyShoot(e, e.x + e.dir * 62, e.y - 44, 6.5f, true);
                    if (e.st >= 40) { e.state = "patrol"; e.cd = 100; }
                }
                break;
            case "molotovero":
                if (alive) e.dir = sgn;
                if (e.state == "idle" && e.cd <= 0 && alive && adx < 560 && Mathf.Abs(dy) < 460) { e.state = "throw"; e.st = 0; }
                if (e.state == "throw") { e.st++; if (e.st == 14) ThrowMolotov(e); if (e.st >= 30) { e.state = "idle"; e.cd = 150; } }
                break;
            case "crow":
                if (e.state == "fly")
                {
                    e.x += e.dir * 1.1f; e.y = e.y0 + Mathf.Sin(e.animT / 18f) * 14;
                    if (Mathf.Abs(e.x - e.x0) > 170) e.dir *= -1;
                    if (alive && e.cd <= 0 && adx < 280 && P.y > e.y + 40)
                    {
                        float d = Mathf.Sqrt(dx * dx + (dy - 30) * (dy - 30)); if (d < 0.0001f) d = 1;
                        e.vx = dx / d * 4.8f; e.vy = (dy - 30) / d * 4.8f; e.state = "dive"; e.st = 0; e.dir = sgn;
                    }
                }
                else if (e.state == "dive")
                {
                    e.st++; e.x += e.vx; e.y += e.vy;
                    char c = TileAt(L, Mathf.FloorToInt(e.x / TILE), Mathf.FloorToInt(e.y / TILE));
                    if (e.st > 55 || IsSolid(c)) { e.state = "retreat"; e.cd = 120; }
                }
                else if (e.state == "retreat")
                {
                    float rx = e.x0 - e.x, ry = e.y0 - e.y, d = Mathf.Sqrt(rx * rx + ry * ry); if (d < 0.0001f) d = 1;
                    e.x += rx / d * 2.6f; e.y += ry / d * 2.6f; e.dir = rx >= 0 ? 1 : -1;
                    if (d < 6) e.state = "fly";
                }
                return;
            case "barrel":
                e.vx = -2.3f; e.rot += e.vx / 21f;
                e.vy = Mathf.Min(e.vy + GRAV, MAXFALL); MoveBody(e, L);
                if (e.hitWall || e.y > L.h * TILE + 100) { e.remove = true; FxBoom(e.x, e.y - 20, 6); }
                return;
        }
        e.vy = Mathf.Min(e.vy + GRAV, MAXFALL); MoveBody(e, L);
    }

    void UpdateDecor()
    {
        foreach (Decor d in L.decor)
        {
            if (d.type == "barrelSpawn")
            {
                if (!P.dead && Mathf.Abs(P.x - d.x) < 850 && Mathf.Abs(P.y - d.y) < 500)
                {
                    if (--d.cd <= 0)
                    {
                        d.cd = 210;
                        L.enemies.Add(new Enemy { type = "barrel", x = d.x - 40, y = d.y, w = 42, h = 42, vx = -2.3f, vy = 0, hp = 3, score = 50, state = "roll" });
                    }
                }
            }
            else if (d.type == "check" && !d.on && !P.dead && Mathf.Abs(P.x - d.x) < 46 && Mathf.Abs(P.y - d.y) < 110)
            {
                d.on = true; cpX = d.x; cpY = d.y; Snd.Play("check"); FxText(d.x, d.y - 80, "CHECKPOINT", "#ffe9a0"); FxSpark(d.x, d.y - 50, 8);
            }
        }
    }

    void PlayerEnemyCollisions()
    {
        if (P.dead || P.ending) return;
        Rect pr = BodyRect(P);
        foreach (Enemy e in L.enemies.ToArray())
        {
            if (e.dead) continue;
            Rect er = BodyRect(e); if (!RectsOverlap(pr, er)) continue;
            bool stomp = P.vy > 0.5f && (P.y - P.vy) <= er.y + 24 && P.y < er.y + er.height * 0.6f;
            if (stomp)
            {
                if (e.type == "barrel") { P.vy = -10; Snd.Play("bump"); }
                else { DamageEnemy(e, 3, P.x); P.vy = Down(K_JUMP) ? -14 : -9.5f; Snd.Play("stomp"); FxPuff(e.x, e.y - 50, 5); }
            }
            else HurtPlayer(1, e.x);
        }
    }

    // ---------------------------------------------------------------- PROYECTILES / OBJETOS
    void Shatter(Bullet b)
    {
        int ty = Mathf.FloorToInt(b.y / TILE); int tx = Mathf.FloorToInt(b.x / TILE);
        while (ty < L.h && !IsSolid(TileAt(L, tx, ty))) ty++;
        L.flames.Add(new Flame { x = b.x, y = ty * TILE, life = 170 });
        Snd.Play("glass"); fireDelay = 4; FxPuff(b.x, b.y, 5, "#7fd08a");
    }

    void UpdateBullets()
    {
        foreach (Bullet b in L.bullets.ToArray())
        {
            b.t++; b.life--;
            if (b.kind == "mol")
            {
                b.vy += b.g; b.x += b.vx; b.y += b.vy; b.rot += 0.25f;
                if (!P.dead && RectsOverlap(BodyRect(P), new Rect(b.x - 10, b.y - 14, 20, 28))) { Shatter(b); HurtPlayer(1, b.x); b.life = 0; continue; }
                if (IsSolid(TileAt(L, Mathf.FloorToInt(b.x / TILE), Mathf.FloorToInt(b.y / TILE)))) { Shatter(b); b.life = 0; }
                continue;
            }
            b.x += b.vx; b.y += b.vy;
            if (b.kind == "wave")
            {
                if (!P.dead && RectsOverlap(BodyRect(P), new Rect(b.x - 22, b.y - 34, 44, 34))) HurtPlayer(1, b.x);
                continue;
            }
            if (IsSolid(TileAt(L, Mathf.FloorToInt(b.x / TILE), Mathf.FloorToInt(b.y / TILE)))) { FxSpark(b.x, b.y, 3); b.life = 0; continue; }
            if (b.team == "p")
            {
                foreach (Enemy e in L.enemies.ToArray())
                {
                    if (e.dead) continue;
                    Rect er = BodyRect(e);
                    if (b.x > er.x - 4 && b.x < er.x + er.width + 4 && b.y > er.y && b.y < er.y + er.height) { DamageEnemy(e, b.dmg, b.x - b.vx * 3); FxSpark(b.x, b.y, 3); b.life = 0; break; }
                }
                Boss B = L.boss;
                if (b.life > 0 && B != null && B.active && !B.dead && b.x > B.x - 24 && b.x < B.x + 24 && b.y > B.y - B.h && b.y < B.y) { HitBoss(b.boss); FxSpark(b.x, b.y, 4); b.life = 0; }
            }
            else if (!P.dead && RectsOverlap(BodyRect(P), new Rect(b.x - 5, b.y - 4, 10, 8))) { HurtPlayer(b.dmg, b.x - b.vx); b.life = 0; }
        }
        L.bullets.RemoveAll(b => !(b.life > 0 && b.x > -100 && b.x < L.w * TILE + 100 && b.y < L.h * TILE + 200));
        foreach (Flame f in L.flames) f.t++;
        L.flames.RemoveAll(f => f.t >= f.life);
    }

    static Rect ItemRect(Item it)
    {
        return it.type == "coin" ? new Rect(it.x - 18, it.y - 18, 36, 36) : new Rect(it.x - it.w / 2, it.y - it.h, it.w, it.h);
    }

    void UpdateItems()
    {
        foreach (Item it in L.items.ToArray())
        {
            it.t++;
            if (it.phys) { it.vy = Mathf.Min(it.vy + GRAV, MAXFALL); MoveBody(it, L); it.vx *= 0.9f; if (it.y > L.h * TILE + 100) it.taken = true; }
            if (P.dead || it.taken) continue;
            if (!RectsOverlap(BodyRect(P), ItemRect(it))) continue;
            it.taken = true;
            switch (it.type)
            {
                case "coin": AddCoin(); Snd.Play("coin"); FxSpark(it.x, it.y, 3); break;
                case "ammo":
                    {
                        bool any = false;
                        foreach (string w in new[] { "pistol", "shotgun", "tommy" })
                            if (have[w]) { ammo[w] = Mathf.Min(WEAPONS[w].max, ammo[w] + WEAPONS[w].box); any = true; }
                        if (!any) score += 100;
                        P.weapon = P.weapon == "punch" ? BestWeapon() : P.weapon;
                        Snd.Play("item"); FxText(it.x, it.y - 40, "+MUNICIÓN", "#ffe27a"); break;
                    }
                case "heart":
                    if (P.hp < P.maxHp) { P.hp++; FxText(it.x, it.y - 40, "+1 SALUD", "#ff8fa0"); }
                    else { score += 300; FxText(it.x, it.y - 40, "+300", "#ffe27a"); }
                    Snd.Play("heart"); break;
                case "1up": lives++; Snd.Play("life"); FxText(it.x, it.y - 40, "¡VIDA EXTRA!", "#7dff8a"); break;
                case "weapon":
                    {
                        string w = it.id; WeaponDef W = WEAPONS[w];
                        have[w] = true; ammo[w] = Mathf.Min(W.max, ammo[w] + W.start); P.weapon = w;
                        Snd.Play("weapon"); Notify("¡CONSEGUISTE " + W.label.ToUpper() + "!", "Pulsa X o J para disparar  |  Q cambia de arma");
                        score += 500; break;
                    }
            }
        }
        L.items.RemoveAll(i => i.taken);
    }

    // ---------------------------------------------------------------- JEFE: DON VITTORIO
    void StartBossFight()
    {
        LevelDef A = L.def; Boss B = L.boss;
        L.arena = true; B.active = true; B.state = "intro"; B.st = 0;
        for (int y = 0; y <= 8; y++) L.tiles[y][A.arenaWallX] = 'C';
        Snd.Play("door"); shake = 14; Snd.Music("boss");
        Notify("DON VITTORIO", "¡Derrótalo y rescata a Marlin!");
    }

    bool HitBoss(int dmg)
    {
        Boss B = L.boss; if (B == null || B.dead || B.state == "intro" || B.state == "wait") return false;
        if (B.inv > 0 && dmg < 4) return false;
        if (B.state == "stun") dmg *= 2;
        B.hp -= dmg; B.flash = 8; B.inv = dmg >= 4 ? 28 : 0; Snd.Play("bosshit");
        if (B.phase == 1 && B.hp <= B.maxHp / 2) { B.phase = 2; Snd.Play("roar"); shake = 14; FxText(B.x, B.y - 150, "¡FURIA!", "#ff6a4a"); }
        if (B.hp <= 0)
        {
            B.hp = 0; B.dead = true; B.deadT = 0; B.vx = 0; Snd.StopMusic(); Snd.Play("boom"); shake = 20;
            score += 5000; FxText(B.x, B.y - 160, "+5000", "#ffe27a");
            L.bullets.RemoveAll(b => b.team != "p"); L.flames.Clear();
        }
        return true;
    }

    void BossChooseAttack(Boss B)
    {
        float r = R(); bool fast = B.phase == 2;
        if (r < 0.4f) { B.state = "shoot"; B.st = 0; }
        else if (r < 0.7f) { B.state = "charge"; B.st = 0; B.dir = P.x > B.x ? 1 : -1; Snd.Play("roar"); }
        else { B.state = "jumpwind"; B.st = 0; }
        B.fast = fast;
    }

    void BossShoot(Boss B)
    {
        float ox = B.x + B.dir * 96, oy = B.y - 84, dx = P.x - ox, dy = (P.y - 34) - oy;
        float bas = Mathf.Atan2(dy, dx);
        float[] spreads = B.phase == 2 ? new[] { -0.22f, 0f, 0.22f } : new[] { 0f };
        foreach (float s in spreads)
            L.bullets.Add(new Bullet { kind = "bullet", team = "e", x = ox, y = oy, vx = Mathf.Cos(bas + s) * 7.2f, vy = Mathf.Sin(bas + s) * 7.2f, dmg = 1, life = 140, big = true });
        Snd.Play("enemyshot");
    }

    void UpdateBoss()
    {
        Boss B = L.boss; if (B == null) return;
        B.animT++;
        if (B.flash > 0) B.flash--;
        if (B.inv > 0) B.inv--;
        if (B.dead)
        {
            B.deadT++; B.vy = Mathf.Min(B.vy + GRAV, MAXFALL); MoveBody(B, L);
            if (B.deadT % 7 == 0 && B.deadT < 110) { FxBoom(B.x + Rand(-40, 40), B.y - Rand(10, 120), 8); Snd.Play("boom"); }
            if (B.deadT == 100) { L.freed = true; Snd.Play("door"); L.marlin.state = "walk"; P.ending = true; P.facing = 1; }
            return;
        }
        if (!B.active) return;
        int face = P.x > B.x ? 1 : -1; bool fury = B.phase == 2;
        switch (B.state)
        {
            case "intro":
                B.st++; B.dir = -1; if (B.st == 25) { Snd.Play("roar"); shake = 10; }
                if (B.st > 110) { B.state = "idle"; B.st = 0; }
                break;
            case "idle":
                B.dir = face; B.st++; B.vx = 0;
                if (B.st > (fury ? 28 : 55)) BossChooseAttack(B);
                break;
            case "shoot":
                B.dir = face; B.st++; B.vx = 0;
                if (B.st == 14 || B.st == 26 || B.st == 38 || (fury && B.st == 50)) BossShoot(B);
                if (B.st > (fury ? 64 : 52)) { B.state = "idle"; B.st = 0; }
                break;
            case "charge":
                B.st++; B.vx = B.dir * (fury ? 7.2f : 6.0f);
                if (B.hitWall) { B.state = "stun"; B.st = 0; B.vx = 0; Snd.Play("slam"); shake = 16; FxPuff(B.x + B.dir * 30, B.y, 8); FxText(B.x, B.y - 150, "¡ATURDIDO!", "#9fe8ff"); }
                else if (B.st > 80) { B.state = "idle"; B.st = 0; B.vx = 0; }
                break;
            case "stun":
                B.st++; B.vx = 0; if (B.st > 115) { B.state = "idle"; B.st = 0; }
                break;
            case "jumpwind":
                B.dir = face; B.st++; B.vx = 0;
                if (B.st == 22) { B.vy = -17.5f; B.vx = Clamp((P.x - B.x) / 40, -6.5f, 6.5f); B.state = "air"; B.onGround = false; }
                break;
            case "air":
                if (B.onGround && B.vy == 0)
                {
                    B.state = "idle"; B.st = 0; B.vx = 0; Snd.Play("slam"); shake = 14; FxPuff(B.x, B.y, 10);
                    foreach (int d in new[] { -1, 1 })
                        L.bullets.Add(new Bullet { kind = "wave", team = "e", x = B.x + d * 40, y = B.y, vx = d * (fury ? 6 : 4.6f), vy = 0, dmg = 1, life = 100 });
                }
                break;
        }
        B.vy = Mathf.Min(B.vy + GRAV, MAXFALL); MoveBody(B, L);
        if (B.state == "air" && B.vy < 0) B.onGround = false;
        // contacto con el jugador
        if (!P.dead && !P.ending)
        {
            Rect br = new Rect(B.x - B.w / 2, B.y - B.h, B.w, B.h), pr = BodyRect(P);
            if (RectsOverlap(br, pr) && B.state != "intro")
            {
                bool stomp = P.vy > 0.5f && (P.y - P.vy) <= br.y + 34;
                if (stomp) { if (HitBoss(5)) { P.vy = -13; FxPuff(B.x, B.y - B.h, 6); } else P.vy = -9; }
                else if (B.state != "stun") HurtPlayer(1, B.x);
            }
        }
        // munición en la arena
        if (L.arena && gt % 600 == 0)
        {
            string w = P.weapon == "punch" ? "pistol" : P.weapon;
            if (have[w] && ammo[w] < 25) SpawnItem("ammo", (L.def.arenaX0 + Rand(2, 13)) * TILE, 70, null, 30, 30, 0);
        }
    }

    void UpdateMarlin()
    {
        Marlin M = L.marlin; if (M == null) return;
        M.t++;
        if (M.state == "walk")
        {
            if (M.x > P.x + 48) M.x -= 2.4f;
            else { M.state = "hug"; M.t = 0; Snd.Play("heart"); }
        }
        else if (M.state == "hug")
        {
            if (M.t % 8 == 0) FxHeart(M.x + Rand(-30, 30), M.y - 80);
            if (M.t == 1) Snd.Play("victory");
            if (M.t > 190) WinGame();
        }
    }

    // ---------------------------------------------------------------- FLUJO DEL JUEGO
    public class StoryPage { public string who; public string[] text; }
    static readonly StoryPage[] STORY =
    {
        new StoryPage { who = "marlin", text = new[] { "Angel y Marlin llevaban años juntos.", "La noche de su aniversario, la banda de Don Vittorio", "irrumpió en la ciudad y se llevó a Marlin." } },
        new StoryPage { who = "boss", text = new[] { "Don Vittorio, el mafioso de la pistola, la tiene", "encerrada en su mansión al otro lado de la ciudad.", "Para llegar hasta él, Angel cruzará el barrio y los muelles." } },
        new StoryPage { who = "angel", text = new[] { "En cada zona hay un LUCKY BLOCK rojo vino con un arma.", "Golpéalo desde abajo: pistola, escopeta y Tommy gun.", "Necesitarás las tres para vencer al jefe. ¡Suerte, Angel!" } }
    };

    void StartGame() { ResetGameData(); StartLevel(0, false); }

    void StartLevel(int index, bool respawn)
    {
        idx = index; L = BuildRuntime(index);
        if (!respawn) { cpX = L.startX; cpY = L.startY; time = L.def.time; }
        else
        {
            time = Mathf.Max(time, 60);
            foreach (Decor d in L.decor) if (d.type == "check" && d.x <= cpX + 1) d.on = true;
            ammo["pistol"] = have["pistol"] ? Mathf.Max(ammo["pistol"], 10) : ammo["pistol"];
            ammo["shotgun"] = have["shotgun"] ? Mathf.Max(ammo["shotgun"], 6) : ammo["shotgun"];
            ammo["tommy"] = have["tommy"] ? Mathf.Max(ammo["tommy"], 40) : ammo["tommy"];
        }
        P = MakePlayer(cpX, cpY);
        shake = 0; notice = null; paused = false; camX = P.x - VW * 0.4f; camY = 0;
        UpdateCamera(true);
        if (respawn) { state = St.Play; Snd.Music(L.def.music); }
        else { state = St.Card; cardT = 0; Snd.StopMusic(); }
    }

    void LoseLife()
    {
        lives--;
        if (lives > 0) StartLevel(idx, true);
        else GameOver("¡ANGEL HA MUERTO!", "Te quedaste sin vidas... vuelves al Nivel 1");
    }

    void GameOver(string text, string sub)
    {
        state = St.Over; overT = 0; overText = text; overSub = sub; Snd.StopMusic(); Snd.Play("gameover");
    }

    void ClearLevel()
    {
        state = St.Clear; clearT = 0; bonus = Mathf.FloorToInt(time) * 10; Snd.StopMusic(); Snd.Play("clear");
    }

    void WinGame()
    {
        state = St.Win; winT = 0; bonus = Mathf.FloorToInt(time) * 10 + lives * 500; score += bonus; Snd.StopMusic();
    }

    void UpdateCamera(bool snap)
    {
        float maxX = Mathf.Max(0, L.w * TILE - VW), maxY = Mathf.Max(0, L.h * TILE - VH);
        float tx = P.x - VW * 0.42f + P.facing * 70, ty = P.y - VH * 0.64f;
        if (L.arena) tx = L.def.arenaX0 * TILE;
        tx = Clamp(tx, 0, maxX); ty = Clamp(ty, 0, maxY);
        if (snap) { camX = tx; camY = ty; }
        else { camX += (tx - camX) * (L.arena ? 0.06f : 0.12f); camY += (ty - camY) * 0.1f; }
        camX = Clamp(camX, 0, maxX); camY = Clamp(camY, 0, maxY);
    }

    void UpdatePlay()
    {
        UpdateMps(); UpdatePlayer();
        foreach (Enemy e in L.enemies.ToArray()) UpdateEnemy(e);
        L.enemies.RemoveAll(e => e.remove || (e.dead && e.deadT > 80));
        UpdateDecor(); PlayerEnemyCollisions(); UpdateBullets(); UpdateItems(); UpdateBoss(); UpdateMarlin();
        foreach (int k in new List<int>(L.bumps.Keys)) { L.bumps[k]++; if (L.bumps[k] > 12) L.bumps.Remove(k); }
        UpdateFx();
        if (fireDelay >= 0 && --fireDelay < 0) Snd.Play("fire");
        if (L.def.hasArena && !L.arena && !P.dead && P.x > L.def.arenaTrigger * TILE) StartBossFight();
        UpdateCamera(false);
        if (shake > 0) shake *= 0.88f;
        if (shake < 0.4f) shake = 0;
        if (notice != null && ++notice.t > 210) notice = null;
        // tiempo
        bool ending = L.boss != null && L.boss.dead;
        if (!P.dead && !ending)
        {
            time -= 1f / 60f;
            if (time < 20 && Mathf.FloorToInt(time) != Mathf.FloorToInt(time + 1f / 60f)) Snd.Play("tick");
            if (time <= 0)
            {
                time = 0;
                if (idx == 0) { FxText(P.x, P.y - 90, "¡TIEMPO!", "#ff6a4a"); KillPlayer(); }
                else { GameOver("¡SE ACABÓ EL TIEMPO!", "No completaste el nivel... vuelves al Nivel 1"); return; }
            }
        }
        // meta
        if (L.goal != null && !P.dead && RectsOverlap(BodyRect(P), new Rect(L.goal.x - 30, L.goal.y - 128, 60, 128))) ClearLevel();
        if (P.dead && P.deadT > 125) LoseLife();
    }

    void UpdateGame()
    {
        gt++;
        if (Hit(KeyCode.M)) Snd.ToggleMute();
        switch (state)
        {
            case St.Loading: break;
            case St.Menu:
                menuX += 0.7f; Snd.Music("menu");
                if (Hit(K_OK) || Hit(KeyCode.Space)) { Snd.Play("select"); state = St.Story; page = 0; storyT = 0; }
                break;
            case St.Story:
                {
                    storyT++; Snd.Music("menu");
                    int full = string.Join("\n", STORY[page].text).Length * 2;
                    if (Hit(K_OK) || Hit(KeyCode.Space))
                    {
                        Snd.Play("select");
                        if (storyT < full) storyT = full + 1;
                        else if (++page >= STORY.Length) StartGame(); else storyT = 0;
                    }
                    if (Hit(KeyCode.Escape)) StartGame();
                    break;
                }
            case St.Card:
                cardT++;
                if (cardT == 1) Snd.Play("select");
                if (cardT > 175 || (cardT > 45 && (Hit(K_OK) || Hit(KeyCode.Space)))) { state = St.Play; Snd.Music(L.def.music); }
                break;
            case St.Play:
                if (Hit(KeyCode.P, KeyCode.Escape)) paused = !paused;
                if (!paused) UpdatePlay();
                break;
            case St.Clear:
                clearT++;
                if (clearT == 70) { score += bonus; Snd.Play("item"); }
                if (clearT > 230 || (clearT > 110 && Hit(K_OK))) StartLevel(idx + 1, false);
                break;
            case St.Over:
                overT++;
                if (overT > 270 || (overT > 100 && Hit(K_OK))) StartGame();
                break;
            case St.Win:
                winT++; Snd.Music("menu");
                if (winT > 120 && Hit(K_OK)) state = St.Menu;
                break;
        }
    }
}
