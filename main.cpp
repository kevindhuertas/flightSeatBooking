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
                         
 informacion de todas las opciones que estan disponibles:
 
Dia Martes       Vuelos:  11:00 am
                          12:00 pm
                          2:00  pm
                          4:00  pm


Dia miercoles

Dia domingo
 
 */
#include "Proyecto.hpp"
#include <iostream>
using namespace std;

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
    cout<<"\t3.Display the information "<<endl;
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
