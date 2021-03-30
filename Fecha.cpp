#include "Fecha.h"
Fecha::Fecha(){
    dia=0;
    mes=0;
    anno=0;
}
Fecha::Fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anno=a;
}
Fecha::~Fecha(){}
int Fecha::getDia(){return dia;}
int Fecha::getMes(){return mes;}
int Fecha::getAnno(){return anno;}
void Fecha::setDia(int d){dia=d;}
void Fecha::setMes(int m){mes=m;}
void Fecha::setAnno(int a){anno=a;}
string Fecha::toString(){
    stringstream s;
    s<<dia<<"/"<<mes<<"/"<<anno;
    return s.std();
}