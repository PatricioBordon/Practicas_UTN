/*Determinar si el numero ingresado es par o impar
Esto sirve para numeros enteros pero si el humano ingresa un
numero decimal, solo se va a tomar el numero
antes de la coma, por eso se especifica que ingrese un numero entero*/
#include <iostream>
int main(){
    int n1;
    std::cout<<"Ingresar numero entero: ";
    std::cin>>n1;
    if(n1%2==0){
        std::cout<<"\nEl numero ingresado es par\n";
    }
    else{
        std::cout<<"\nEl numero ingresado es impar\n";
    }

    system ("pause");
    return 0;
}