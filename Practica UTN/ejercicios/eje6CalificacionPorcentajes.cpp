#include <iostream>
int main(){
    float practica,participacion,examen,resul;
    std::cout<<"\nIngresar nota de practica: ";std::cin>>practica;
    std::cout<<"\nIngresar nota de participacion: ";std::cin>>participacion;
    std::cout<<"\nIngresar nota de examen: ";std::cin>>examen;
    
    resul=practica*0.4+participacion*0.2+examen*0.4;
    
    std::cout<<"\nCalificacion final: "<<resul<<"\n";
    system("pause");
    return 0;
}