#include <iostream>
int main(){
    char sexo[10];
    int edad;
    float estatura;

    std::cout<<"Ingresar los siguientes datos";
    std::cout<<"\nSexo: "; std::cin>>sexo;
    std::cout<<"\nEdad: "; std::cin>>edad;
    std::cout<<"\nEstatura: "; std::cin>>estatura;
    
    std::cout<<"Verifica que los siguientes datos sean los correctos\n\n";
    std::cout<<"Sexo: "<<sexo<<"\n";
    std::cout<<"Edad: "<<edad<<"\n";
    std::cout<<"Estatura: "<<estatura<<"\n";

system("pause");
return 0;
}
