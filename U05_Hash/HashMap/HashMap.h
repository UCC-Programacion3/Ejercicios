#ifndef U05_HASH_HASHMAP_HASHMAP_H_
#define U05_HASH_HASHMAP_HASHMAP_H_

template <class K, class T> class HashMap {
private:
  unsigned int hashFunc(K clave);

  unsigned int (*hashFuncP)(K clave);

public:
  explicit HashMap(unsigned int k);

  HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));

  T get(K clave);

  void put(K clave, T valor);

  void remove(K clave);

  ~HashMap();

  bool esVacio();
};

template <class K, class T> HashMap<K, T>::HashMap(unsigned int k) {}

template <class K, class T> HashMap<K, T>::~HashMap() {}

template <class K, class T> T HashMap<K, T>::get(K clave) {
  T temp;
  return temp;
}

template <class K, class T> void HashMap<K, T>::put(K clave, T valor) {}

template <class K, class T> void HashMap<K, T>::remove(K clave) {}

template <class K, class T> bool HashMap<K, T>::esVacio() { return false; }

template <class K, class T> unsigned int HashMap<K, T>::hashFunc(K clave) {
  return 99999;
}

template <class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {}

#endif // U05_HASH_HASHMAP_HASHMAP_H_
