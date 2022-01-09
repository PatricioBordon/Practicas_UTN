/*
El paso de parámetros por referencia consiste en proporcionar a la subrutina a la que 
se le quiere pasar el argumento la dirección de memoria del dato. En este caso se tiene 
un único valor referenciado (o apuntado) desde dos puntos diferentes, el programa principal 
y la subrutina a la que se le pasa el argumento, por lo que 
cualquier acción sobre el parámetro se realiza sobre la misma posición de memoria.
FUENTE: Programacion ATS
*/

#include <iostream>

void cambioValor (int&, int&);

int main(){
    int n1, n2;
    std::cout<<"Ingresar valor 1: ";
    std::cin>>n1;
    std::cout<<"Ingresar valor 2: ";
    std::cin>>n2;
    cambioValor(n1, n2);
    system("pause");
    return 0;
}

void cambioValor (int& num1, int& num2){
    std::cout<<"Valores ingresados:\n"<<num1<<"\n"<<num2<<"\n";
    
    std::cout<<"valores cambiados:\n";
    num1= 7;
    num2= 9;
    std::cout<<num1<<"\n"<<num2<<"\n";
}