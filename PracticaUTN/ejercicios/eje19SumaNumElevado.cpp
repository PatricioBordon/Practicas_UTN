/*
Sumatoria de numero 2 elevado a la n potencia
Programa que pida un numero entero n
Validar que el numero n sea mayor a 1
El programa hara un ciclo que eleve el numero 2 a la n potencia y regrese la sumatoria
*/
#include <iostream>
#include <math.h>
int main(){
    float numero, potencia=0,suma=0;
    do
    {
        std::cout<<"Digitar un numero: ";std::cin>>numero;
    } while (numero<1);
    
    for (float i = 1; i<=numero; i++)
    {
        potencia=pow(2,i);
        suma+=potencia;
    }
    std::cout<<"Resultado de la sumatoria: "<<suma<<"\n";
    system("pause");
    return 0;
}