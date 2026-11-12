using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Sonido 100% sintetizado por código (sin archivos de audio).
/// Genera los efectos y las 4 músicas (menú, nivel 1, nivel 2/mansión, jefe) como AudioClip al iniciar.
/// </summary>
public static class Snd
{
    const int SR = 22050;
    static AudioSource sfx, mus;
    static readonly Dictionary<string, AudioClip> sfxClips = new Dictionary<string, AudioClip>();
    static readonly Dictionary<string, AudioClip> musClips = new Dictionary<string, AudioClip>();
    static bool muted;
    static string current;
    static readonly System.Random rnd = new System.Random(7);

    public static bool Muted { get { return muted; } }
    public static string CurrentTrack { get { return current; } }

    public static void Init(GameObject go)
    {
        sfx = go.AddComponent<AudioSource>(); sfx.playOnAwake = false; sfx.volume = 0.6f;
        mus = go.AddComponent<AudioSource>(); mus.playOnAwake = false; mus.loop = true; mus.volume = 0.27f;
    }

    public static void Play(string name)
    {
        if (muted || sfx == null) return;
        AudioClip c;
        if (sfxClips.TryGetValue(name, out c)) sfx.PlayOneShot(c);
    }

    public static void Music(string name)
    {
        if (mus == null || current == name) return;
        AudioClip c;
        if (!musClips.TryGetValue(name, out c)) return; // aún no generado: se reintenta en el siguiente frame
        mus.Stop(); current = name; mus.clip = c; mus.mute = muted; mus.Play();
    }

    public static void StopMusic() { if (mus != null) mus.Stop(); current = null; }

    public static bool ToggleMute()
    {
        muted = !muted;
        if (sfx != null) sfx.mute = muted;
        if (mus != null) mus.mute = muted;
        return muted;
    }

    // ------------------------------------------------------------ SÍNTESIS
    static double Mtof(double m) { return 440.0 * Math.Pow(2.0, (m - 69.0) / 12.0); }

    class Buf
    {
        public float[] d; public bool wrap; public double maxT;
        public Buf(double seconds, bool wrap) { d = new float[(int)(seconds * SR)]; this.wrap = wrap; }
        public void Add(int idx, float v)
        {
            if (wrap) idx = ((idx % d.Length) + d.Length) % d.Length;
            else if (idx < 0 || idx >= d.Length) return;
            d[idx] += v;
        }
    }

    static void Tone(Buf b, double t, double dur, string type, double vol, double freq, double slideTo = 0)
    {
        int s0 = (int)(t * SR), n = (int)((dur + 0.02) * SR);
        double phase = 0;
        if (t + dur > b.maxT) b.maxT = t + dur;
        for (int i = 0; i < n; i++)
        {
            double tt = i / (double)SR;
            double f = freq;
            if (slideTo > 0) f = tt <= dur ? freq * Math.Pow(Math.Max(20.0, slideTo) / freq, tt / dur) : Math.Max(20.0, slideTo);
            phase += f / SR; double ph = phase - Math.Floor(phase);
            double env;
            if (tt < 0.008) env = 0.0001 * Math.Pow(vol / 0.0001, tt / 0.008);
            else if (tt <= dur) env = vol * Math.Pow(0.0001 / vol, (tt - 0.008) / (dur - 0.008));
            else env = 0;
            double s;
            switch (type)
            {
                case "sine": s = Math.Sin(2 * Math.PI * ph); break;
                case "square": s = ph < 0.5 ? 1 : -1; break;
                case "sawtooth": s = 2 * ph - 1; break;
                default: s = 4 * Math.Abs(ph - 0.5) - 1; break; // triangle
            }
            b.Add(s0 + i, (float)(s * env));
        }
    }

