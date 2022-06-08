/*Hacer un programa que pida un numero entero n
Validar que el numero sea mayor a 1
El programa hara un ciclo que sume los numeros 1+2+3+n*/

#include <iostream>
int main(){
    int numero,contador=0;
    do
    {
        std::cout<<"Digitar un numero mayor a 1: ";std::cin>>numero;
    } while (numero<=1);
    for (int i = 1; i <= numero; i++)
    {
        contador+=i;
        std::cout<<i<<" + ";
    }

    std::cout<<" = "<<contador<<"\n";
    system("pause");
    return 0;
}
