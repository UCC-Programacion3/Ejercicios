#ifndef U04_COLAS_COLA_COLA_H_
#define U04_COLAS_COLA_COLA_H_

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template <class T> class Cola {
private:
public:
  Cola();

  ~Cola();

  void encolar(T dato);

  T desencolar();

  bool esVacia();
};

/**
 * Constructor de la clase Cola
 * @tparam T
 */
template <class T> Cola<T>::Cola() {}

/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los
 * nodos utilizados en la Cola
 * @tparam T
 */
template <class T> Cola<T>::~Cola() {}

/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template <class T> void Cola<T>::encolar(T dato) {}

/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template <class T> T Cola<T>::desencolar() {}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template <class T> bool Cola<T>::esVacia() {}

#endif // U04_COLAS_COLA_COLA_H_
