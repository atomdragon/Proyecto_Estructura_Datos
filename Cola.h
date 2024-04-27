#include "Nodo1.h"
#include <iostream>

using namespace std;

template<class T>
class Cola {
private:
	Nodo1<T>* inicio; 	//HEAD
	Nodo1<T>* fin;		//TAIL
public:
	Cola() {
		this->inicio = NULL;
		this->fin = NULL;
	}
	void enqueue(T v);
	T dequeue();
	bool esVacia();

};

template<class T>
bool Cola<T>::esVacia() {
	return (inicio == NULL);
}

template<class T>
void Cola<T>::enqueue(T v) {	//el nuevo Nodo INGRESA despues de "fin" (fin->siguiente)
	Nodo1<T>* nodo = new Nodo1<T>(v);
	if (esVacia()) {
		inicio = nodo;
		fin = inicio;
	}
	else {
		fin->siguiente = nodo;	// 1)
		fin = nodo;
	}
	nodo = NULL;
}

template<class T>
T Cola<T>::dequeue() {	//El dato SALE de "inicio". "inicio" corre un nodo (inicio->siguiente)
	T dato = inicio->dato;

	if (inicio == fin) { //Si hay UN solo Nodo
		// [rezc] delete inicio
		inicio = NULL;
		fin = NULL;
	}
	else {
		Nodo1<T>* aux = inicio;	//[REZC] aux: Apunta al Nodo que será desencolado
		inicio = inicio->siguiente;	// 1)
		delete aux;	//[REZC] Libera memoria del Nodo
	}

	return dato;
}

