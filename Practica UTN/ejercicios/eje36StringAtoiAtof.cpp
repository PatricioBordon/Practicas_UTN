/*
Pedir al usuario que ingrese un texto de 4 números.
Dividir el texto en dos números de dos en dos.
Sumar cada uno de los números.
*/
#include <iostream>
#include <stdlib.h>

int main(){
    char texto[4],texto1[2], texto2[2];
    int num1=0, num2=0, suma=0;
    std::cout<<"Ingresar 4 numeros: ";
    std::cin.getline(texto,sizeof(texto)+1);
    texto1[0]= texto[0];
    texto1[1]= texto[1];
    texto1[2]= '\0';
    num1=atoi(texto1);

    texto2[0]= texto[2];
    texto2[1]= texto[3];
    texto2[2]= '\0';
    num2=atoi(texto2);

    suma= num1 + num2;
    std::cout<<"Suma: "<<suma<<"\n";
    system("pause");
    return 0;
}