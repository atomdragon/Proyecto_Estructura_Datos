#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class ComproPago
{
private:
	int numero;
	string fecha;
	float montoTotal;
public:
	ComproPago()
	{
		numero = 0;
		fecha = "";
		montoTotal = 0;
	}
	ComproPago(int pnumero, string pfecha, float pmontoTotal)
	{
		this->numero = pnumero;
		this->fecha = pfecha;
		this->montoTotal = pmontoTotal;
	}
	~ComproPago() {}

	void setNumero(int pnumero) { numero = pnumero; }
	int getNumero() { return numero; }
	void setFecha(string pfecha) { fecha = pfecha; }
	string getFecha() { return fecha; }
	void setMontoTotal(float pmontoTotal) { montoTotal = pmontoTotal; }
	float getMontoTotal() { return montoTotal; }
};
