#include <iostream>
int main(){
    char letra;
    volver:
    std::cout<<"Ingresar Letra Vocal\n";std::cin>>letra;
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout<<"Presionaste una vocal\n";
        break;
    default:
        std::cout<<"No presionaste una vocal\n";
        goto volver;
        break;
    }
    system ("pause");
    return 0;
}