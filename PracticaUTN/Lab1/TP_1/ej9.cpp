/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por
pantalla a cuantas horas y minutos equivalen.
Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6
horas y 20 minutos.
Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12
horas y 0 minutos.
Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0
horas y 50 minutos
Autor: PEB
Fecha: 21/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int cantMinutos, horas, minutos;

    cout<<"Ingresar cantidad de minutos: ";
    cin>>cantMinutos;

    horas = cantMinutos / 60;
    minutos = cantMinutos % 60;

    cout<<horas<<" horas\n";
    cout<<minutos<<" minutos\n";

    return 0;
    system("pause");

}
