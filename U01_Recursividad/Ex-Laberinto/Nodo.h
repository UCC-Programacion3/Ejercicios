#ifndef U01_RECURSIVIDAD_EX_LABERINTO_NODO_H_
#define U01_RECURSIVIDAD_EX_LABERINTO_NODO_H_

#include <iostream>

template <class T> class Nodo {
private:
  T dato;
  Nodo<T> *next;

public:
  explicit Nodo(T dato) {
    this->dato = dato;
    next = NULL;
  }

  Nodo(T dato, Nodo<T> *next) : dato(dato), next(next) {}

  T getDato() const { return dato; }

  void setDato(T dato) { Nodo::dato = dato; }

  Nodo<T> *getNext() const { return next; }

  void setNext(Nodo<T> *next) { Nodo::next = next; }
};

#endif // U01_RECURSIVIDAD_EX_LABERINTO_NODO_H_
