/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.
Autor: PEB
Fecha: 23/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;
    cout<<"Ingresar un numero: ";
    cin>>num;

    if (num % 2 == 0)
    {
        cout<<num<<" es par";
    }
    else
    {
        cout<<num<<" no es par";
    }

    return 0;
    system("pause");

}

