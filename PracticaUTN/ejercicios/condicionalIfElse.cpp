#include <iostream>
int main(){
    int numingres,numaencontar=5;
    std::cout<<"ingresar numero: ";std::cin>>numingres;
    if(numingres>=numaencontar){
        std::cout<<"verdadero\n";
    }
    else{
        std::cout<<"falso\n";
    }
    system("pause");
    return 0;
}