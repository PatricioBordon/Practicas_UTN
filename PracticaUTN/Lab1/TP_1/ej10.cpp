/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas días y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.

Autor: PEB
Fecha: 22/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int cantHoras, cantDias, cantHoras2;
    cout<<"Ingresar la cantidad de horas: ";
    cin>>cantHoras;

    cantDias = cantHoras / 24;
    cantHoras2 = cantHoras % 24;

    cout<<"Cantidad de dias: "<<cantDias;
    cout<<"\nCantidad de horas: "<<cantHoras2;

    return 0;
    system("pause");
}


