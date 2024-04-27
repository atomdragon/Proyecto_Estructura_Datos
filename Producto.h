#pragma once
#pragma once
#include <iostream>
#include "pch.h"
using namespace std;

class Producto
{
private:
    string codproducto, producto;
    int cant;
    float precio;
public:
    Producto()
    {
        codproducto = "";
        producto = "";
        cant = 0;
        precio = 0;

    }
    Producto(string pcodproducto, string pproducto, int pcant, float pprecio)
    {
        codproducto = pcodproducto;
        producto = pproducto;
        cant = pcant;
        precio = pprecio;
    }
    ~Producto() {}

    void setcodproducto(string pCodproducto)
    {
        codproducto = pCodproducto;
    }
    string getcodproducto()
    {
        return codproducto;
    }
    void setproducto(string pProducto)
    {
        producto = pProducto;
    }
    string getproducto()
    {
        return producto;
    }
    void setcant(int pCant)
    {
        cant = pCant;
    }
    int getcant()
    {
        return cant;
    }
    void setprecio(float pPrecio)
    {
        precio = pPrecio;
    }
    float getprecio()
    {
        return precio;
    }
};