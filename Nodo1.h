#pragma once

template<class T>
class Nodo1 {
public:
	T dato;
	Nodo1<T>* siguiente;

	Nodo(T v, Nodo1<T>* sig = NULL) {
		dato = v;
		siguiente = sig;
	}
};
