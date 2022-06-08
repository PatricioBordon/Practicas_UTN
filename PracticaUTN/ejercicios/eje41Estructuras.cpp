/*
Las estructuras nos permiten agrupar varios datos, que mantengan 
algún tipo de relación, aunque sean de distinto tipo, 
permitiendo manipularlos todos juntos, usando un mismo 
identificador, o cada uno por separado.
Las estructuras son llamadas también registros o récords. 
Tienen muchos aspectos en común con los registros usados en 
bases de datos. Y siguiendo la misma analogía, cada objeto de
 una estructura se denomina a menudo campo, o field.

Crea un programa:
Que almacene Nombre, dirección y teléfono de 3 empleados.
Pedir al usuario que ingrese Nombre y dirección de 3 clientes.
*/
#include <iostream>
struct empleados
{
    char nombre[65];
    char direccion[65];
    char tel[65];
}
empleado1={"Patricio", "Argentina", "12345678"},
empleado2={"Fulano", "España", "846854644"}, 
empleado3={"Mengano", "Uruguay", "4478554241"};

struct clientes
{
    char nombre[65];
    char direccion[65];
}cliente1, cliente2;



int main(){
    std::cout<<"EMPLEADOS\n";
    std::cout<<"Nombre Empleado 1: "<<empleado1.nombre<<"\n";
    std::cout<<"Direccion Empleado 1: "<<empleado1.direccion<<"\n";
    std::cout<<"Telefono Empleado 1: "<<empleado1.tel<<"\n\n";

    std::cout<<"Nombre Empleado 2: "<<empleado2.nombre<<"\n";
    std::cout<<"Direccion Empleado 2: "<<empleado2.direccion<<"\n";
    std::cout<<"Telefono Empleado 2: "<<empleado2.tel<<"\n\n";

    std::cout<<"Nombre Empleado 3: "<<empleado3.nombre<<"\n";
    std::cout<<"Direccion Empleado 3: "<<empleado3.direccion<<"\n";
    std::cout<<"Telefono Empleado 3: "<<empleado3.tel<<"\n\n";

    std::cout<<"Clientes\n";
    std::cout<<"Nombre Cliente 1: ";std::cin>>cliente1.nombre;
    std::cout<<"Direccion Cliente 1: ";std::cin>>cliente1.direccion;

    std::cout<<"Nombre Cliente 2: ";std::cin>>cliente2.nombre;
    std::cout<<"Direccion Cliente 2: ";std::cin>>cliente2.direccion;

    std::cout<<"\nNombre Cliente 1: "<<cliente1.nombre<<"\n";
    std::cout<<"Direccion Cliente 1: "<<cliente1.direccion<<"\n";

    std::cout<<"Nombre Cliente 2: "<<cliente2.nombre<<"\n";
    std::cout<<"Direccion Cliente 2: "<<cliente2.direccion<<"\n\n";
    system("pause");
    return 0;

}
