#ifndef PROYECTO1_SERVICIO_H
#define PROYECTO1_SERVICIO_H
#include "Producto.h"

class Servicio:public Producto {
private:
    float porcentajeDescuento;
public:
    Servicio(string nombre = " ",float precio = 0, int cantidad = 0,float porcentajeDescuento = 0);
    float getPorcentajeDescuento() const;
    void setPorcentajeDescuento(float)
    float getPrecio();
};


#endif //PROYECTO1_SERVICIO_H
