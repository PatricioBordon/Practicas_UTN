/*
Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, luego otra funcion que
multiplique estos dos números y despliegue el resultado.
Cuando dice que despliegue el resultado quiere decir que las funciones secundarios no tendran retorno
*/
#include <iostream>
using namespace std;

void pedirDatos ();
void mult (float x, float y);
float n1, n2;

int main(){
    pedirDatos ();
    mult (n1, n2);
    system ("pause");
    return 0;
}

void pedirDatos (){
    cout<<"Ingresar dos numeros a multiplicar: ";
    cin>>n1>>n2;
}

void mult(float x, float y){
    float resultado;
    resultado= x*y;
    cout<<"Resultado= "<<resultado<<"\n";
}