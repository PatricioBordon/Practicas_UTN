/*Hcer un programa que pida al usuario que digite un numero del 
1 al 1000 y que valide que este dentro de ese rango
Mostrar los multiplos de ese numeero del 1 al 10 */
#include <iostream>
int main(){
    int numero;
    do{
    std::cout<<"Digitar un numero del 1 al 1000: ";std::cin>>numero;
    if(numero<1||numero>1000){
        std::cout<<"Error intenta digitar un numero del 1 al 10: ";std::cin>>numero;
    }
    }while (numero<1||numero>1000);
    std::cout<<"\n";
    for (int i = 1; i <= 1000; i++)
    {
        std::cout<<i<<" x "<<numero<< " = "<<i*numero<<"\n";
    }
    
    system("pause");
    return 0;
}