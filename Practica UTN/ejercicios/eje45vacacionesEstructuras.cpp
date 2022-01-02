/*
Declarar la estructura empleados con nombre, año ingresó,años trabajando y dias vacaciones.
Pedirle al humano que llene los datos .
Calcular los años trabajados en relación al años actual.
Mostrar los días de vacaciones por empleado.
  0-3 años = 5 dias;
  4-10 años =10 dias;
  11-100 años = 15 dias;
*/
#include <iostream>
#include <ctime>
#include <locale.h>

  struct empleados
{
    char nombre[30];
    int yearingreso;
    int yeartrabajando;
    int diasvaca;
}empleado[5];


int main(){
  setlocale(LC_ALL, "spanish");

    for (int i = 0; i < (sizeof(empleado)/sizeof(*empleado)); i++)
    {
      std::cout<<"Ingresar nombre del empleado "<<i+1<<": ";
      std::cin.getline(empleado[i].nombre,(sizeof(empleado[i].nombre)/sizeof(*empleado[i].nombre))),'\n';
      std::cout<<"Ingresar año de ingreso de "<<empleado[i].nombre<<": ";
      std::cin>>empleado[i].yearingreso;
    }


}