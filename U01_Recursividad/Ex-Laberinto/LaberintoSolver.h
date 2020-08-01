#ifndef U01_RECURSIVIDAD_EX_LABERINTO_LABERINTOSOLVER_H_
#define U01_RECURSIVIDAD_EX_LABERINTO_LABERINTOSOLVER_H_

#include "MazeGenerator.h"

/**
 * Puntero a función que se va a utilizar como callback
 */
typedef void (*Funcion)(unsigned x, unsigned y, int valor);

class LaberintoSolver {
private:
  Funcion pintar;
  MazeGenerator *m;
  unsigned w, h;

public:
  LaberintoSolver(Funcion callback, MazeGenerator *m);

  bool solve(unsigned x, unsigned y);

  void run();
};

#endif // U01_RECURSIVIDAD_EX_LABERINTO_LABERINTOSOLVER_H_
