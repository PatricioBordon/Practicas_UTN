#include <iostream>
int main (){
    int n1,n2;
    std::cout<<"Ingresa dos numeros:\n";
    std::cout<<"Numero 1: ";std::cin>>n1;
    std::cout<<"Numero 2: ";std::cin>>n2;

    if(n1==n2){
        std::cout<<n1<<" es igual a "<<n2<<"\n";
    }
    else if(n1>n2){
        std::cout<<n1<<" es mayor que "<<n2<<"\n";
    }
    else{
        std::cout<<n2<<" es mayor que "<<n1<<"\n";
    }
    
    system("pause");
    return 0;
}