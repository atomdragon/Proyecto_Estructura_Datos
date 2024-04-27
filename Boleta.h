#include <iostream>
#include <string>
#include "ComproPago.h"
using namespace std;

class Boleta : public ComproPago
{
private:
	string detalle;
	ComproPago* comproPago;
public:
	Boleta()
	{
		this->detalle = " ";
		ComproPago* comproPago;
	}
	Boleta(string pdetalle, int pnumero, string pfecha, float pmontoTotal)
	{
		this->detalle = pdetalle;
		comproPago = new ComproPago(pnumero, pfecha, pmontoTotal);
	}
	~Boleta() {}

	void setDetalle(string pdetalle) { detalle = pdetalle; }
	string getDetalle() { return detalle; }

	void mostrarBoleta()
	{
		cout << endl;
		cout << "===Empleado===" << endl;
		cout << "Numero de la boleta: " << this->getNumero() << endl;
		cout << "Fecha: " << this->getFecha() << endl;
		cout << "Monto total: " << this->getMontoTotal() << endl;
		cout << "Detalle de la boleta: " << detalle << endl;
	}
};

