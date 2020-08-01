#include "LaberintoSolver.h"
#include <chrono>
#include <thread>

#define ESPERA 20

#define arriba() (celda & 0x01) && y != 0
#define abajo() (celda & 0x02) && y != m->getH() - 1
#define derecha() (celda & 0x08) && x != 0
#define izquierda() (celda & 0x04) && x != m->getW() - 1

void pintar(MazeGenerator *m, int solucion[], unsigned x, unsigned y,
            int color) {
  solucion[x + y * m->getW()] = color;
  std::this_thread::sleep_for(std::chrono::milliseconds(ESPERA));
}

bool solve(MazeGenerator *m, int solucion[], unsigned x, unsigned y) {
  int celda = m->getData(x, y);
  m->visitar(x, y);
  pintar(m, solucion, x, y, 1);

  if (x == m->getW() - 1 && y == m->getH() - 1) {
    pintar(m, solucion, x, y, 3); // Encontre
    return true;
  }
  if (abajo() && !m->esVisitado(x, y + 1)) {
    if (solve(m, solucion, x, y + 1)) {
      pintar(m, solucion, x, y, 3); // Encontre
      return true;
    }
  }
  if (arriba() && !m->esVisitado(x, y - 1)) {
    if (solve(m, solucion, x, y - 1)) {
      pintar(m, solucion, x, y, 3); // Encontre
      return true;
    }
  }
  if (izquierda() && !m->esVisitado(x + 1, y)) {
    if (solve(m, solucion, x + 1, y)) {
      pintar(m, solucion, x, y, 3); // Encontre
      return true;
    }
  }
  if (derecha() && !m->esVisitado(x - 1, y)) {
    if (solve(m, solucion, x - 1, y)) {
      pintar(m, solucion, x, y, 3); // Encontre
      return true;
    }
  }

  pintar(m, solucion, x, y, 2); // Encontre
  return false;
}
