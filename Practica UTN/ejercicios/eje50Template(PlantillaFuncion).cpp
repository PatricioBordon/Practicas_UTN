/*
Mostrar el valor absoluto de un numero
(Como no me especifico el tipo de numero, debo hacer un template)
El template engloba a los tipos de datos en un solo tipo de dato generico, evitando que escriba mas funciones
*/

#include <iostream>
using namespace std;

template <class TipoG>
void NumAbs (TipoG num);//en vez de hacer una funcion para cada tipo de dato, hago una sola con un dato generico

int main(){
    int num;
    float num1;
    double num2;
    cout<<"Ingresar Numero entero: "; cin>>num;
    cout<<"Ingresar Numero flotante: "; cin>>num1;
    cout<<"Ingresar Numero entero: "; cin>>num2;
    
    NumAbs (num);
    NumAbs (num1);
    NumAbs (num2);

    system ("pause");
    return 0;
}

template <class TipoG>
void NumAbs (TipoG num){
    if (num<0){
        num*=-1;
    }
    cout<<"Valor Absoluto: "<<num<<"\n";
    
}