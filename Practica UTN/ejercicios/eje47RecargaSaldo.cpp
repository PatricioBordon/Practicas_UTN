/*
Crear una estructura con nombre y saldo del cliente.
Inicializar nombre del cliente.
Pedir al humano que ingrese el id del cliente y el saldo.
Mostrará saldo de todos los clientes.
*/

#include <iostream>

struct clientes
{
    char nombre[30];
    int saldo=0;
}cliente[5]={{"Fulana"},{"Fulano"},{"Patricio"},{"Sara"},{"Mengano"}};

int main(){
    int opcion, ID;
    int auxsaldo=0;

    std::cout<<"Recarga de Saldo\n";

    for (int i = 0; i < (sizeof(cliente)/sizeof(*cliente)); i++)
    {
        std::cout<<"ID ["<<i<<"]: "<<cliente[i].nombre<<"\n";
    }
    std::cout<<"Ingresar ID del cliente: ";std::cin>>ID;

    while (cliente[ID].nombre[0]=='\0')
    {
        std::cout<<"Error (ID invalido) intentalo de nuevo: ";
        std::cin>>ID;
    }
    std::cout<<"Ingresar saldo de "<<cliente[ID].nombre<<": ";
    std::cin>>auxsaldo;
    cliente[ID].saldo = auxsaldo;
    do
    {
        std::cout<<"\n1. Recargar mas saldo\n2. Ver lista\n3. Seleccionar otro usuario\n4. Salir\n";
        std::cin>>opcion;

        switch (opcion)
        {
        case 1:
        std::cout<<"Ingresar saldo de "<<cliente[ID].nombre<<": ";
        std::cin>>auxsaldo;
        cliente[ID].saldo += auxsaldo ;
        break;
        case 2:
        std::cout<<"Lista:\n";
        for (int i = 0; i < (sizeof(cliente)/sizeof(*cliente)); i++)
        {
            
            std::cout<<"ID ["<<i<<"]: "<<cliente[i].nombre<<": $"<<cliente[i].saldo<<"\n";
        }
        break;
        case 3:
        for (int i = 0; i < (sizeof(cliente)/sizeof(*cliente)); i++)
        {
        std::cout<<"ID ["<<i<<"]: "<<cliente[i].nombre<<"\n";
        }
        std::cout<<"Ingresar ID del cliente: ";std::cin>>ID;
        while (cliente[ID].nombre[0]=='\0')
        {
        std::cout<<"Error (ID invalido) intentalo de nuevo: ";
        std::cin>>ID;
        }
        std::cout<<"Ingresar saldo de "<<cliente[ID].nombre<<": ";
        std::cin>>auxsaldo;
        cliente[ID].saldo = auxsaldo;
        break;

        default:
        break;
    }
    } while (opcion!=4);
    std::cout<<"Gracias vuelva prontos\n";
    
   

    system("pause");
    return 0;
}