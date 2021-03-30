#ifndef PROYECTO1_PRODUCTO_H
#define PROYECTO1_PRODUCTO_H

#include<iostream>
#include<sstream>

using namespace std;

class Producto {
private:
    string nombre;
    float precio;
    int cantidad;
public:
        Producto();
        Producto(string nombre ,float precio ,int cantidad);
        ~Producto();
        string getNombre();
        float getPrecio();
        int getCantidad();
        void setNombre(string);
        void setPrecio(float);
        void setCantidad(int);
        string toString();
};


#endif //PROYECTO1_PRODUCTO_H
