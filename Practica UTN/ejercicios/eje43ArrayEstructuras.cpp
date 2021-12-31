/*
Crear un arreglo de estructuras con id y nombre para 2 empleados.
Pedirle al usuario que ingrese los datos del empleado.
Validar que el id contenga sólo números y que tenga 6 dígitos.
*/
#include <iostream>
#include <string.h>

struct empleados
{
    char ID[8];
    char nombre[40];
}empleado[2];

int main(){
    
    
    std::cout<<"Ingresar datos de empleados (el ID debe ser de 6 (seis) numeros)\n";
    for (int i = 0; i < 2; i++)
    {
        
        
        std::cout<<"Empleado "<<i+1<<" Nombre: ";
        std::cin.getline(empleado[i].nombre,40);
        std::cout<<"Empleado "<<i+1<<" id: ";
        std::cin.getline(empleado[i].ID,8,'\n');//para que me acepte 6 tengo que digitar tamaño 8
        
        for (int j = 0; j < 6; j++)
        {   
            while ((empleado[i].ID[j]<=47)||(empleado[i].ID[j]>=58))
            {
            std::cout<<"Error: debes digitar 6 numeros sin letras ni simbolos, intenta otra vez\n";
            std::cout<<"Empleado "<<i+1<<" id: ";
            std::cin.getline(empleado[i].ID,8,'\n');//para que me acepte 6 tengo que digitar tamaño 8
            }
            
            
        }
        

        std::cout<<"\n";
        fflush(stdin);//vaciar buffer y permitir digitar valores
    }
    std::cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"\nNombre de empleado "<<i+1<<": "<<empleado[i].nombre<<"\n";
        std::cout<<"ID: "<<empleado[i].ID<<"\n";
    }
    system("pause");
    return 0;

}