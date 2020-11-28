/* Datos:

 Martes - viernes - domingos  --> 4 vuelos por cada dia
 Vuelos:  1. 11:00 am
          2. 12:00 pm
          3. 2:00  pm
          3. 4:00  pm
 Avion: 30 asientos                  15 a cada lado
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana][pasillo]    [pasillo][ventana]
                        [ventana]                      [ventana]
                         
Como se podria mostar la informacion de vuelos:
 
Dia Martes       Vuelos:         Asientos disponibles:                 Asientos ocupados:
                 11:00 am        3 en ventana | 5 en pasillo           22
                 12:00 pm        5 en ventana | 4 en pasillo           02
                 02:00 pm        4 en ventana | 3 en pasillo           19
                 04:00 pm        3 en ventana | 3 en pasillo           20
 
Dia Viernes      Vuelos:         Asientos disponibles:                 Asientos ocupados:
                 11:00 am        3 en ventana | 5 en pasillo           22
                 12:00 pm
                 02:00 pm
                 04:00 pm



 
 */
#include "Proyecto.hpp"
#include <iostream>
using namespace std;

//Para los aviones (separar a otro archivo xd)
class avion {
    private:
        char disponible;
        char ocupado;
        int asientosVentana[16];
    int asientosPasillo[14];
    public:

    //En cada asiento tiene un numero y disponiblidad
};


int menu(){
    int option;

    cout<<endl<<endl;
    cout<< "Menu principal de reservas"<< endl;
    cout<<"\t1.Mostrar información de vuelos"<<endl;
    cout<<"\t2.Reservar un asiento"<<endl;
    cout<<"\t0.Salir"<<endl<<endl;
    cout<<"Por favor ingrese una opción: ";
    cin>>option;
    getchar();
    cout<<endl;
    
    if(option>=0&&option<=6)
        return option;
    else
        return -1;
}
void dibujoAvion();

int main(){

 cout<<"Bienvenido al sistema de reserva de asientos para vuelos Quito-Paris "<<endl;
    dibujoAvion();


 while(true)
 {
 switch(menu( ))
    {
   /*
        case 1: info(); break; //display information
        case 2: Reservation(); break; //reservation
        case 0:exit(0);
        default<<"Seleccione una opcion correcta!\n";
        
        fuente:https://developpaper.com/c-realization-of-air-ticket-reservation-system/
    */
    }
    } 
    return 0;
}





void dibujoAvion(){

//cout<<"                                    |"<<endl;
cout<<"                                    |"<<endl;
cout<<"                                    |"<<endl;
cout<<"                                  .-'-."<<endl;
cout<<"                                 ' ___ '"<<endl;
cout<<"       _________________________'  '-'  '_________________________"<<endl;
cout<<"        ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''"<<endl;
cout<<"                      \\    /  ||/   H   \\||  \\    /"<<endl;
cout<<"                       '--'   OO   O|O   OO   '--'"<<endl;


}
