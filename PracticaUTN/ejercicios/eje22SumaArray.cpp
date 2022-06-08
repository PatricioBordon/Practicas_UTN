/*
Suma de arrglos de un numero
Definir los elementos de un arrglo
Sume cada elemento del arreglo
Mostrar la suma
*/
#include <iostream>
int main(){
    int numeros[]={1,2,3,4,5},suma=0;
    for (int i = 0; i < 5; i++)//se hace asi por que el indice empieza en 0
    {
        suma+=numeros[i];
        std::cout<<numeros[i]<<" + ";
    }
    std::cout<<"\nResultado: "<<suma<<"\n";


    system("pause");
    return 0;
}