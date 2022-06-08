/*
Pedir al usuario que ingresar 5 números.
Ordenar los números.
Mostrar los números de forma ascendente.
Mostrar los números de forma descendente.
*/
#include <iostream>

int main(){
    int numeros[5], aux;
    std::cout<<"Ingresar 5 numeros: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<".- ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }
    std::cout<<"Numeros ordenados de forma ascendente\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"Numeros ordenados de forma descendente\n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }
    

    system ("pause");
    return 0;
}