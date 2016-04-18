/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "graderiaPreferencial.h"
#include "nodoAsiento.h"
#include "Asiento.h"
#include <cstdlib>
using namespace std;



graderiaPreferencial::graderiaPreferencial(){
    longitud = 0;
    tope = NULL;
    MAX_LONGITUD = 5;
}


void graderiaPreferencial::setLongitud(int plongitud){
    longitud = plongitud;
}


void graderiaPreferencial::setMaxLongitud(int pmaxLongitud){
    MAX_LONGITUD = pmaxLongitud;
}


int graderiaPreferencial::getLongitud(){
    return longitud;
}

int graderiaPreferencial::getMaxLongitud(){
    return MAX_LONGITUD;
}


bool graderiaPreferencial::esVacia(){
    return longitud == 0;
}


bool graderiaPreferencial::esLlena(){
    return longitud == MAX_LONGITUD;
}

bool graderiaPreferencial::agregar(Asiento *pasiento){
    nodoAsiento *nuevo = new nodoAsiento(pasiento);
    
    if(nuevo == NULL){
        return false;
    }else{
        if(esVacia()){
            tope = nuevo;
        }else{
            if(!esLlena()){
                nuevo->setSiguiente(tope);
                tope = nuevo;
            }
        }
        longitud++;
        return true;
    }
    
}

bool graderiaPreferencial::remover(){
    nodoAsiento *aux;
    
    if(!(this->esVacia())){
        aux = tope;
        tope = tope->getSiguiente();
        longitud--;
        delete aux;
        return true;
    }else{
        return false;
    }
}