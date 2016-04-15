/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Asiento.h"



Asiento::Asiento(){
    Asiento(0,'L');
}

Asiento::Asiento(double pprecio, char pestado){
    precio = pprecio;
    estado = pestado;
}


void Asiento::setPrecio(double pprecio){
    precio = pprecio;
}


void Asiento::setEstado(char pestado){
    estado = pestado;
}


double Asiento::getPrecio(){
    return precio;
}


char Asiento::getEstado(){
    return estado;
}




