//
// Created by FamiliaPC on 30/03/2021.
//

#ifndef PROYECTO1_FECHA_H
#define PROYECTO1_FECHA_H
#include<iostream>
#include<sstream>

using namespace std;

class Fecha {
private:
    int dia,mes,anno;
public:
    Fecha();
    Fecha(int dia,int mes,int anno);
    ~Fecha();
    int getDia();
    int getMes();
    int getAnno();
    void setDia(int);
    void setMes(int);
    void setAnno(int);
    string toString();
};


#endif //PROYECTO1_FECHA_H
