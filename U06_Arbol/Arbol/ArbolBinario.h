#ifndef U06_ARBOL_ARBOL_ARBOLBINARIO_H_
#define U06_ARBOL_ARBOL_ARBOLBINARIO_H_

#include "NodoArbol.h"

template <class T> class ArbolBinario {
private:
public:
  ArbolBinario();

  void put(T dato);

  T search(T dato);

  void remove(T dato);

  void preorder();

  void inorder();

  void postorder();

  ~ArbolBinario();

  bool esVacio();

  void print();
};

/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template <class T> ArbolBinario<T>::ArbolBinario() {}

/**
 * Destructor del Arbol
 */
template <class T> ArbolBinario<T>::~ArbolBinario() {}

/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */
template <class T> T ArbolBinario<T>::search(T dato) {
  T temp;
  return temp;
}

/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */
template <class T> void ArbolBinario<T>::put(T dato) {}

/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template <class T> void ArbolBinario<T>::remove(T dato) {}

/**
 * Informa si un árbol esta vacío
 * @return
 */
template <class T> bool ArbolBinario<T>::esVacio() { return false; }

/**
 * Recorre un árbol en preorden
 */
template <class T> void ArbolBinario<T>::preorder() {}

/**
 * Recorre un árbol en orden
 */
template <class T> void ArbolBinario<T>::inorder() {}

/**
 * Recorre un árbol en postorden
 */
template <class T> void ArbolBinario<T>::postorder() {}

/**
 * Muestra un árbol por consola
 */
template <class T> void ArbolBinario<T>::print() {}

#endif // U06_ARBOL_ARBOL_ARBOLBINARIO_H_
