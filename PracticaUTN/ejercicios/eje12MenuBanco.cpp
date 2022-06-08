/*Hacer un programa que simule un banco 
con un saldo inicial de mil dolares*/
#include <iostream>

int main(){
    int opcion;
    float total=1000,ingreso,retiro;
    std::cout<<"¡¡Bienvenido/a!!\n";
    regreso:
    std::cout<<"Por favor, digita una opción!\n";
    std::cout<<"1.-Ingreso de dinero\n";
    std::cout<<"2.-Retiro de dinero\n";
    std::cout<<"3.-Salir\n";
    std::cin>>opcion;
    switch (opcion)
    {
    case 1:
        std::cout<<"¿Cuanto dinero deseas ingresar? ";std::cin>>ingreso;
        total+=ingreso;
        std::cout<<"Saldo: $"<<total<<"\n";
        goto regreso;
        break;
    case 2:
        std::cout<<"¿Cuanto dinero deseas retirar? ";std::cin>>retiro;
        if(retiro<total){
            total-=retiro;
            std::cout<<"Saldo Restante: $"<<total<<"\n";
        }else{
            std::cout<<"Saldo insuficiente, tienes $"<<total<<" intenta de nuevo: ";
            goto regreso;
        }
        goto regreso;
        break;
    case 3:
        break;
    default:
        goto regreso;
        break;
    }
    system("pause");
    return 0;
}
