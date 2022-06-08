#include <iostream>
#include <stdio.h>
///LAS FUNCIONES COIN DESARROLLO TIENEN QUE ESTAR EN UN .H
///ESTE ARCHIVO SOLO TENDRA EL MENU CON LAS LLAMADAS A FUNCION
///Comprimir la carpeta del proyecto sin la carpeta bin y la otra


using namespace std;

int opcion; //variable global

#include "cabecera.h";

int main(){
    cout<<"Generala"<<endl;
    ///menu
    bool fin=false;
    do{
        cout<<"Seleccione una opcion: "<<endl;
        reinicio: ///Cuando ingresa mal las opciones
        cout<<"[1]. 1 Jugador"<<endl;
        cout<<"[2]. 2 Jugadores"<<endl;
        cout<<"[3]. Puntuacion mas alta"<<endl;
        cout<<"[4]. Salir"<<endl;
        ///Pido opcion
        cin>>opcion;
        while((opcion<1)||(opcion>4)){
            borarPantalla();
            cout<<"*********Incorrecto, lee la consigna:*********"<<endl;
            goto reinicio;
        ///Pido opcion
        cin>>opcion;

        }
        switch(opcion){
        case 1:{

            borarPantalla();
            unJugador();
            break;
        }
        case 2:{

            borarPantalla();
            //dosJugadores();
            break;

        }
        case 3: {
            cout<<"Puntuacion mas alta: "<<puntuacionMasAlta()<<endl;
            break;
        }
        case 4:{

            borarPantalla();
            cout<<"Gracias vuelva prontos"<<endl;

            fin=true;
            return 0;
            break;

        }
        }


    }while(fin==false);



    system ("pause");
    return 0;
}

