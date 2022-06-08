/*
Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.
*/
#include <iostream>

void cambio (int&, int&);

int main(){
    int num1, num2;
    std::cout<<"Ingresar dos valores:\n";
    std::cout<<"N1: "; std::cin>>num1;
    std::cout<<"N2: "; std::cin>>num2;
    cambio (num1, num2);
    std::cout<<"Valores intercambiados:\n";
    std::cout<<"N1: "<<num1<<"\n"; 
    std::cout<<"N2: "<<num2<<"\n";    
    system("pause");
    return 0;
}

void cambio (int& num1, int& num2){
    
    int aux=0;
    aux= num1;
    num1= num2;
    num2= aux;
}