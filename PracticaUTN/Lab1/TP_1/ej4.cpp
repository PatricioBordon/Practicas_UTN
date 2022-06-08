/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de
ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.
Autor: PEB
Fecha: 20/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int asientosDisponibles, pasajesOcupados, ocupacionPorcentaje, noOcupacionPorcentaje;

    cout<<"Ingresar cantidad de asientos disponibles: ";
    cin>>asientosDisponibles;
    cout<<"Ingresar cantidad de pasajes ocupados: ";
    cin>>pasajesOcupados;

    ocupacionPorcentaje = pasajesOcupados * 100 / asientosDisponibles;
    noOcupacionPorcentaje = 100 - ocupacionPorcentaje;

    cout<<"Porcentaje de Ocupacion: "<<ocupacionPorcentaje<<"%\n";
    cout<<"Porcentaje de NO Ocupacion: "<<noOcupacionPorcentaje<<"%\n";

    return 0;
    system ("pause");
}