    static void Noise(Buf b, double t, double dur, double vol, string ftype, double ffreq, double q = 1)
    {
        int s0 = (int)(t * SR), n = (int)((dur + 0.02) * SR);
        if (t + dur > b.maxT) b.maxT = t + dur;
        double a1 = 1 - Math.Exp(-2 * Math.PI * ffreq / SR);
        double a2 = 1 - Math.Exp(-2 * Math.PI * (ffreq * 1.5) / SR);
        double a3 = 1 - Math.Exp(-2 * Math.PI * (ffreq / 1.5) / SR);
        double lp = 0, lpA = 0, lpB = 0;
        for (int i = 0; i < n; i++)
        {
            double tt = i / (double)SR;
            double x = rnd.NextDouble() * 2 - 1;
            double y;
            lp += a1 * (x - lp);
            if (ftype == "highpass") y = x - lp;
            else if (ftype == "bandpass") { lpA += a2 * (x - lpA); lpB += a3 * (x - lpB); y = (lpA - lpB) * 2.2; }
            else y = lp * 1.6;
            double env = tt <= dur ? vol * Math.Pow(0.0001 / vol, tt / dur) : 0;
            b.Add(s0 + i, (float)(y * env));
        }
    }

    static AudioClip MakeClip(string name, Buf b, bool loop)
    {
        int len = loop ? b.d.Length : Math.Min(b.d.Length, (int)((b.maxT + 0.05) * SR));
        var data = new float[len];
        for (int i = 0; i < len; i++) data[i] = Math.Max(-1f, Math.Min(1f, b.d[i]));
        var c = AudioClip.Create(name, len, 1, SR, false);
        c.SetData(data, 0);
        return c;
    }

    // ------------------------------------------------------------ EFECTOS
    static void Seq(Buf b, double t, double step, double dur, string type, double vol, params int[] fs)
    {
        for (int i = 0; i < fs.Length; i++) if (fs[i] > 0) Tone(b, t + i * step, dur, type, vol, fs[i]);
    }

    static AudioClip BuildSfx(string n)
    {
        var b = new Buf(2.4, false); double t = 0;
        switch (n)
        {
            case "jump": Tone(b, t, 0.16, "square", 0.16, 300, 640); break;
            case "coin": Tone(b, t, 0.07, "square", 0.14, 988); Tone(b, t + 0.07, 0.18, "square", 0.14, 1319); break;
            case "stomp": Tone(b, t, 0.12, "square", 0.25, 220, 60); Noise(b, t, 0.08, 0.2, "lowpass", 900); break;
            case "punch": Noise(b, t, 0.09, 0.3, "bandpass", 700, 1.2); Tone(b, t, 0.08, "triangle", 0.3, 140, 70); break;
            case "pistol": Noise(b, t, 0.12, 0.4, "bandpass", 1800, 0.8); Tone(b, t, 0.1, "sawtooth", 0.14, 520, 90); break;
            case "shotgun": Noise(b, t, 0.35, 0.65, "lowpass", 1800); Tone(b, t, 0.25, "sawtooth", 0.28, 180, 40); break;
            case "tommy": Noise(b, t, 0.06, 0.32, "bandpass", 2400, 0.9); Tone(b, t, 0.05, "square", 0.1, 380, 120); break;
            case "enemyshot": Noise(b, t, 0.1, 0.28, "bandpass", 1300, 0.9); Tone(b, t, 0.09, "sawtooth", 0.1, 260, 80); break;
            case "hurt": Tone(b, t, 0.28, "sawtooth", 0.22, 420, 110); break;
            case "die": Seq(b, t, 0.13, 0.16, "triangle", 0.3, 392, 330, 262, 196, 131); break;
            case "bump": Tone(b, t, 0.1, "triangle", 0.4, 150, 90); break;
            case "item": Seq(b, t, 0.06, 0.1, "square", 0.13, 523, 659, 784, 1047); break;
            case "weapon": Seq(b, t, 0.07, 0.14, "square", 0.15, 392, 523, 659, 784, 1047, 1319); Noise(b, t + 0.3, 0.1, 0.2, "highpass", 5000); break;
            case "life": Seq(b, t, 0.08, 0.12, "square", 0.13, 659, 784, 1319, 1047, 1175, 1568); break;
            case "boom": Noise(b, t, 0.7, 0.8, "lowpass", 900); Tone(b, t, 0.5, "sawtooth", 0.35, 90, 30); break;
            case "glass": Noise(b, t, 0.16, 0.3, "highpass", 4500); Tone(b, t, 0.1, "triangle", 0.1, 1800, 800); break;
            case "fire": Noise(b, t, 0.45, 0.3, "bandpass", 600, 0.6); break;
            case "check": Seq(b, t, 0.09, 0.2, "triangle", 0.2, 784, 988, 1175); break;
            case "select": Tone(b, t, 0.08, "square", 0.14, 660); Tone(b, t + 0.07, 0.1, "square", 0.14, 880); break;
            case "bosshit": Tone(b, t, 0.14, "sawtooth", 0.3, 110, 60); Noise(b, t, 0.08, 0.3, "lowpass", 1200); break;
            case "roar": Tone(b, t, 0.9, "sawtooth", 0.35, 70, 38); Tone(b, t, 0.9, "square", 0.2, 73, 40); Noise(b, t, 0.9, 0.18, "lowpass", 500); break;
            case "slam": Noise(b, t, 0.4, 0.7, "lowpass", 400); Tone(b, t, 0.3, "sine", 0.6, 60, 28); break;
            case "door": Noise(b, t, 0.5, 0.35, "lowpass", 500); Tone(b, t, 0.5, "square", 0.12, 80, 50); break;
            case "clear": Seq(b, t, 0.12, 0.18, "square", 0.16, 523, 659, 784, 1047, 784, 1047, 1319); break;
            case "gameover": Seq(b, t, 0.18, 0.24, "triangle", 0.3, 392, 370, 349, 330, 311, 294, 262, 196); break;
            case "victory": Seq(b, t, 0.14, 0.2, "square", 0.15, 523, 659, 784, 1047, 0, 784, 1047, 1319, 1568, 0, 1319, 1568, 2093); break;
            case "tick": Tone(b, t, 0.05, "square", 0.1, 1000); break;
            case "heart": Tone(b, t, 0.1, "triangle", 0.25, 784); Tone(b, t + 0.1, 0.2, "triangle", 0.25, 1047); break;
            default: return null;
        }
        return MakeClip(n, b, false);
    }

