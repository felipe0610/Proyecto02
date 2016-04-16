/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Asiento.h
 * Author: JasDa
 *
 * Created on 15 de abril de 2016, 10:57
 */

#ifndef ASIENTO_H
#define ASIENTO_H

#include <cstdlib>
using namespace std;


class Asiento{
public:
    Asiento();
    Asiento(double pprecio, char pestado);
    void setPrecio(double pprecio);
    void setEstado(char pEstado);
    double getPrecio(void);
    char getEstado(void);
private:
    double precio;
    char estado;
};


#endif /* ASIENTO_H */

