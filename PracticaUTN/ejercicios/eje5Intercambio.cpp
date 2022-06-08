#include <iostream>
int main (){
    int a,b,aux;
    /*la variable "aux" sirve para que el valor de "a" 
    sea el valor de "a" cuando "b" tome el valor de "a"
    para evitar esto:
    a=9
    b=10
    a=b (a=10)
    b=a (b=10)
    como se lee de arria a abajo, "a" tenia el valor de "b" cuando b 
    tomo el valor de "a"
    entonces:

    aux=a (aux=9)
    a=b (a=10)
    b=aux (b=9)
    pero para ahorrar un proceso; la ultima linea no hace falta
    simplemente muestro "a" y "aux"

    */
    std::cout<<"Ingresar numero: ";std::cin>>a;
    std::cout<<"\nIngresar segundo numero: ";std::cin>>b;
    aux=a;
    a=b;
    std::cout<<"\nValores intercambiados \n";
    std::cout<<a<<"\n";
    std::cout<<aux<<"\n";

    system("pause");
    return 0;
}