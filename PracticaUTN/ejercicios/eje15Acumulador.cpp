//Hacer la suma de los cuadrados del 1 al 10
#include <iostream>
/*usar la libreria math.h para este ej especifico 
es matar una mosca con un bazooca XD
Solo la use para practicar pero la cancelo por que gasta mas recursos
y en este ej no vale la pena*/
//#include <math.h>
int main(){
    int acumulador=0,cuadrado;
    /*use flotantes por que la funcion pow me genera problemas con enteros
    Como entero me calcula el cuadrado de 10 = 99 
    Como flotante me calcula el cuadrado de 10 = 100*/ 
    for (int i = 1; i <=10; i++)
    {
        cuadrado=i*i;
        acumulador+=cuadrado;
        std::cout<<"el cuadrado de "<<i<<" es igual a: "<<cuadrado<<"\n";
    }
    std::cout<<"La suma de los cuadrados del 1 al 10 es :"<<acumulador<<"\n\n";
    
    system ("pause");
    return 0;
}