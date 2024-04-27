
#include "Carritocompras.h"

class Caja
{
private:
    Carritocompras* carrito;

public:
    Caja() 
    {
        carrito = nullptr;
    }

    float calcularPrecioTotal() {
        
        auto calcularPrecioprote = [](Lista<Proteina*>* lista) {
            float precio1 = 0.0; 
            for (int i = 0; i < lista->longitud(); ++i) {
                precio1 += lista->obtenerPos(i)->getprecio(); 
            }
            return precio1;
        };
        auto calcularPreciocereal = [](Lista<Cereal*>* lista) {
            float precio2 = 0.0;
            for (int i = 0; i < lista->longitud(); ++i) {
                precio2 += lista->obtenerPos(i)->getprecio();
            }
            return precio2;
        };
        auto calcularPreciocarbos = [](Lista<Carbohidratos*>* lista) {
            float precio3 = 0.0;
            for (int i = 0; i < lista->longitud(); ++i) {
                precio3 += lista->obtenerPos(i)->getprecio();
            }
            return precio3;
        };
        float preciocarbos = calcularPreciocarbos(carrito->get_lista_carbo());
        float preciocereal = calcularPreciocereal(carrito->get_lista_cereal());
        float precioprote = calcularPrecioprote(carrito->get_lista_prote());

        float preciototal = preciocarbos + preciocereal + precioprote;
        return preciototal;
    }
};
