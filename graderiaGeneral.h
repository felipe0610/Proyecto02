/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graderiaGeneral.h
 * Author: JasDa
 *
 * Created on 17 de abril de 2016, 11:07
 */

#ifndef GRADERIAGENERAL_H
#define GRADERIAGENERAL_H
#include <cstdlib>
#include "Asiento.h"
#include "nodoAsiento.h"
using namespace std;

class graderiaGeneral{
public:
    graderiaGeneral();
    void setLongitud(int plongitud);
    void setMaxLongitud(int pmaxLongitud);
    void setPrimero(nodoAsiento *pprimero);
    int getLongitud(void);
    int getMaxLongitud(void);
    nodoAsiento * getPrimero(void);
    bool esVacia();
    bool esLlena();
    bool agregar(Asiento *pasiento);
private:
    int longitud;
    int MAX_LONGITUD;
    nodoAsiento *primero;
};


#endif /* GRADERIAGENERAL_H */

