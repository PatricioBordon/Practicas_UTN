/*
Declarar la estructura empleados con nombre, año ingresó,años trabajando y dias vacaciones.
Pedirle al usuario que llene los datos .
Calcular los años trabajados en relación al año actual.
Mostrar los días de vacaciones por empleado.
  0-3 años = 5 dias;
  4-10 años =10 dias;
  11-100 años = 15 dias;
  Se usa el "<<char(164)<<" para la ñ teniendo de referencia el codigo ASCII
*/
#include <iostream>
#include <ctime>
#include <string.h>


  struct empleados
{
    char nombre[30];
    int yearingreso;
    int yeartrabajando;
    int diasvaca;
}empleado[5];


int main(){
  
  
  time_t t=time(NULL);
  tm* timerPtr= localtime(&t);//recibe tiempo del sistema

  int yearActual= timerPtr->tm_year+1900;//para C++, 1900 es 0, por eso se suma 1900

  for (int i = 0; i < (sizeof(empleado)/sizeof(*empleado)); i++)
  {
    
    std::cout<<"Ingresar nombre del empleado "<<i+1<<": ";
    std::cin.getline(empleado[i].nombre,(sizeof(empleado[i].nombre)/sizeof(*empleado[i].nombre))),'\n';
    std::cout<<"Ingresar a"<<char(164)<<"o de ingreso de "<<empleado[i].nombre<<": ";
    std::cin>>empleado[i].yearingreso;
 
    empleado[i].yeartrabajando= yearActual - empleado[i].yearingreso;

    switch (empleado[i].yeartrabajando)
    {
    case 0 ... 3: 
    empleado[i].diasvaca= 5; 
    break;
    
    case 4 ... 10: 
    empleado[i].diasvaca= 10; 
    break;
    
    case 11 ... 100: 
    empleado[i].diasvaca= 15; 
    break;
    
    default:
      break;
    }
    std::cout<<"Dias de vacaciones: "<<empleado[i].diasvaca<<" ("<<empleado[i].yeartrabajando<<" a"<<char(164)<<"os trabajados)\n";
    fflush(stdin);
  }
  system("pause");
  return 0;

}