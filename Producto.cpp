#include "Producto.h"

Producto::Producto(){
    nombre = "";
    precio = 0;
    cantidad = 0;
}
Producto::Producto(string nom ,float pre ,int can){
    nombre = nom;
    precio = pre;
    cantidad = can;
}
Producto::~Producto(){}
string Producto::getNombre(){return nombre;}

float Producto::getPrecio(){return precio;}

int Producto::getCantidad(){return cantidad;}

void Producto::setNombre(string nom){nombre = nom;}

void Producto::setPrecio(float pre){precio = pre;}

void Producto::setCantidad(int can){cantidad = can;}

string Producto::toString(){
    stringstream s;
    s<<"Nombre del Producto: "<<nombre<<endl
        <<"Precio: "<<precio<<endl
        <<"Cantidad: "<<cantidad<<endl;

    return s.str();
}