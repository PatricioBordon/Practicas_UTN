/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado una cantidad de minutos y
mostrar por pantalla a cuantos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.
Autor: PEB
Fecha: 22/03/2022
*/

#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
    int cantMin, cantHoras, cantDias, cantMin2;
    cout<<"Ingresar cantidad de minutos: ";
    cin>>cantMin;

    cantDias = cantMin / 1440;
    cantHoras = (cantMin / 60)% 24;
    cantMin2 = cantMin % 60;

    cout<<"Horas: "<<cantHoras;
    cout<<"\nDias: "<<cantDias;
    cout<<"\nMinutos: "<<cantMin2;

    return 0;
    system("pause");

}
