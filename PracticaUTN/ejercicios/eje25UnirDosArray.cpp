/*
Unir dos arreglos
Declarar el arreglo uno y dos con un tamaño de rango de 5 elementos cada uno.
Pedir al usuario que ingrese 5 valores del arreglo uno y dos
Unir el arreglo uno y dos en un tercer vector
*/
#include <iostream>
int main(){
    int arreglo[5],arreglo2[5],arreglo3[10];
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingresar el valor "<<(i+1)<<" del arreglo 1: ";std::cin>>arreglo[i];
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingresar el valor "<<(i+1)<<" del arreglo 2: ";std::cin>>arreglo2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(i<5){
        arreglo3[i]=arreglo[i];
        }
        if(i>=5){
        arreglo3[i]=arreglo2[i-5];
        }
        std::cout<<(i+1)<<") "<<arreglo3[i]<<"\n";
    }   
    system("pause");
    return 0;
}    