#include <unistd.h>

#include <SFML>

#include "LaberintoSolver.h"
#include "MazeGenerator.h"

void dibujarPunto(unsigned x, unsigned y, int valor);

void dibujarLaberinto(MazeGenerator *m);

void delay(__useconds_t ms);

// Constantes para modificar visualización
#define ANCHO 15
#define ALTO 15
#define RADIO 8
#define ANCHO_LINEA 3
#define ESPERA 100

QGraphicsScene *scene;
QGraphicsEllipseItem ***solucion;

int main(int argc, char **argv) {
  MazeGenerator m(ANCHO, ALTO);

  // Objetos de la UI
  QApplication app(argc, argv);
  scene = new QGraphicsScene;
  auto *canvas = new QGraphicsView(scene);
  auto *ventana = new QWidget;
  auto *vlayout = new QVBoxLayout(ventana);

  // Dibujo el laberinto y la escena
  dibujarLaberinto(&m);
  scene->setSceneRect(0, 0, 32 * ANCHO, 32 * ALTO);

  // Agrego los widget a la ventana y muestro la ventana
  vlayout->addWidget(canvas);
  ventana->show();

  // Espero 2s antes de resolver
  delay(2000);

  // Resuelvo el Laberinto
  LaberintoSolver resolver(dibujarPunto, &m);
  resolver.run();

  return app.exec();
}

/**
 * Función para dibujar un punto en el laberinto
 * @param x
 * @param y
 * @param valor
 */
void dibujarPunto(unsigned x, unsigned y, int valor) {
  QColor amarillo(Qt::yellow);
  QColor verde(Qt::green);
  QColor rojo(Qt::red);
  QPen pen(QBrush(QColor(Qt::black)), ANCHO_LINEA, Qt::SolidLine, Qt::SquareCap,
           Qt::BevelJoin);

  int e = 32 / 2 - RADIO;

  // Espero X ms para que parezca animado
  delay(ESPERA);

  switch (valor) {
  case 1:
    // Agrego bolita de color amarillo
    solucion[x][y] = scene->addEllipse(e + x * 32, e + y * 32, 2 * RADIO,
                                       2 * RADIO, pen, QBrush(amarillo));
    break;
  case 2:
    // Pinto bolita de color Verde
    solucion[x][y]->setBrush(QBrush(verde));
    break;
  case 0:
  default:
    // Pinto bolita de color rojo
    solucion[x][y]->setBrush(QBrush(rojo));
    break;
  }
}

/**
 * Función para dormir Xms
 * @param ms
 */
void delay(__useconds_t ms) {
  QCoreApplication::processEvents(QEventLoop::AllEvents, 1000);
  usleep(ms * 1000);
  QCoreApplication::processEvents(QEventLoop::AllEvents, 1000);
}

/**
 * Función para dibujar el laberinto
 * @param m
 */
void dibujarLaberinto(MazeGenerator *m) {
  vector<QImage> tiles;

  // Cargo Tiles
  for (int i = 0; i < 16; i++) {
    QRect rect(0, i * 32, 32, 32);
    QImage image("tileLab.png");
    tiles.push_back(image.copy(rect));
  }

  // Genero matriz de soluciones
  solucion = new QGraphicsEllipseItem **[ANCHO];

  // Dibujo el laberinto
  QGraphicsPixmapItem *item;
  for (unsigned i = 0; i < ANCHO; i++) {
    // Agrego elipses de solución a la matriz
    solucion[i] = new QGraphicsEllipseItem *[ALTO];

    for (unsigned j = 0; j < ALTO; j++) {
      int num = m->getData(i, j);
      item = new QGraphicsPixmapItem(QPixmap::fromImage(tiles[num]));
      item->setPos(i * 32, j * 32);
      scene->addItem(item);
    }
  }
}
