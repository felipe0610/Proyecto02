/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "graderiaGeneral.h"
#include "nodoAsiento.h"
#include "Asiento.h"
#include <cstdlib>
using namespace std;

graderiaGeneral::graderiaGeneral(){
    longitud = 0;
    MAX_LONGITUD = 50;
    primero = NULL;
}

void graderiaGeneral::setLongitud(int plongitud){
    longitud = plongitud;
}


void graderiaGeneral::setMaxLongitud(int pmaxLongitud){
    MAX_LONGITUD = pmaxLongitud;
}


void graderiaGeneral::setPrimero(nodoAsiento* pprimero){
    primero = pprimero;
}

int graderiaGeneral::getLongitud(){
    return longitud;
}


int graderiaGeneral::getMaxLongitud(){
    return MAX_LONGITUD;
}


nodoAsiento * graderiaGeneral::getPrimero(){
    return primero;
}

bool graderiaGeneral::esVacia(){
    return longitud == 0;
}


bool graderiaGeneral::esLlena(){
    return longitud == MAX_LONGITUD;
}


bool graderiaGeneral::agregar(Asiento* pasiento){
    nodoAsiento *nuevo = new nodoAsiento(pasiento);
    
    if(nuevo == NULL){
        return false;
    }else{
        if(esVacia()){
            primero = nuevo;
            longitud++;
            return true;
        }else{
            if(!esLlena()){
                nuevo->setSiguiente(primero);
                primero = nuevo;
                longitud++;
                return true;
            }else{
                return false;
            }
        }
    }
}