#include "Nodo1.h"
using namespace std;

template<class T>
class Pila {
private:
	Nodo1<T>* tope;
public:
	Pila() { tope = NULL; };
	void push(T v);
	T pop();
	bool estaVacia();
};

template<class T>
void Pila<T>::push(T v) {
	if (estaVacia()) {
		tope = new Nodo1<T>(v);
	}
	else {
		tope = new Nodo1<T>(v, tope);
	}
}
template<class T>
T Pila<T>::pop() {
	if (estaVacia()) {
		//throw "Error, pila vacía";
		return NULL;
	}
	else {
		Nodo1<T>* aux = tope;	//[REZC]aux: apuntará al Nodo, para luego liberar su 
		T elemento = (T)(tope->dato);
		tope = (Nodo1<T>*) tope->siguiente;
		delete aux;	//[REZC]Se libera memoria del Nodo removido por POP
		return elemento;
	}
}

template<class T>
bool Pila<T>::estaVacia() {
	return (tope == NULL);
}


