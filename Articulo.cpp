//
// Created by FamiliaPC on 30/03/2021.
//

#include "Articulo.h"
Articulo::Articulo( string nombre = n,float precio = p, int cantidad = c ,Fecha* fechaVenta = fec):
Producto( nombre = n, precio = p,  cantidad = c),fechaVenta(fec){}
float Articulo::getPrecio(){return precio;}
};