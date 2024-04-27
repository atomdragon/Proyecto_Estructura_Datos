#pragma once
#include "Lista.h"
#include "Cereal.h"
#include "Proteina.h"
#include "Carbohidratos.h"

class Carritocompras
{
private:
	Lista<Cereal*>* list_cereal = new Lista<Cereal*>();
	Lista<Proteina*>* list_prote = new Lista<Proteina*>();
	Lista<Carbohidratos*>* list_carbos = new Lista<Carbohidratos*>();
public:
	Carritocompras(){}
	void agregar_producto()
	{
		for (int i = 0; i < list_cereal->longitud(); i++)
		{
			cout << "Producto: " << i+1;
			list_cereal->obtenerPos(i)->mostrar_cereal();
		}
		cout << endl;
		for (int i = 0; i < list_prote->longitud(); i++)
		{
			cout << "Producto: " << i+1;
			list_prote->obtenerPos(i)->mostrar_protes();
		}
		cout << endl;
		for (int i = 0; i < list_carbos->longitud(); i++)
		{
			cout << "Porducto: " << i+1;
			list_carbos->obtenerPos(i)->mostrar_carbos();
		}
	}
	void eliminar_producto(int n)
	{
		if (n >= 0 && n < list_cereal->longitud()) {
			list_cereal->eliminaPos(n);
		}
		if (n >= 0 && n < list_prote->longitud()) {
			list_prote->eliminaPos(n);
		}
		if (n >= 0 && n < list_carbos->longitud()) {
			list_carbos->eliminaPos(n);
		}
	}
	Lista<Cereal*>* get_lista_cereal()
	{
		return list_cereal;
	}
	Lista<Carbohidratos*>* get_lista_carbo()
	{
		return list_carbos;
	}
	Lista<Proteina*>* get_lista_prote()
	{
		return list_prote;
	}

};
