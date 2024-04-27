#pragma once
#include "Producto.h"

class Cereal : public Producto
{
private:
	Producto* producto;
    string tipocereal;
public:
    Cereal()
    {
        tipocereal = "";
    }
	Cereal(string pcodproducto, string pproducto,string ptipocereal, int pcant, float pprecio)
	{
		producto = new Producto(pcodproducto, pproducto, pcant, pprecio);
        tipocereal = ptipocereal;
	}
    void mostrar_cereal()
    {
        cout << endl;
        cout << "===PRODUCTO===" << endl;
        cout << "Producto: " << producto->getproducto() << endl;
        cout << "Codigo del producto: " << producto->getcodproducto() << endl;
        cout << "Tipo de cereal: " << tipocereal << endl;
        cout << "Cantidad de cajas: " << producto->getcant() << endl;
        cout << "Precio: " << producto->getprecio() << endl;
    }
};