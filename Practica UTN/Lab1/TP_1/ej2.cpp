/*UTNFRGP
Ejercicio: Hacer un programa que solicite por teclado que se ingresen dos números y luego
guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los
valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
Autor: PEB
Fecha:
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n1, n2, aux;

    cout<<"Ingresar dos numeros: \n";
    cout<<"Numero 1: ";
    cin>>n1;
    cout<<"Numero 2: ";
    cin>>n2;

    cout<<"Numero 1: "<<n1<<"\n";
    cout<<"Numero 2: "<<n2<<"\n";

    aux = n1;
    n1 = n2;
    n2 = aux;

    cout<<"Numero 1: "<<n1<<"\n";
    cout<<"Numero 2: "<<n2<<"\n";

    system("pause");
    return 0;
}
