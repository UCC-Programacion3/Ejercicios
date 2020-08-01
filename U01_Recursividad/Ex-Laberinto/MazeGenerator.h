#ifndef U01_RECURSIVIDAD_EX_LABERINTO_MAZEGENERATOR_H_
#define U01_RECURSIVIDAD_EX_LABERINTO_MAZEGENERATOR_H_

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class DIR {
public:
  int bit;
  int dx;
  int dy;
  DIR *opposite{};

  DIR(int bit, int dx, int dy) {
    this->bit = bit;
    this->dx = dx;
    this->dy = dy;
  }
};

/*
 * recursive backtracking algorithm
 * shamelessly borrowed from the ruby at
 * http://weblog.jamisbuck.org/2010/12/27/maze-generation-recursive-backtracking
 */
class MazeGenerator {
private:
  unsigned w;
  unsigned h;
  vector<DIR *> dirs;
  int **maze;

  void generateMaze(int cx, int cy);

  bool between(int v, int upper);

public:
  MazeGenerator(unsigned ancho, unsigned alto);

  ~MazeGenerator();

  int getData(unsigned x, unsigned y);

  bool esVisitado(unsigned x, unsigned y);

  void visitar(unsigned x, unsigned y);

  void display();

  unsigned int getW() const;

  unsigned int getH() const;
};

#endif // U01_RECURSIVIDAD_EX_LABERINTO_MAZEGENERATOR_H_
