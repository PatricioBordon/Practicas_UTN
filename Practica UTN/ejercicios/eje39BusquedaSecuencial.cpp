/*
En informática, la búsqueda lineal o la búsqueda secuencial 
es un método para encontrar un valor objetivo dentro de una
lista.Ésta comprueba secuencialmente cada elemento de la 
lista para el valor objetivo hasta que es encontrado o hasta 
que todos los elementos hayan sido comparados.

Ejercicio 39.- Búsqueda Secuencial
Pedir al usuario que ingrese un número.
Buscar el numero que ingreso el usuario en la lista.
Si el numero no esta en la lista pedir al usuario que ingrese otro numero.
*/

#include <iostream>
int main(){
    volver:
    int lista[]={1,2,3,4,5}, valor, posicion=0;
    bool encontrado=false;
    
    std::cout<<"Ingresar un numero de la siguiente lista:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lista[i]<<" ";
    }
    std::cout<<"\nIngresa un numero: ";
    std::cin>>valor;
    while (encontrado==false && posicion<5)
    {
        if (valor==lista[posicion])
        {
            encontrado=true;
            break;
        }
        posicion++;
    }
    if (encontrado==false)
    {
        std::cout<<"El numero ingresado no coincide con la lista, intenta de nuevo: \n";
        goto volver;
    }else{
        std::cout<<"El numero coincide\n";
    }
    
    system("pause");
    return 0;
}