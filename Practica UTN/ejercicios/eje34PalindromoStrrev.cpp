/*
Pedir al usuario que ingrese un palíndromo.
Si la palabra no es palindromo avisar y que lo intente de nuevo.
Si la palabra si es palindromo felicitar al usuario.
*/
#include <iostream>
#include <string.h>

int main(){
    char texto[50],textorev[50];
    int comparacion;
    std::cout<<"Ingresar texto palindromo: ";
    std::cin.getline(texto,50);
    strcpy(textorev,texto);
    strrev(textorev);
    comparacion=strcmp(textorev,texto);
    if(comparacion==0){
        std::cout<<"El texto es palindromo\n";
    }else{
    do
    {
        std::cout<<"El texto no es palindromo intenta otra vez: \nSe lee asi: "<<texto<<" "<<textorev<<"\n";
        std::cin.getline(texto,50);
        strcpy(textorev,texto);
        strrev(textorev);
        comparacion=strcmp(textorev,texto);
    }while (comparacion!=0);
    std::cout<<"El texto es palindromo, se lee asi: \n"<<texto<<" "<<textorev<<"\n";
    }
    system("pause");
    return 0;
}