/*
Crear la estructura de la dirección.
Crear la estructura del empleados y de clientes.
Anidar la estructura de la dirección en las estructuras de empleados y clientes.
Pedir y mostrar la información de empleados y clientes.
*/

#include <iostream>

struct direccion
{
    char Pais[65];
    char Provincia[65];
    char Ciudad[65];
    char Barrio[65];
    char Calle[65];
};
struct clientes
{
    char nombre[65];
    int tel;
    struct direccion dircliente;
}cliente1, cliente2, cliente3;
struct empleados
{
    char nombre[65];
    char id[5];
    struct direccion dirempleados;
}
empleado1={"Fulano","1234","Argentina", "Buenos Aires", "General Pacheco", "El Zorzal", "calle falsa 123"}, 
empleado2={"Mengano","1542", "Argentina", "Buenos Aires", "General Pacheco", "Ferrini", "Calle 6"}, 
empleado3={"Pedro", "1874", "Argentina", "Buenos Aires", "General Pacheco", "La Paloma", "calle falsa 252"};

int main(){
    std::cout<<"Empleados:\n";

    std::cout<<"Empleado 1: "<<empleado1.nombre<<"\nID ["<<empleado1.id<<"]";
    std::cout<<"\nPais: " <<empleado1.dirempleados.Pais;
    std::cout<<"\nProvincia: "<<empleado1.dirempleados.Provincia;    
    std::cout<<"\nCiudad: "<<empleado1.dirempleados.Ciudad;
    std::cout<<"\nBarrio: "<<empleado1.dirempleados.Barrio;
    std::cout<<"\nCalle: "<<empleado1.dirempleados.Calle<<"\n\n";
   
    std::cout<<"Empleado 2: "<<empleado2.nombre<<"\nID ["<<empleado2.id<<"]";
    std::cout<<"\nPais: " <<empleado2.dirempleados.Pais;
    std::cout<<"\nProvincia: "<<empleado2.dirempleados.Provincia;    
    std::cout<<"\nCiudad: "<<empleado2.dirempleados.Ciudad;
    std::cout<<"\nBarrio: "<<empleado2.dirempleados.Barrio;
    std::cout<<"\nCalle: "<<empleado2.dirempleados.Calle<<"\n\n";
  
    
    std::cout<<"Empleado 3: "<<empleado3.nombre<<"\nID ["<<empleado3.id<<"]";
    std::cout<<"\nPais: " <<empleado3.dirempleados.Pais;
    std::cout<<"\nProvincia: "<<empleado3.dirempleados.Provincia;    
    std::cout<<"\nCiudad: "<<empleado3.dirempleados.Ciudad;
    std::cout<<"\nBarrio: "<<empleado3.dirempleados.Barrio;
    std::cout<<"\nCalle: "<<empleado3.dirempleados.Calle<<"\n\n";
    
    std::cout<<"Clientes:\n";

    std::cout<<"Ingresar nombre de cliente 1: ";std::cin>>cliente1.nombre;std::cout<<"\n";
    std::cout<<"Ingresar telefono de cliente 1: ";std::cin>>cliente1.tel;std::cout<<"\n";
    std::cout<<"Ingresar direccion de cliente 1:\n";
    std::cout<<"Pais: ";std::cin>>cliente1.dircliente.Pais;
    std::cout<<"Provincia: ";std::cin>>cliente1.dircliente.Provincia;
    std::cout<<"Ciudad: ";std::cin>>cliente1.dircliente.Ciudad;
    std::cout<<"Barrio: ";std::cin>>cliente1.dircliente.Barrio;
    std::cout<<"Calle: ";std::cin>>cliente1.dircliente.Calle;
   
    std::cout<<"Ingresar nombre de cliente 2: ";std::cin>>cliente2.nombre;std::cout<<"\n";
    std::cout<<"Ingresar telefono de cliente 2: ";std::cin>>cliente2.tel;std::cout<<"\n";
    std::cout<<"Ingresar direccion de cliente 2:\n";
    std::cout<<"Pais: ";std::cin>>cliente2.dircliente.Pais;
    std::cout<<"Provincia: ";std::cin>>cliente2.dircliente.Provincia;
    std::cout<<"Ciudad: ";std::cin>>cliente2.dircliente.Ciudad;
    std::cout<<"Barrio: ";std::cin>>cliente2.dircliente.Barrio;
    std::cout<<"Calle:";std::cin>>cliente2.dircliente.Calle;
  
    std::cout<<"Ingresar nombre de cliente 3: ";std::cin>>cliente3.nombre;std::cout<<"\n";
    std::cout<<"Ingresar telefono de cliente 3: ";std::cin>>cliente3.tel;std::cout<<"\n";
    std::cout<<"Ingresar direccion de cliente 3:\n";
    std::cout<<"Pais: ";std::cin>>cliente3.dircliente.Pais;
    std::cout<<"Provincia: ";std::cin>>cliente3.dircliente.Provincia;
    std::cout<<"Ciudad: ";std::cin>>cliente3.dircliente.Ciudad;
    std::cout<<"Barrio: ";std::cin>>cliente3.dircliente.Barrio;
    std::cout<<"Calle: ";std::cin>>cliente3.dircliente.Calle;

    std::cout<<"\nClientes [DATOS]:\n\n";
    std::cout<<"Cliente 1: Nombre: "<<cliente1.nombre;
    std::cout<<"\nTelefono: "<<cliente1.tel;
    std::cout<<"Direccion:\n";
    std::cout<<"\nPais: "<<cliente1.dircliente.Pais;
    std::cout<<"\nProvincia: "<<cliente1.dircliente.Provincia;
    std::cout<<"\nCiudad: "<<cliente1.dircliente.Ciudad;
    std::cout<<"\nBarrio: "<<cliente1.dircliente.Barrio;
    std::cout<<"\nCalle: "<<cliente1.dircliente.Calle<<"\n\n";
    
    std::cout<<"Cliente 2: Nombre: "<<cliente2.nombre;
    std::cout<<"\nTelefono: "<<cliente2.tel;
    std::cout<<"Direccion:\n";
    std::cout<<"\nPais: "<<cliente2.dircliente.Pais;
    std::cout<<"\nProvincia: "<<cliente2.dircliente.Provincia;
    std::cout<<"\nCiudad: "<<cliente2.dircliente.Ciudad;
    std::cout<<"\nBarrio: "<<cliente2.dircliente.Barrio;
    std::cout<<"\nCalle: "<<cliente2.dircliente.Calle<<"\n\n";
    
    std::cout<<"Cliente 3: Nombre: "<<cliente3.nombre;
    std::cout<<"\nTelefono: "<<cliente3.tel;
    std::cout<<"Direccion:\n";
    std::cout<<"\nPais: "<<cliente3.dircliente.Pais;
    std::cout<<"\nProvincia: "<<cliente3.dircliente.Provincia;
    std::cout<<"\nCiudad: "<<cliente3.dircliente.Ciudad;
    std::cout<<"\nBarrio: "<<cliente3.dircliente.Barrio;
    std::cout<<"\nCalle: "<<cliente3.dircliente.Calle<<"\n\n";
    system("pause");
    return 0;
}
