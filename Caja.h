
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
    void procesar_pago()
    {
        string sn= " ", efecotrajet=" ";
        float efectivo_cliente;
        cout << "Su monto total es: " << calcularPrecioTotal();
        cout << "¿Desea procesar su pago?" << endl;
        cin >> sn;
        if (sn == "si")
        {
            cout << "Efectivo o tarjeta" << endl;
            cin >> efecotrajet;
            if (efecotrajet == "efectivo")
            {
                cout << "Ingrese su efecto: "; cin >> efectivo_cliente;
                float vuelto = efectivo_cliente - calcularPrecioTotal();
                cout << "Vuelto: " << vuelto << endl;
                cout << "Su pedido fue registrado y esta siendo preparado";
            }
            if (efecotrajet == "tarjeta")
            {
                string numero_tarjeta = " ", cvv = " ", fecha_venci = " ";
                cout << "Ingrese datos de la tarjeta" << endl;
                cout << "Numero de la tarjeta: "; cin >> numero_tarjeta;
                cout << "Fecha de vencimiento: "; cin >> fecha_venci;
                cout << "CVV: "; cin >> cvv;
                cout << "Su pedido fue registrado y esta siendo preparado";
            }
           
        }
        if (sn == "no")
        {
            cout << "Gracias por su tiempo :c";
        }
    }
    void set_carrito(Carritocompras* pcarritocompras)
    {
        carrito = pcarritocompras;  
    }
};
