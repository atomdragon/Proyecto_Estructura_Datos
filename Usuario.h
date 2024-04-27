#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Usuario
{
private:
	string nombres, apellidos, dni, celular, direccion, telefono, email, genero, edad;
public:
	Usuario()
	{
		nombres = "";
		apellidos = "";
		dni = "";
		celular = "";
		direccion = "";
		telefono = "";
		email = "";
		genero = "";
	}
	Usuario(string pdni, string pnombres, string papellidos, string pdireccion,
		string ptelefono, string pemail, string pcelular, string pgenero,string pedad)
	{
		nombres = pnombres;
		apellidos = papellidos;
		dni = pdni;
		celular = pcelular;
		direccion = pdireccion;
		telefono = ptelefono;
		email = pemail;
		genero = pgenero;
		edad = pedad;
	}
	~Usuario() {}
	void setnombre(string pnombres) { nombres = pnombres; }
	string getnombre() { return nombres; }
	void setapellido(string papellidos) { apellidos = papellidos; }
	string getapellido() { return apellidos; }
	void setdni(string pdni) { dni = pdni; }
	string getdni() { return dni; }
	void setcelular(string pcelular) { celular = pcelular; }
	string getcelular() { return celular; }
	void setDireccion(string pdireccion) { direccion = pdireccion; }
	string getDireccion() { return direccion; }
	void setTelefono(string ptelefono) { telefono = ptelefono; }
	string getTelefono() { return telefono; }
	void setEmail(string pemail) { email = pemail; }
	string getEmail() { return email; }
	void setGenero(string pgenero) { genero = pgenero; }
	string getGenero() { return genero; }
};