    static readonly string[] SfxNames = { "jump", "coin", "stomp", "punch", "pistol", "shotgun", "tommy", "enemyshot", "hurt", "die", "bump", "item", "weapon", "life",
        "boom", "glass", "fire", "check", "select", "bosshit", "roar", "slam", "door", "clear", "gameover", "victory", "tick", "heart" };

    // ------------------------------------------------------------ MÚSICA
    class Track
    {
        public int bpm; public string bassType, leadType; public float bassVol, leadVol, drumVol;
        public int[] roots, bass, kick, snare, hat; public int[][] lead;
    }
    static readonly Dictionary<string, Track> Tracks = new Dictionary<string, Track>();
    static readonly string[] TrackNames = { "menu", "l1", "l2", "boss" };

    static void DefineTracks()
    {
        Tracks["menu"] = new Track { bpm=90, bassType="triangle", leadType="sine", bassVol=0.45f, leadVol=0.28f, drumVol=0.5f, roots=new int[]{45,50,43,48}, bass=new int[]{0,-1,-1,7,-1,-1,12,-1,0,-1,-1,7,-1,-1,10,-1}, lead=new int[][]{new int[]{72,0,0,0,76,0,0,0,79,0,0,0,76,0,74,0},new int[]{74,0,0,0,77,0,0,0,81,0,0,0,77,0,76,0},new int[]{71,0,0,0,74,0,0,0,77,0,0,0,74,0,71,0},new int[]{72,0,0,0,76,0,0,0,79,0,0,0,84,0,0,0}}, kick=new int[]{0,8}, snare=new int[0], hat=new int[]{4,12} };
        Tracks["l1"] = new Track { bpm=116, bassType="triangle", leadType="square", bassVol=0.55f, leadVol=0.13f, drumVol=0.8f, roots=new int[]{45,41,43,40}, bass=new int[]{0,-1,7,-1,12,-1,7,-1,0,-1,7,-1,10,-1,12,-1}, lead=new int[][]{new int[]{69,0,0,72,0,0,76,0,74,0,72,0,0,0,0,0},new int[]{69,0,0,72,0,0,77,0,76,0,72,0,0,0,0,0},new int[]{67,0,0,71,0,0,74,0,72,0,71,0,67,0,0,0},new int[]{64,0,68,0,71,0,76,0,75,0,71,0,68,0,0,0}}, kick=new int[]{0,8,10}, snare=new int[]{4,12}, hat=new int[]{0,2,4,6,8,10,12,14} };
        Tracks["l2"] = new Track { bpm=128, bassType="sawtooth", leadType="square", bassVol=0.3f, leadVol=0.12f, drumVol=0.85f, roots=new int[]{38,34,36,33}, bass=new int[]{0,-1,0,12,-1,0,7,-1,0,-1,0,12,-1,10,7,-1}, lead=new int[][]{new int[]{74,0,77,0,81,0,77,0,74,0,0,0,72,0,74,0},new int[]{70,0,74,0,77,0,74,0,70,0,0,0,69,0,70,0},new int[]{72,0,76,0,79,0,76,0,72,0,0,0,71,0,72,0},new int[]{69,0,73,0,76,0,81,0,80,0,76,0,73,0,0,0}}, kick=new int[]{0,4,8,12}, snare=new int[]{4,12}, hat=new int[]{2,6,10,14} };
        Tracks["boss"] = new Track { bpm=156, bassType="sawtooth", leadType="sawtooth", bassVol=0.34f, leadVol=0.12f, drumVol=1f, roots=new int[]{40,36,38,35}, bass=new int[]{0,0,12,0,0,0,12,0,0,0,12,0,0,10,12,0}, lead=new int[][]{new int[]{76,76,0,79,0,76,0,74,76,76,0,79,0,83,0,0},new int[]{72,72,0,76,0,72,0,71,72,72,0,76,0,79,0,0},new int[]{74,74,0,78,0,74,0,73,74,74,0,78,0,81,0,0},new int[]{71,0,75,0,78,0,81,0,80,0,78,0,75,0,71,0}}, kick=new int[]{0,4,8,12,14}, snare=new int[]{4,12}, hat=new int[]{0,2,4,6,8,10,12,14} };
    }

