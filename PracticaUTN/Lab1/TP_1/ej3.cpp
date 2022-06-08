/*UTNFRGP
Ejercicio: Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000
de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la
cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo.
Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.
Autor: PEB
Fecha: 20/03/2022
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    const int sueldoFijo = 15000, premio = 2000;
    int autosVendidos;
    int sueldoTotal;

    cout<<"Ingresar cantidad de autos vendidos: ";
    cin>>autosVendidos;

    sueldoTotal = sueldoFijo + autosVendidos * premio;

    cout<<"Sueldo total: "<<sueldoTotal<<"$\n";


    system("pause");
    return 0;
}
