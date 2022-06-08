#include <iostream>

int main(){
    char letra;
    
    do 
    {
        std::cout<<"presiona la letra a: ";std::cin>>letra;
    }while (letra=='a');
    std::cout<<"no presionaste la letra a\n";
    system("pause");
    return 0;
}