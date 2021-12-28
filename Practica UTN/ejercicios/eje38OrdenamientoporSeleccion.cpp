/*
Su funcionamiento es el siguiente:
Buscar el mínimo elemento de la lista.
Intercambiarlo con el primero.
Buscar el siguiente mínimo en el resto de la lista.
Intercambiarlo con el segundo.
*/
#include <iostream>
int main(){
    int menor, numero[5], aux, ciclos=0;
    std::cout<<"Ingresar 5 numeros:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"- ";
        std::cin>>numero[i];
    }
    for (int  i = 0; i < 5; i++)
    {
        menor= i;
        for (int j = i+1; j < 5; j++)
        {
            if(numero[menor]>numero[j]){
                menor=j;
            }
            ciclos++;
        }
        aux=numero[i];
        numero[i]=numero[menor];
        numero[menor]=aux;
    }
    std::cout<<"Numeros ordenados de forma ascendente en "<<ciclos<<" ciclos:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numero[i]<<"\n";
    }
    std::cout<<"Numeros ordenados de forma descendente en "<<ciclos<<" ciclos:\n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numero[i]<<"\n";
    }
    
    system("pause");
    return 0;
}