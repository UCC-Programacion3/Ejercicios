#ifndef U01_RECURSIVIDAD_EX_LABERINTO_PILA_H_
#define U01_RECURSIVIDAD_EX_LABERINTO_PILA_H_

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */

#include "Nodo.h"

template <class T> class Pila {
private:
  Nodo<T> *inicio;

public:
  Pila();

  ~Pila();

  void push(T dato);

  T pop();

  bool esVacia();

  T peek() { return inicio->getDato(); }
};

/**
 * Constructor de la clase Pila
 * @tparam T
 */
template <class T> Pila<T>::Pila() { inicio = NULL; }

/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los
 * nodos utilizados en la lista
 * @tparam T
 */
template <class T> Pila<T>::~Pila() {
  while (!esVacia()) {
    pop();
  }
}

/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template <class T> void Pila<T>::push(T dato) {
  auto *aux = new Nodo<T>(dato, inicio);
  inicio = aux;
  // inicio  = new Nodo(dato, inicio);
}

/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Pila<T>::pop() {
  if (esVacia())
    throw 1;

  T dato = inicio->getDato();
  Nodo<T> *aux = inicio;

  inicio = inicio->getNext();
  delete aux;

  return dato;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Pila<T>::esVacia() { return inicio == NULL; }

#endif // U01_RECURSIVIDAD_EX_LABERINTO_PILA_H_
