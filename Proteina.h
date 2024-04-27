
#include "Producto.h"

class Proteina : public Producto
{
private:
	string tipprote;
	Producto* producto;
public:
	Proteina()
	{
		tipprote = "";
	}
	Proteina(string pcodproducto, string pproducto, string ptipprote, int pcant, float pprecio)
	{
		tipprote = ptipprote;
		producto = new Producto(pcodproducto, pproducto, pcant, pprecio);
	}
	void mostrar_protes()
	{
		cout << endl;
		cout << "===PRODUCTO===" << endl;
		cout << "Producto: " << producto->getproducto() << endl;
		cout << "Codigo del producto: " << producto->getcodproducto() << endl;
		cout << "Tipo de proteina(Pescado/Pollo/Carne): " << tipprote << endl;
		cout << "Cantidad de cajas: " << producto->getcant() << endl;
		cout << "Precio: " << producto->getprecio() << endl;
	}
};
