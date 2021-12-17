/*Hacer un programa que pida numeros enteros y los vaya sumando.
Si el numero introducido esta dentro de 100 y 200, o es 0, cerrar el programa*/

#include <iostream>
int main(){
    int numero,acumulador=0;

    do
    {
        std::cout<<"Digitar un numero para sumar\n"; 
        std::cout<<"(si esta dentro del rango de 100 a 200 o es 0 se cierra el programa)\n";
        std::cin>>numero;
        acumulador+=numero;
        std::cout<<"\nsuma= "<<acumulador<<"\n";
    } while (((numero<100)||(numero>200))&&(numero!=0));
    system("pause;");
    return 0;
}