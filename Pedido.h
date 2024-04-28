#include <iostream>
#include <string>
#include "Cola.h"
#include "Cliente.h"
using namespace std;

class Pedido
{
private:
	Cola<Cliente*>* pedidoCliente = new Cola<Cliente*>();
	string direccion;
public:
	Pedido(){}
	void agregarPedido()
	{
        Cliente* nuevoCliente = new Cliente();
        string nombre;
        cout << "Ingrese el nombre del cliente: ";
        getline(cin, nombre);
        nuevoCliente->setnombre(nombre);
        string direccion;
        cout << "Ingrese la dirección del cliente: ";
        getline(cin, direccion);
        nuevoCliente->setDireccion(direccion);
        pedidoCliente->enqueue(nuevoCliente);
        cout << "Pedido agregado exitosamente." << endl;
	}

    void atenderPedido() 
    {
        if (pedidoCliente->esVacia())
        {
            return;
        }
     
        Cliente* clienteActual = pedidoCliente->dequeue();
        cout << "Atendiendo pedido de: " << clienteActual->getnombre() << endl;
        cout << "Direccion: " << clienteActual->getDireccion() << endl;
        delete clienteActual;
        cout << "Pedido atendido exitosamente" << endl;
    }
};

