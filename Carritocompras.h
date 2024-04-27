#pragma once
#include "Carbohidratos.h"
#include "Cereal.h"
#include "Proteina.h"

class Carritocompras
{
private:
	Carbohidratos* carbos;
	Proteina* prote;
	Cereal* cere;
	float precio_total;
public:
	Carritocompras()
	{
		precio_total = 0.0;
	}
	void precio_total()
	{
		precio_total = carbos->getprecio() + prote->getprecio() + cere->getprecio();
		cout << precio_total;
	}
	void mostrar_todos()
	{
		prote->mostrar_protes();
		carbos->mostrar_carbos();
		cere->mostrar_cereal();
	}
};