    static bool Has(int[] a, int v) { for (int i = 0; i < a.Length; i++) if (a[i] == v) return true; return false; }

    static AudioClip BuildTrack(string name)
    {
        Track tr = Tracks[name];
        double stepDur = 60.0 / tr.bpm / 4.0;
        int steps = 64; // 4 compases de 16 pasos
        var b = new Buf(steps * stepDur, true);
        for (int step = 0; step < steps; step++)
        {
            double t = step * stepDur;
            int bar = (step / 16) % tr.roots.Length, s = step % 16;
            int bs = tr.bass[s];
            if (bs >= 0) Tone(b, t, 0.22, tr.bassType, tr.bassVol, Mtof(tr.roots[bar] + bs));
            int nt = tr.lead[bar][s];
            if (nt > 0) Tone(b, t, 0.24, tr.leadType, tr.leadVol, Mtof(nt));
            double dv = tr.drumVol;
            if (Has(tr.kick, s)) Tone(b, t, 0.13, "sine", 0.5 * dv, 150, 40);
            if (Has(tr.snare, s)) { Noise(b, t, 0.12, 0.28 * dv, "highpass", 1800); Tone(b, t, 0.07, "triangle", 0.14 * dv, 190); }
            if (Has(tr.hat, s)) Noise(b, t, 0.035, 0.1 * dv, "highpass", 7500);
        }
        return MakeClip("mus_" + name, b, true);
    }

    /// <summary>Genera todos los clips repartiendo el trabajo en varios frames.</summary>
    public static IEnumerator Generate()
    {
        DefineTracks();
        foreach (string n in SfxNames) { var c = BuildSfx(n); if (c != null) sfxClips[n] = c; yield return null; }
        foreach (string n in TrackNames) { musClips[n] = BuildTrack(n); yield return null; }
    }
}
