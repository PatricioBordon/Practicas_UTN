/*
- Crear 2 templates para almacenar 2 variables diferentes.
- Crear una función que reciba 2 variables de tipo template.
- Si ambas variables son de tipo char mostrar las variables concatenadas.
- Si son de tipo numérico sumarlos.
¿QUÉ APRENDEREMOS?
- Declarar dos templates.
- Obtener el tipo de dato.
*/
#include <iostream>
#include <string.h>
#include <typeinfo>

template <class Tipo1, class Tipo2>
void recibir (Tipo1 dato1, Tipo2 dato2);

int main(){
    int n1= 4;
    int n2= 8;
    char c1= 'h';
    char c2='c';
    recibir (n1, n2);
    system("pause");
    return 0;
    
}
template <class Tipo1, class Tipo2>
void recibir (Tipo1 dato1, Tipo2 dato2)
{


    if ( std::string(typeid(dato1).name())=="c" && std::string(typeid(dato2).name())=="c")
    {
        std::cout<<"Concatenado: "<<dato1<<dato2<<"\n";
    }
    if ( std::string(typeid(dato1).name())=="i" && std::string(typeid(dato2).name())=="i")
    {
        std::cout<<"Sumado: "<<dato1+dato2<<"\n";
    }
    
    
}