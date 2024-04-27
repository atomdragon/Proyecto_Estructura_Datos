#pragma once
#include "Producto.h"


class Carbohidratos: public Producto
{
private:
	Producto* producto;
	string tipcarbos;
	
public:
	Carbohidratos()
	{
		tipcarbos = "";
	}
	Carbohidratos(string pcodproducto, string pproducto, string ptipcarbos, int pcant, float pprecio)
	{
		tipcarbos = ptipcarbos;
		producto = new Producto(pcodproducto, pproducto, pcant, pprecio);
	}
	void mostrar_carbos()
	{
		cout << endl;
		cout << "===PRODUCTO===" << endl;
		cout << "Producto: " << producto->getproducto() << endl;
		cout << "Codigo del producto: " << producto->getcodproducto() << endl;
		cout << "Tipo de carbohidratos(Frutas/Verduras/Otros): " << tipcarbos << endl;
		cout << "Cantidad de cajas: " << producto->getcant() << endl;
		cout << "Precio: " << producto->getprecio() << endl;
	}
};