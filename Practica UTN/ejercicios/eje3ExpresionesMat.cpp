#include <iostream>

int main(){
    float a,b,resul;
    std::cout<<"Ingresar lo siguiente";
    std::cout<<"valor a: ";std::cin>>a;
    std::cout<<"valor b: ";std::cin>>b;
    resul=a/b+1;
    std::cout.precision(1);
    std::cout<<"\nResultado: "<<resul<<"\n";


    system ("pause");
    return 0;
}