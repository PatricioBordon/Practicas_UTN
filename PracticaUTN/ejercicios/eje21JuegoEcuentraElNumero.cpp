/*
Generar un numero aleatorio entre 1 y 100
pedir al humano que encuentre ese numero aleatorio 
si el humano atina, hay que felicitarlo, si no atina
hay que avisar que su numero es superior o inferior
*/
#include <iostream>
#include <time.h>

int main(){
    int numero, aleatorio, contador=0;
    srand(time(NULL));
    aleatorio= 1 + rand()%100;
    std::cout<<"Adivina el numero\n";
    do
    {
        std::cout<<"Ingresar un numero entre 1 y 100("<<aleatorio<<"): ";//borrar lo que esta en parentesis para que el usuario no lo vea
        std::cin>>numero;
        if (numero<aleatorio)
        {
            std::cout<<"\nIncorrecto\n Pista: El numero que ingresaste es menor\n";
        }
        if (numero>aleatorio)
        {
            std::cout<<"\nIncorrecto\n Pista: El numero que ingresaste es mayor\n";
        }
        contador++;
    } while (numero!=aleatorio);
    std::cout<<"\nFelicitaciones, has acertado despues de "<<contador<<" intentos";
    system("pause");
    return 0;
}