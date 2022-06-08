/*
Programa que pida un numero entero n
validar que el numero n sea mayor a 1
El programa hara un ciclo que multiplique los numeros 1*2*3 hasta n
*/
#include <iostream>
int main(){
    //el tipo de datos es long double por que int no admite numeros grandes (factorial de 200 por ejemplo)

    long double numero,multi=1;
    do
    {
        std::cout<<"Factorial: \n";
        std::cout<<"Digitar un numero entero mayor a 1: ";std::cin>>numero;
    } while (numero<1);
    for (long double i = 1; i <=numero; i++)
    {
        multi*=i;
        std::cout<<i<<" x ";
    }
    std::cout<<" = "<<multi<<"\n";
    system("pause");
    return 0;
}