#include <iostream>
int main(){
    int numero;
    std::cout<<"Ingresa un numero entre 1 y 5 o 6\n";
    regresar:
    std::cin>>numero;
    switch (numero)
    {
    case 1:
        std::cout<<"presionaste el numero 1\n";
        goto regresar;
        break;
    case 2:
        std::cout<<"presionaste el numero 2\n";
        goto regresar;
        break;
    case 3:
        std::cout<<"presionaste el numero 3\n";
        goto regresar;
        break;
    case 4:
        std::cout<<"presionaste el numero 4\n";
        goto regresar;
        break;
    case 5:
        std::cout<<"presionaste el numero 5\n";
        goto regresar;
        break;
    case 6:
        std::cout<<"presionaste el numero 6, nos vemos\n";
        system("pause");
        return 0;
        break;
    default:
        std::cout<<"incorrecto ingresa un valor valido\n";
        goto regresar;
        break;
        
    }
    system("pause");
    return 0;
}