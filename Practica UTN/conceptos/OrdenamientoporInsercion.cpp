/*
El ordenamiento por inserción (insertion sort en inglés)
es una manera muy natural de ordenar para un ser humano, 
y puede usarse fácilmente para ordenar un mazo de cartas 
numeradas en forma arbitraria. Requiere O(n²) operaciones 
para ordenar una lista de n elementos.
*/

#include <iostream>
int main(){
    int numero[5], aux, posicion=0;
    std::cout<<"Ingresar los siguientes numeros:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<". ";
        std::cin>>numero[i];
    }
    for (int i = 0; i < 5; i++)
    {
        posicion=i;
        aux=numero[i];
        while ((posicion>0) &&(numero[posicion - 1])>aux)
        {
            numero[posicion]=numero[posicion-1];
            posicion--;
        }
        numero[posicion]=aux;
    }
    std::cout<<"Numeros ordenados de forma ascendente:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numero[i]<<"\n";
    }
    std::cout<<"Numeros ordenados de forma descendente:\n";
    for (int i = 4; i >=0; i--)
    {
        std::cout<<numero[i]<<"\n";
    }
    
    

    system("pause");
    return 0;
}