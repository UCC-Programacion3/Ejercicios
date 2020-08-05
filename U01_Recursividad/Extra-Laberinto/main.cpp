#include <SFML/Graphics.hpp>
#include <future>
#include <thread>

#include "LaberintoSolver.h"
#include "MazeGenerator.h"

using namespace sf;

void setTexture(MazeGenerator &m, const Texture &texture, Sprite *tiles);
void dibujarSolucion(RenderWindow &w, int *s, CircleShape *c);

// Constantes para modificar visualización
void tilesPosition(MazeGenerator &m, Sprite *tiles);
#define ANCHO 50
#define ALTO 30
#define RADIO 8
#define DELAY 20

int main(int argc, char **argv) {
  auto *m = new MazeGenerator(ANCHO, ALTO);
  int solucion[ANCHO * ALTO];
  int delay = DELAY;

  /// Lleno de 0 el arreglo solución
  std::fill(std::begin(solucion), std::end(solucion), 0);

  RenderWindow w(VideoMode(ANCHO * 32, ALTO * 32), "Laberinto");
  Texture tileSet;
  Sprite tiles[ANCHO * ALTO];

  CircleShape puntos[ANCHO * ALTO];
  /// Posiciono todos los circulos
  for (int fila = 0; fila < ANCHO; ++fila)
    for (int colum = 0; colum < ALTO; ++colum)
      puntos[fila + colum * ANCHO].setPosition(16 - RADIO + fila * 32,
                                               16 - RADIO + colum * 32);

  if (!tileSet.loadFromFile("tileLab.png")) {
    std::cout << "No se encontró tileLab.png" << std::endl;
    exit(1);
  }

  /// Asigno textura a los sprites
  for (int colum = 0; colum < ALTO; ++colum) {
    for (int fila = 0; fila < ANCHO; ++fila) {
      int spPos = m->getData(fila, colum);
      int idx = fila + colum * ANCHO;
      tiles[idx].setTexture(tileSet);
    }
  }

  tilesPosition(*m, tiles);

  // Inicio el solver
  auto solving =
      std::async(std::launch::async, solve, m, solucion, &delay, 0, 0);

  w.setFramerateLimit(60);
  while (w.isOpen()) {
    Event e{};
    while (w.pollEvent(e)) {
      if (e.type == Event::Closed) {
        delay = 0;
        w.close();
      }

      if (e.type == Event::KeyPressed && e.key.code == Keyboard::Space) {
        std::cout << "Apreté espacio" << std::endl;
        if (solving.wait_for(std::chrono::seconds(0)) ==
            std::future_status::ready) {
          //          delete m;
          //          m = new MazeGenerator(ANCHO, ALTO);
          m->reGenerate();
          tilesPosition(*m, tiles);
          std::fill(std::begin(solucion), std::end(solucion), 0);

          solving =
              std::async(std::launch::async, solve, m, solucion, &delay, 0, 0);
        }
      }
    }

    // Dibujo el laberinto y la escena
    w.clear(Color(255, 255, 255, 255));

    for (const auto &tile : tiles) {
      w.draw(tile);
    }
    dibujarSolucion(w, solucion, puntos);

    w.display();
  }
  return 0;
}
void tilesPosition(MazeGenerator &m, Sprite *tiles) {
  for (int colum = 0; colum < ALTO; ++colum) {
    for (int fila = 0; fila < ANCHO; ++fila) {
      int spPos = m.getData(fila, colum);
      int idx = fila + colum * ANCHO;

      tiles[idx].setPosition(fila * 32, colum * 32);
      tiles[idx].setTextureRect(IntRect(0, spPos * 32, 32, 32));
    }
  }
}

/**
 * Función para dibujar el laberinto
 * @param m
 */
void setSprites(MazeGenerator &m, Sprite *tiles) {
  for (int colum = 0; colum < ALTO; ++colum) {
    for (int fila = 0; fila < ANCHO; ++fila) {
      int spPos = m.getData(fila, colum);
      int idx = fila + colum * ANCHO;
      tiles[idx].setPosition(fila * 32, colum * 32);
      tiles[idx].setTextureRect(sf::IntRect(0, spPos * 32, 32, 32));
    }
  }
}

void dibujarSolucion(RenderWindow &w, int *sol, CircleShape *cir) {

  for (int fila = 0; fila < ANCHO; ++fila) {
    for (int colum = 0; colum < ALTO; ++colum) {
      switch (sol[fila + colum * ANCHO]) {
      case 1:
        cir[fila + colum * ANCHO].setFillColor(sf::Color::Yellow);
        break;
      case 2:
        cir[fila + colum * ANCHO].setFillColor(sf::Color::Red);
        break;
      case 3:
        cir[fila + colum * ANCHO].setFillColor(sf::Color::Green);
        break;
      }
      if (sol[fila + colum * ANCHO] != 0) {
        cir[fila + colum * ANCHO].setRadius(RADIO);
        w.draw(cir[fila + colum * ANCHO]);
      }
    }
  }
}
