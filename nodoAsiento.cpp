/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "nodoAsiento.h"
#include "Asiento.h"
#include <cstdlib>
using namespace std;


nodoAsiento::nodoAsiento(Asiento *pasiento){
    asiento = pasiento;
    siguiente = NULL;
}


void nodoAsiento::setAsiento(Asiento *pasiento){
    asiento = pasiento;
}


void nodoAsiento::setSiguiente(nodoAsiento* psiguiente){
    siguiente = psiguiente;
}


Asiento * nodoAsiento::getAsiento(){
    return asiento;
}


nodoAsiento * nodoAsiento::getSiguiente(){
    return siguiente;
}
