#include <iostream>
int main (){
    int n1,n2;
    std::cout<<"Ingresa dos numeros\n";
    std::cin>>n1>>n2;
    if(n1>n2){
        std::cout<<n1<<" es mayor que "<<n2;
    }
    else{
        std::cout<<n2<<" es mayor que "<<n1<<"\n";
    }
    if(n1==n2){
        std::cout<<n1<<" es mayor que "<<n2;
    }
    system("pause");
    return 0;
}