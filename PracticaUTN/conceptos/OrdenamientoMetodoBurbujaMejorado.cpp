/*
Si la lista de números ya está ordenada ya no hay necesidad 
de seguir ordenando y hay que terminar el ciclo.
Si ingreso los numeros ordenados, ejecuta 20 ciclos, eso no es eficiente
Ahora si ingreso los numeros ordenados, ejecuta solo 4 ciclos
*/
#include <iostream>
int main(){
    int numeros[5], aux, ciclos=0;
    bool ordenado=false;
    std::cout<<"Ingresar 5 numeros: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<i+1<<".- ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5 && ordenado==false; i++)
    {
        ordenado=true;
        for (int j = 0; j < 4; j++)
        {
            if(numeros[j]>numeros[j+1]){
                ordenado=false;
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
            ciclos++;
        }
    }
    if(ciclos==4){

        std::cout<<"Los numeros ya estaban ordenados de forma ascendente\n";
        std::cout<<"Numeros ordenados de forma descendente en "<<ciclos<<" ciclos: \n";
        for (int i = 4; i >= 0; i--)
        {
            std::cout<<numeros[i]<<"\n";
        }

    }else{
    std::cout<<"Numeros ordenados de forma ascendente en "<<ciclos<<" ciclos: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"Numeros ordenados de forma descendente en "<<ciclos<<" ciclos: \n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }
    }

    system ("pause");
    return 0;
}