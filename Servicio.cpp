
#include "Servicio.h"

Servicio::Servicio(string nombre = n,float precio = p, int cantidad =c,float porcentajeDescuento = pD):
        Producto( nombre = n, precio = p,  cantidad = c),porcentajeDescuento(pD){}
float Servicio::getPorcentajeDescuento() {return porcentajeDescuento}const
void Servicio::setPorcentajeDescuento(float pD){porcentajeDescuento = pD; }
float Servicio::getPrecio(){return precio;}