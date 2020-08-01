# Lista Enladasa en C++

Una lista enlazada es una colección o secuencia de elementos dispuestos uno detrás de
otro, en la que cada elemento se conecta al siguiente elemento por un “enlace”. La idea básica
consiste en construir una lista cuyos elementos, llamados nodos, se componen de dos partes
(campos): la primera parte contiene la información y es, por consiguiente, un valor de un tipo
genérico (denominado Dato, TipoElemento, Info, etc.), y la segunda parte es un enlace que
apunta al siguiente nodo de la lista.

## Clase

### Metodos

Constructor()
Constructor(Lista) // Por copia

esVacia()
getTamanio()
insertar(posicion, dato)
insertarPrimero(dato)
insertarUltimo(dato)
remover(posicion)
getDato(posicion)
reemplazar(posicion, dato)
vaciar()
