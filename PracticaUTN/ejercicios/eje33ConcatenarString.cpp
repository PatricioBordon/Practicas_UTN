/*
Declarar 3 variables de tipo string.
Pedir al usuario que ingrese nombre y apellido y guardarlos en el string 1 y 2.
Colocar los valores del string 1 y 2 en el string 3.
*/
#include <iostream>
#include <string.h>
int main(){
    char nombre[30];
    char apellido[30];
    char completo[60]={""};
    std::cout<<"Ingresar Nombre--> ";std::cin.getline(nombre,30);
    std::cout<<"Ingresar Apellido--> ";std::cin.getline(apellido,30);
    strcat(completo,nombre);
    strcat(completo," ");
    strcat(completo,apellido);
    std::cout<<"Nombre Completo: "<<completo<<"\n";
    system("pause");
    return 0;
}