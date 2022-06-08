/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda.
Autor: PEB
Fecha: 20/03/2022
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int horasTrabajadas, valorHora, sueldo;
    cout<<"Ingresar horas trabajadas por el operario: \n";
    cin>>horasTrabajadas;
    cout<<"Valor de hora trabajada: \n";
    cin>>valorHora;
    sueldo = horasTrabajadas * valorHora;
    cout<<"El sueldo es: "<<"$"<<sueldo<<"\n";
    system("pause");
    return 0;
}
