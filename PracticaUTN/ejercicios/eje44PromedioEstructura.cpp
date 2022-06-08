/*
Declarar la estructura materias con nombre de la materia y calificación.
Inicializar el nombre de cada materia.
Pedir que se ingresen las calificaciones de las materias.
Obtener el promedio.
Mostrar un mensaje en caso de que el alumno tenga 1,2,3,4,5,6,7,8,9,10 o más.
Mostrar un mensaje en caso de que el alumno este aprobado o no.
si tiene menos de 6 esta desaprobado.
6 o mas es aprobado
*/

#include <iostream>
struct materias
{
    char nombre[50];
    float calificacion;
}materia[6]={{"Matematicas",0}, {"Literatura",0}, {"Fisica",0}, {"Quimica",0}, {"Geografia",0}, {"Naturales",0} };

int main(){
    float suma=0, promedio;

    std::cout<<"Ingresar calificaciones de las siguientes materias:\n";
    for (int i = 0; i < (sizeof(materia)/sizeof(*materia)); i++)
    {
        std::cout<<materia[i].nombre<<": ";
        std::cin>>materia[i].calificacion;
    }
    for (int i = 0; i < (sizeof(materia)/sizeof(*materia)); i++)
    {
        suma+=materia[i].calificacion;
    }
    promedio=suma/(sizeof(materia)/sizeof(*materia));
    std::cout<<"El promedio es: "<<promedio<<"\n";
    if(promedio >= 6 && promedio<= 10){
        std::cout<<"Aprobado\n";
    }
    else{
        std::cout<<"Desaprobado\n";
    };

    system("pause");
    return 0;

}