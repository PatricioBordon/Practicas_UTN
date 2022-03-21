/*UTNFRGP
Ejercicio: Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
Autor: PEB
Fecha: 21/03/2022
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    float A, B, C, porcentajeA, porcentajeB, porcentajeC, total;

    cout<<"Cantidad de alfajores vendidos de A: ";
    cin>>A;
    cout<<"Cantidad de alfajores vendidos de B: ";
    cin>>B;
    cout<<"Cantidad de alfajores vendidos de C: ";
    cin>>C;

    total = A+B+C;
    porcentajeA = A * 100 / total;
    porcentajeB = B * 100 / total;
    porcentajeC = C * 100 / total;

    cout<<"Porcentajes de ventas de A: "<<porcentajeA<<"%\n";
    cout<<"Porcentajes de ventas de B: "<<porcentajeB<<"%\n";
    cout<<"Porcentajes de ventas de C: "<<porcentajeC<<"%\n";
}
