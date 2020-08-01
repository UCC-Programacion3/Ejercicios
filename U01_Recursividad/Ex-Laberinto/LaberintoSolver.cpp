#include "LaberintoSolver.h"

#include "Pila.h"

typedef struct {
  unsigned x;
  unsigned y;
} coord;

#define arriba() (celda & 0x01) && y != 0
#define abajo() (celda & 0x02) && y != h - 1
#define derecha() (celda & 0x08) && x != 0
#define izquierda() (celda & 0x04) && x != w - 1

/**
 * Función recursiva para solucionar el laberinto
 * @param x Pocición x de la celda actual
 * @param y Pocición y de la celda actual
 * @return true si la celda es parte de la solución, sino false
 */
bool LaberintoSolver::solve(unsigned x, unsigned y) {
  int celda = m->getData(x, y);
  m->visitar(x, y);
  pintar(x, y, 1);
  if (x == w - 1 && y == h - 1) {
    pintar(x, y, 2); // Encontre
    return true;
  }
  if (abajo() && !m->esVisitado(x, y + 1)) {
    if (solve(x, y + 1)) {
      pintar(x, y, 2); // Encontre
      return true;
    }
  }
  if (arriba() && !m->esVisitado(x, y - 1)) {
    if (solve(x, y - 1)) {
      pintar(x, y, 2); // Encontre
      return true;
    }
  }
  if (izquierda() && !m->esVisitado(x + 1, y)) {
    if (solve(x + 1, y)) {
      pintar(x, y, 2); // Encontre
      return true;
    }
  }
  if (derecha() && !m->esVisitado(x - 1, y)) {
    if (solve(x - 1, y)) {
      pintar(x, y, 2); // Encontre
      return true;
    }
  }

  pintar(x, y, 0); // No sol
  return false;
}

/**
 * Constructor de LaberintoSolver
 * @param callback Función callback que hace algo segun si es solución o no la
 * celda actual
 * @param m Laberinto a solucionar
 */
LaberintoSolver::LaberintoSolver(Funcion callback, MazeGenerator *m) {
  this->pintar = callback;
  this->m = m;
  this->w = m->getW();
  this->h = m->getH();
}

/**
 * Ejecuta el solver desde la posicion 0 0
 */
void LaberintoSolver::run() { solve(0, 0); }
