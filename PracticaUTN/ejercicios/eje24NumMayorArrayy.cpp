/*
Encontrar el numero mayor en un Array
Pedir al usuario que ingrese la cantidad de elementos
Pedir al usuario que ingrese el valor de cada elemento
Buscar el elemento mayor de un arreglo
*/
#include <iostream>
int main(){
    int arreglo[100],tamano,mayor=0;
    do
    {
        std::cout<<"Ingresar tamano del arreglo: ";std::cin>>tamano;
    
    } while ((tamano<1)||(tamano>100));
    for (int i = 0; i < tamano; i++)
    {
        std::cout<<"Ingresar valor del elemento "<<(i+1)<<": ";std::cin>>arreglo[i];
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }

    std::cout<<"\nEl mayor es: "<<mayor<<"\n";
    
    system("pause");
    return 0;
}