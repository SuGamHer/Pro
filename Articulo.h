#ifndef PROYECTO1_ARTICULO_H
#define PROYECTO1_ARTICULO_H
#include"Producto.h"
#include "Fecha.h"
class Articulo:public Producto{
private:
    Fecha* fechaVenta;
public:
    Articulo( string nombre = " ",float precio = 0, int cantidad = 0,Fecha* fechaVenta = nullptr);
    float getPrecio();
};


#endif //PROYECTO1_ARTICULO_H
