/*Una empresa esta contratando personas entre
18 y 40 años. Hacer un programa que determine 
si la persona es apta dependiendo la edad.*/
#include <iostream>
int main(){
    int edad;
    std::cout<<"Ingresar edad del candidato/a: ";std::cin>>edad;
    if(edad>=18 && edad<=40){
        std::cout<<"Es apto/a para el empleo\n";
    }else{
        std::cout<<"No es apto/a para el empleo\n";
    }
    system("pause");
    return 0;
}