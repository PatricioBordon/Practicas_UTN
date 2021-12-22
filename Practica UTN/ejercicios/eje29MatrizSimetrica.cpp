/*
Una matriz es simetrica si es una matriz cuadrada, la cual tiene 
la caracteristica de ser igual a su transpuesta
Pedir al humano que ingrese el tamaño de la matrizA y la matrizB.
Comprobar si la matrizA es simétrica con la matrizB.
Pedir al humano que ingrese los datos de la matrizA y la matrizB.
Mostrar si las matrices son simétricas a no.
*/
#include <iostream>
int main(){
    int x, y, xb, yb, matriza[100][100], matrizb[100][100];
    volver:
    std::cout<<"Ingresar dimension de matriz 'A' (Filas): ";std::cin>>x;
    std::cout<<"Ingresar dimension de matriz 'A' (Columnas): ";std::cin>>y;
    std::cout<<"\n";

    std::cout<<"Ingresar dimension de matriz 'B' (Filas): ";std::cin>>xb;
    std::cout<<"Ingresar dimension de matriz 'B' (Columnas): ";std::cin>>yb;
    std::cout<<"\n";
    
    if(x==y && xb==yb&&x==yb){
        int matriza[x][y], matrizb[xb][yb];
        regreso:
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                std::cout<<"Ingresar los datos de la matriz A en la posicion ("<<i+1<<"),("<<j+1<<")";
                std::cin>>matriza[i][j];
            }
            
        }
        for (int i = 0; i < xb; i++)
        {
            for (int j = 0; j < yb; j++)
            {
                std::cout<<"Ingresar los datos de la matriz B en la posicion ("<<i+1<<"),("<<j+1<<")";
                std::cin>>matrizb[i][j];
            }
            
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if(matriza[i][j]!=matrizb[j][i]){
                    std::cout<<"La matriz A y la matriz B no son simetricas, intenta otra vez\n";
                    goto regreso;
                }
            }
            
        }
        
        
    }
    else{
        std::cout<<"La matriz A y B no son cuadradas, intenta otra vez\n";
        goto volver;
    }
    std::cout<<"La matriz A y la matriz B son simetricas\n";
    system("pause");
    return 0;
}