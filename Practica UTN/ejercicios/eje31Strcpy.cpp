/*
Definir un string.
Declarar un string 
Copiar el primer string en el segundo.
*/
#include <iostream>
#include <string.h>
int main(){
    char texto1[]="Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";
    char texto2[]="";
    strcpy(texto2,texto1);
    std::cout<<texto2<<"\n";
    system("pause");
    return 0;
}