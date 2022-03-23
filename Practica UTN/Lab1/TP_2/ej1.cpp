/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
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

    if (num > 0)
    {
        cout<<num<<" es positivo\n";
    }
    else if(num < 0)
    {
        cout<<num<<" es negativo\n";
    }
    else
    {
        cout<<num<<" es cero\n";
    }

    return 0;
    system("pause");
}

