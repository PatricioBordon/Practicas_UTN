/*
Crear una estructura con nombre y salario del empleado.
Inicializar nombre del empleado.
Pedir al usuario que ingrese el salario de cada empleado.
Ordenar los salarios de menor a mayor.
Mostrar los salarios.
*/
#include <iostream>

struct empleados
{
    char nombre[30];
    int salario;
}empleado[4]={{"Sara",0},{"Mengano",0},{"Fulana",0}, {"Carlos",0}};

int main(){

    bool ordenado=false;
    for (int i = 0; i < (sizeof(empleado)/sizeof(*empleado)); i++)
    {
        std::cout<<"Ingresar salario del empleado "<<i+1<<" ["<<empleado[i].nombre<<"] ";
        std::cin>>empleado[i].salario;
    }
    int aux;

    for (int i = 0; i < (sizeof(empleado)/sizeof(*empleado)); i++)
    {
        for (int j = 0; j < ((sizeof(empleado)/sizeof(*empleado))-1) && ordenado==false; j++)
        {
            ordenado=true;
            if (empleado[j].salario>empleado[j+1].salario)
            {
                ordenado=false;
                aux=empleado[j].salario;
                empleado[j].salario=empleado[j+1].salario;
                empleado[j+1].salario=aux;
            }
            
        }
        
    }
    for (int i = 0; i < (sizeof(empleado)/sizeof(*empleado)); i++)
    {
        std::cout<<"Ordenados de menor a mayor: ["<<empleado[i].nombre<<"] $"<<empleado[i].salario<<"\n";
    }
    

    system ("pause");
    return 0;
}
