/*
Pedirle al humano que ingrese las filas y las columnas de la matriz a.
Hacer un ciclo anidado con las filas y columnas para que el humano ingrese los datos de la matriz a.
Copiar el contenido de la matriz a a la matriz b.
Mostrar el contenido de la matriz b
*/
#include <iostream>
int main(){
    int matriza [100][100], matrizb [100][100], x, y;

    std::cout<<"Ingresar cantidad de filas de MATRIZ 'A': ";std::cin>>x;
    std::cout<<"Ingresar cantidad de columnas de MATRIZ 'A': ";std::cin>>y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout<<"Ingresar valor de Fila "<<i<<", columna "<<j<<" de la matriz 'A': ";
            std::cin>>matriza[i][j];
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrizb[i][j]=matriza[i][j];
        }
        
    }
    std::cout<<"\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout<<matrizb[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
    system("pause");
    return 0;
}