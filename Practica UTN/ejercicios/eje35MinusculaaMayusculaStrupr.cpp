/*
Pedir al usuario que ingrese un texto en minúsculas o en mayúsculas.
Pedir al usuario que escriba otro texto similar al anterior.
Si no es la misma palabra informar al usuario y que intente otra vez, 
de lo contrario felicitarlo.
*/
#include <iostream>
#include <string.h>

int main(){
    char texto1[50], texto2[50];

    std::cout<<"Ingresar texto en mayusculas o minusculas: ";
    std::cin.getline(texto1,50);

    std::cout<<"Ingresar texto similar al anterior: ";
    std::cin.getline(texto2,50);

    strupr(texto1);//ya me lo convierte a mayuscula
    strupr(texto2);
    if (strcmp(texto1,texto2)==0){
        std::cout<<"El texto "<<texto1<<" es similar al texto "<<texto2<<"\n";
    }else{
        do
        {
            std::cout<<"El texto "<<texto1<<" no es similar al texto "<<texto2<<"\nIntenta de nuevo: ";
            std::cout<<"Ingresar texto en mayusculas o minusculas: ";
            std::cin.getline(texto1,50);

            std::cout<<"Ingresar texto similar al anterior: ";
            std::cin.getline(texto2,50);

            strupr(texto1);//ya me lo convierte a mayuscula
            strupr(texto2);
        } while (strcmp(texto1,texto2)!=0);
        std::cout<<"Los textos son similares\n";
    }


    system("pause");
    return 0;
}