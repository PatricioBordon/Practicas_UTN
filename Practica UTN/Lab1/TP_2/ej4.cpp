/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.
Autor: PEB
Fecha:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int num1, num2, diferencia;

    cout<<"Ingresar primer numero: ";
    cin>>num1;
    cout<<"Ingresar segundo numero: ";
    cin>>num2;

    diferencia = num1 - num2;

    if (diferencia < 0){
        diferencia *= -1;
    }

    cout<<"La diferencia absoluta entre "<<num1<<" y "<<num2<<" es: "<<diferencia<<"\n";

    return 0;
    system("pause");

}





