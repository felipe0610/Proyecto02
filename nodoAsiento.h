/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoAsiento.h
 * Author: JasDa
 *
 * Created on 15 de abril de 2016, 13:27
 */

#ifndef NODOASIENTO_H
#define NODOASIENTO_H
#include <cstdlib>
#include "Asiento.h"
using namespace std;

class nodoAsiento{
public:
    nodoAsiento(Asiento pasiento);
    void setAsiento(Asiento pasiento);
    void setSiguiente(nodoAsiento *psiguiente);
    Asiento getAsiento(void);
    nodoAsiento * getSiguiente(void);
private:
    Asiento asiento;
    nodoAsiento *siguiente;
};




#endif /* NODOASIENTO_H */

