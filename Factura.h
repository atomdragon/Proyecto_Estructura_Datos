#include <iostream>
#include <string>
#include "ComproPago.h"
using namespace std;

class Factura : public ComproPago
{
private:
	string empresa;
	ComproPago* comproPago;
public:
	Factura()
	{
		this->empresa = " ";
		ComproPago* comproPago;
	}
	Factura(string pempresa, int pnumero, string pfecha, float pmontoTotal)
	{
		comproPago = new ComproPago(pnumero, pfecha, pmontoTotal);
		this->empresa = pempresa;
	}
	~Factura() {}

	void setDetalle(string pempresa) { empresa = pempresa; }
	string getDetalle() { return empresa; }

	void mostrarFactura()
	{
		cout << endl;
		cout << "===Factura===" << endl;
		cout << "Numero de la factura: " << this->getNumero() << endl;
		cout << "Fecha: " << this->getFecha() << endl;
		cout << "Monto total: " << this->getMontoTotal() << endl;
		cout << "Empresa: " << empresa << endl;
	}
};


