#include <iostream>
#include <string>
#include "Usuario.h"
using namespace std;

class Empleado : public Usuario
{
private:
	string codEmpleado;
	float sueldo;
	Usuario* usuario;
public:
	Empleado()
	{
		Usuario* usuario;
		this->codEmpleado = " ";
		this->sueldo = 0;
	}
	Empleado(string pcodEmpleado, float psueldo, string pdni, string pnombres, string papellidos, string pdireccion,
		string ptelefono, string pemail, string pcelular, string pgenero)
	{
		this->codEmpleado = pcodEmpleado;
		this->sueldo = psueldo;
		usuario = new Usuario(pdni, pnombres, papellidos, pdireccion, ptelefono, pemail, pcelular, pgenero);
	}
	~Empleado() {}

	void setCodEmpleado(string pcodEmpleado) { codEmpleado = pcodEmpleado; }
	string getCodEmpleado() { return codEmpleado; }
	void setSueldo(float psueldo) { sueldo = psueldo; }
	float getSueldo() { return sueldo; }

	void mostrarEmpleado()
	{
		cout << endl;
		cout << "===Empleado===" << endl;
		cout << "Nombres: " << this->getnombre() << endl;
		cout << "Apellidos: " << this->getapellido() << endl;
		cout << "Codigo de empleado: " << this->codEmpleado << endl;
		cout << "Sueldo: " << this->sueldo << endl;
		cout << "DNI: " << this->getdni() << endl;
		cout << "Celular: " << this->getcelular() << endl;
		cout << "Direccion: " << this->getDireccion() << endl;
		cout << "Telefono: " << this->getTelefono() << endl;
		cout << "Email: " << this->getEmail() << endl;
		cout << "Genero: " << this->getGenero() << endl;
	}
};