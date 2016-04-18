#include <cstdlib>
#include <iostream>
#include "Asiento.h"
#include "graderiaPreferencial.h"
#include "nodoAsiento.h"
#include "graderiaGeneral.h"

using namespace std;

//Acumulador del monto total recaudado por todas las localidades
//--------------------------------------------------------------
double recaudadoTotal = 0;
//--------------------------------------------------------------


//Variable para la creación de compras y reservaciones
//--------------------------------------------------------------
Asiento *asientoNuevo;
//--------------------------------------------------------------


//Área de Gradería General
//---------------------------------------------------------------
double recaudadoGeneral = 0;    //Acumulador del dinero recaudado en el área de Gradería General por la venta de boletos
graderiaGeneral *general = new graderiaGeneral();
//---------------------------------------------------------------

//Hileras de la gradería preferencial
//(PILAS)


//----------------------------------------------------------------
    double recaudadoPreferencial = 0;       //Acumulador del dinero recaudado en el área de Gradería Preferencial
    graderiaPreferencial *a = new graderiaPreferencial();
    graderiaPreferencial *b = new graderiaPreferencial();
    graderiaPreferencial *c = new graderiaPreferencial();
    graderiaPreferencial *d = new graderiaPreferencial();
    graderiaPreferencial *e = new graderiaPreferencial();
    
//-----------------------------------------------------------------    
    
    

//Método para agregar butaca en la localidad de gradería preferencial

bool comprobarGraderiaPref(Asiento *pasiento){
    if(!a->esLlena()){
        a->agregar(pasiento);
        return true;
    }else{
        if(!b->esLlena()){
            b->agregar(pasiento);
            return true;
        }else{
            if(!c->esLlena()){
                c->agregar(pasiento);
                return true;
            }else{
                if(!d->esLlena()){
                    d->agregar(pasiento);
                    return true;
                }else{
                    if(!e->esLlena()){
                        e->agregar(pasiento);
                        return true;
                    }else{
                        return false;
                    }
                }
            }
        }
    }
} 




    
//Método prara el procesamiento de las opciones del menú
    
void procesar(int popcion){
    switch(popcion){
        case 1:
            int localidad;
            cout<<"En qué localidad desea reservar?"<<endl;
            cout<<"1-VIP\n2-Gradería Preferencial\n3-General"<<endl;
            cin>>localidad;
            switch(localidad){
                case 1:
                    cout<<"Reservando en VIP. . ."<<endl;
                break;
                //Aquí va el código para reservar en VIP
                
                case 2:
                    asientoNuevo = new Asiento(5500, 'R');
                    if(!comprobarGraderiaPref(asientoNuevo)){
                        cout<<"La localidad de Gradería Preferencial se encuentra llena"<<endl;
                    }else{
                        cout<<"Butaca reservada"<<endl;
                    }
                break;
                
                case 3:
                    asientoNuevo = new Asiento(4000, 'R');
                    if(general->agregar(asientoNuevo)){
                        cout << "Butaca reservada" <<endl;
                    }else{
                        cout << "La localidad de Gradería General se encuentra llena"<< endl;
                    }
                break;
            }
            break;
        
        
        case 2: 
            cout<<"Para qué localidad desea la butaca?"<<endl;
            cout<<"1-VIP\n2-Gradería Preferencial\n3-Gradería General"<<endl;
            cin>>localidad;
            switch(localidad){
                case 1:
                    cout << "Comprando butaca en VIP. . ."<<endl;
                break;
                
                case 2:
                    asientoNuevo = new Asiento(5500, 'V');
                    if(!comprobarGraderiaPref(asientoNuevo)){
                        cout<<"La localidad de Gradería Preferencial se encuentra llena"<<endl;
                    }else{
                        recaudadoPreferencial = recaudadoPreferencial + asientoNuevo->getPrecio();
                        cout<<"Localidad: Gradería Preferencial\nPrecio: 5500 CRC\nDisfrute la función!"<<endl;
                    }
                break;
                
                case 3:
                    asientoNuevo = new Asiento(4000, 'V');
                    if(general->agregar(asientoNuevo)){
                        recaudadoGeneral = recaudadoGeneral + asientoNuevo->getPrecio();
                        cout << "Localidad: Gradería General\nPrecio: 4000 CRC\nQue disfrute la función!" <<endl;
                    }else{
                        cout << "La localidad de Gradería General se encuentra llena"<< endl;
                    }
                break;
            }
        break;
        
        case 3:
            recaudadoTotal = recaudadoPreferencial + recaudadoGeneral; //Falta lo recaudado del VIP
            int cantPref = a->getLongitud() + b->getLongitud() + c->getLongitud() + d->getLongitud() + e->getLongitud(); //Cantidad de personas en Gradería Preferencial
            int cantGeneral = general->getLongitud(); //Cantidad de personas en Gradería General
            
            cout << "-------------------------------------------------------------------------" << endl;
            cout << "Cantidad de personas en Gradería Preferencial: " << cantPref << endl;
            cout << "Cantidad de personas en Gradería General: " << cantGeneral << endl;
            //En esta línea se desglosa lo recaudado en el VIP
            cout << "Recaudado en Gradería Preferencial: " << recaudadoPreferencial << endl;
            cout << "Recaudado en Gradería General: " << recaudadoGeneral << endl;
            cout << "Total recaudado: " << recaudadoTotal <<endl;
            cout << "-------------------------------------------------------------------------" << endl;
        break;
    }
}

//Menú principal

void mostrarMenu(){
    int opcion;
    do{
        cout << "Menú principal" <<endl;
        cout<< "1- Reservar una butaca."<<endl;
        cout<< "2- Comprar un boleto."<<endl;
        cout<< "3- Iniciar función."<<endl;
        cout<< "4- Salir." << endl;
        cin>>opcion;
        procesar(opcion);
    }while(opcion != 4);
    
    
    
}


int main(int argc, char** argv){
  

    
    mostrarMenu();
    
    
  return 0;
}