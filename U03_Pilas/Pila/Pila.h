#ifndef U03_PILAS_PILA_PILA_H_
#define U03_PILAS_PILA_PILA_H_

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class Pila {
private:
public:
  Pila();

  ~Pila();

  void push(T dato);

  T pop();

  bool esVacia();
};

/**
 * Constructor de la clase Pila
 * @tparam T
 */
template <class T> Pila<T>::Pila() {}

/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los
 * nodos utilizados en la lista
 * @tparam T
 */
template <class T> Pila<T>::~Pila() {}

/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template <class T> void Pila<T>::push(T dato) {}

/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Pila<T>::pop() {}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Pila<T>::esVacia() {}

#endif // U03_PILAS_PILA_PILA_H_
