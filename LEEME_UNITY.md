# Angel vs la Mafia  -  Proyecto de Unity 2D

Plataformas 2D estilo Mario: 3 niveles, jefe final (Don Vittorio), 9 tipos de enemigos/obstáculos,
armas que salen de los Lucky Blocks (rojo vino), música distinta en el jefe, menú, vidas y tiempo límite.

## Cómo abrirlo y compilarlo
1. Abre **Unity Hub** → **Add** → **Add project from disk** y elige esta carpeta (`Angel-vs-la-Mafia-Unity`).
2. Usa **Unity 2021.3 LTS o más nuevo** (2022 LTS y Unity 6 también sirven). Si Unity Hub avisa que el proyecto
   viene de otra versión, elige tu versión instalada y acepta "Upgrade"/"Continue"; no hay nada que migrar.
3. Espera a que importe. Al terminar se crea sola la escena `Assets/Scenes/Main.unity`
   (si no se creó: menú **Angel vs la Mafia → Preparar proyecto**, y luego abre esa escena).
4. Pulsa **Play**. (Cualquier escena sirve: el juego también se arranca solo si no encuentra el objeto `Juego`.)
5. Para compilar: **File → Build Settings → PC, Mac & Linux Standalone → Build**.
   La escena `Main` ya queda añadida a "Scenes In Build".

## Controles
| Acción | Teclas |
|---|---|
| Moverse | Flechas o A / D |
| Saltar (mantener = más alto) | Flecha arriba, W o Espacio |
| **Correr (sprint)** | **Mantener Shift** |
| Golpear / disparar | X, J o Z |
| Cambiar de arma | 1-4 o Q |
| Bajar de plataforma fina | Flecha abajo o S |
| Pausa / sonido | P o Esc / M |

## Estructura
```
Assets/
  Scripts/
    AngelGame.Core.cs     datos, entrada, carga de imágenes, bucle principal (60 pasos/s)
    AngelGame.Play.cs     jugador, bloques, enemigos, balas, objetos, jefe y flujo de niveles
    AngelGame.Render.cs   dibujo del mundo, HUD y pantallas (menú, historia, game over, victoria)
    LevelData.cs          los 3 niveles (mapa de tiles + enemigos + objetos)
    Snd.cs                efectos y 4 músicas sintetizados por código (sin archivos de audio)
  Editor/AngelProjectSetup.cs   crea la escena y ajusta el nombre/ventana del juego
  StreamingAssets/Art/    sprites PNG (personajes, objetos, tiles, fondos)
```
* Los sprites se cargan en tiempo de ejecución desde `StreamingAssets/Art` con filtro *Point* (pixel art nítido),
  por eso no hace falta configurar ningún importador.
* El juego se dibuja con IMGUI (`OnGUI`) sobre una pantalla virtual de 1024x576 que se escala a cualquier ventana.
* La entrada se lee de los eventos de teclado de IMGUI, así funciona tanto con el *Input Manager* antiguo como con el *Input System* nuevo.

## Créditos
Sprites de los gánsteres: "Gangsters pack" gratuito de CraftPix.net. Todo lo demás (tiles, fondos, objetos, enemigos extra,
Marlin, sonido y código) fue creado para este proyecto.
