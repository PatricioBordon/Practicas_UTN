/*
Motrar el Index de nuetro arreglo
Pedir al usuario que ingrese el valor de cada elemento
Mostrar los elementos con su respectivo indice
*/
#include <iostream>
int main(){
    int numero[100],n;
    do
    {
        std::cout<<"Ingresar cantidad de elementos del arreglo (Mas de 1 y menos de 100):" ;
        std::cin>>n;
    } while ((n<1)||(n>100));
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingresa el valor del elemento"<<(i+1)<<": ";
        std::cin>>numero[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<(i+1)<<"= "<<numero[i]<<"\n";
    }
    
    system("pause");
    return 0;
}