/*
Pedirle al usuario que ingrese las filas y las columnas de su matriz
Hacer un ciclo anidado con las filas y columnas para que el usuario
ingrese los datos de su matriz
Mostrar la matriz
*/
#include <iostream>
int main(){
    int x,y,matriz [100][100];
    std::cout<<"Ingresar cantidad de filas de la Matriz: ";std::cin>>x;
    std::cout<<"Ingresar cantidad de columnas de la Matriz: ";std::cin>>y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout<<"Ingresar valor de la posicion: "<<i<<", "<<j<<" de la Matriz: ";
            std::cin>>matriz[i][j];
        }
        
        
    }std::cout<<"\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y ; j++)
        {
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
    system ("pause");
    return 0;
}