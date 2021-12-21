/*
Una matriz transpuesta es esto:
Las filas de la matriz 'A' van a ser las columnas de3 la matriz 'B'
Declarar la matriz A y la matriz B de 3x3.
Pedir al humano que ingrese los datos de la matriz A.
Llenar la matriz B con los datos transpuestos de la matriz A
Imprimir matriz A y matriz B.
*/
# include <iostream>
int main(){
    int matriza[3][3], matrizb[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"Ingresar datos de la posicion "<<i<<", "<<j<<" de la matriz A: "; std::cin>>matriza[i][j];
        }
        
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++) 
        {
            matrizb[i][j] = matriza[i][j];
        }
        
    }
        std::cout<<"\nMatriz 'A'\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matriza[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\nMatriz 'B'\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<matrizb[j][i]<<" ";
        }
        std::cout<<"\n";
    }    

    
    std::cout<<"\n";
    system("pause");
    return 0;
}