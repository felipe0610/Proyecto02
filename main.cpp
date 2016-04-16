#include <cstdlib>
#include <iostream>
#include "Asiento.h"
#include "graderiaPreferencial.h"
#include "nodoAsiento.h"

using namespace std;



//Hileras de la gradería preferencial
//(PILAS)


//----------------------------------------------------------------

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
                    Asiento *asiento = new Asiento(5500,'R');
                    if(!comprobarGraderiaPref(asiento)){
                        cout<<"La localidad de Gradería Preferencial se encuentra llena"<<endl;
                    }else{
                        cout<<"Butaca reservada"<<endl;
                    }
                    
                break;
            }
            break;
        
        
        case 2: 
            cout<<"Ha salido."<<endl;
            break;
    }
}

//Menú principal

void mostrarMenu(){
    int opcion;
    do{
        cout << "Menú principal" <<endl;
        cout<< "1- Reservar una butaca."<<endl;
        cout<< "2- Salir."<<endl;
        cin>>opcion;
        procesar(opcion);
    }while(opcion != 2);
    
    
    
}


int main(int argc, char** argv){
  

    
    mostrarMenu();
    
    
  return 0;
}