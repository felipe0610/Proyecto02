/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graderiaPreferencial.h
 * Author: JasDa
 *
 * Created on 15 de abril de 2016, 13:38
 */

#ifndef GRADERIAPREFERENCIAL_H
#define GRADERIAPREFERENCIAL_H
#include <cstdlib>
#include "nodoAsiento.h"
using namespace std;

class graderiaPreferencial{
public:
    graderiaPreferencial();
    bool agregar(Asiento *pasiento);
    bool remover(void);
    bool esVacia(void);
    bool esLlena(void);
    void setLongitud(int plongitud);
    void setMaxLongitud(int pmaxLongitud);
    int getLongitud(void);
    int getMaxLongitud(void);
private:
    int longitud;
    nodoAsiento *tope;
    int MAX_LONGITUD;
};



#endif /* GRADERIAPREFERENCIAL_H */

