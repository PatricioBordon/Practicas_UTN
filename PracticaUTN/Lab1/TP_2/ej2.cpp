/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
con un cartel aclaratorio si el primer número es múltiplo del segundo.
Autor: PEB
Fecha:23/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int num1, num2;

    cout<<"Ingresar primer numero: ";
    cin>>num1;
    cout<<"Ingresar segundo numero: ";
    cin>>num2;

    if ((num1 % num2) == 0)
    {
        cout<<num1<<" es multiplo de "<<num2;
    }
    else
    {
        cout<<num1<<" no es multiplo de "<<num2;
    }
    return 0;
    system("pause");
}

