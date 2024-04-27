#include <iostream>
#include <string>
#include "Usuario.h"
using namespace std;

class Cliente : public Usuario
{
private:
	int numeroCliente;
	Usuario* usuario;
public:
	Cliente()
	{
		Usuario* usuario;
		this->numeroCliente = 0;
	}
	Cliente(int pnumeroCliente, string pdni, string pnombres, string papellidos, string pdireccion,
		string ptelefono, string pemail, string pcelular, string pgenero,string pedad)
	{
		this->numeroCliente = pnumeroCliente;
		usuario = new Usuario(pdni, pnombres, papellidos, pdireccion, ptelefono, pemail, pcelular, pgenero,pedad);
	}
	~Cliente() {}
	void setnumeroCliente(int pnumeroCliente) 
	{ 
		numeroCliente = pnumeroCliente; 
	}	
	int getnumeroCliente() 
	{ 
		return numeroCliente; 
	}

	void mostrarCliente()
	{
		cout << endl;
		cout << "===Cliente===" << endl;
		cout << "Nombres: " << this->getnombre() << endl;
		cout << "Apellidos: " << this->getapellido() << endl;
		cout << "Numero del cliente: " << this->getnumeroCliente() << endl;
		cout << "DNI: " << this->getdni() << endl;
		cout << "Celular: " << this->getcelular() << endl;
		cout << "Direccion: " << this->getDireccion() << endl;
		cout << "Telefono: " << this->getTelefono() << endl;
		cout << "Email: " << this->getEmail() << endl;
		cout << "Genero: " << this->getGenero() << endl;
	}
};
