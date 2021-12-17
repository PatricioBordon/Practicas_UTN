/*Hcer un programa que pida al usuario que digite un numero del 
1 al 1000 y que valide que este dentro de ese rango
Mostrar los multiplos de ese numeero del 1 al 10 */

//Lo mejore asi el usuario elige 

#include <iostream>
int main(){
    int numero,multi,op;
    repetir:
    std::cout<<"Digitar un numero: ";std::cin>>numero;
    std::cout<<"Digitar el limite de la tabla: ";std::cin>>multi;
    /*do{
    std::cout<<"Digitar un numero del 1 al 1000: ";std::cin>>numero;
    if(numero<1||numero>1000){
        std::cout<<"Error intenta digitar un numero del 1 al 1000: ";std::cin>>numero;
    }
    }while (numero<1||numero>1000);
    std::cout<<"\n";*/
    for (int i = 0; i <= multi; i++)
    {
        std::cout<<i<<" x "<<numero<< " = "<<i*numero<<"\n";
    }
    std::cout<<"Elige una opcion: \n";
    std::cout<<"-1. Repetir \n";
    std::cout<<"-2. Salir: \n";
    std::cin>>op;
    switch (op)
    {
    case 1:
        goto repetir;
        break;
    case 2:
        break;
    
    default:
        break;
    }
    
    system("pause");
    return 0;
}