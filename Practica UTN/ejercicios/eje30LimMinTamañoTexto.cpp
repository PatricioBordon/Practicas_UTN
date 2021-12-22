/*
Pedir al usuario que ingrese un texto de más de 10 letras.
Si tiene menos de 10 letras avisar al usuario y que intente otra vez.
Si tiene más de 10 letras avisar.
*/
#include <iostream>
#include <string.h>
int main(){
    int longitud=0;
    char texto[10];
    std::cout<<"Ingresar texto con un minimo de diez letras: ";
    gets(texto);
    strlen(texto);
    longitud= strlen(texto);
    
    do
    {
        std::cout<<"No se cumplio la consigna, intenta otra vez\n";
        gets(texto);
        strlen(texto);
        longitud= strlen(texto);
    } while (longitud<10);
    std::cout<<"Se cumplio la consigna\n";
     
    system ("pause");
    return 0;
}