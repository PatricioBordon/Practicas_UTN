/*
¿Qué es una función?
Una función realiza una tarea concreta y puede ser diseñada,
implementada y depurada de manera independiente al resto de código.
Ejemplo de encontrar mayor de dos numeros
*/
#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
int encontrarMax(int x, int y);

//Funcion principal
int main(){
    int num1, num2, resul;
    cout<<"Ingrese dos numeros\n"; 
    cin>>num1>>num2;
    
    resul= encontrarMax(num1, num2);
    cout<<"El mayor es: "<<resul<<"\n";

    system ("pause");
    return 0;
}

//definicion de funcion

int encontrarMax(int x, int y){
    int mayor;
    if (x>y)
    {
        mayor= x;
    }
    else
    {
        mayor=y;
    }
    return mayor;

}
