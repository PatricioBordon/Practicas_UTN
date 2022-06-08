/*UTNFRGP
Ejercicio:Hacer un programa para que el usuario ingrese dos números y luego el programa
muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
Autor: PEB
Fecha:
*/

#include <iostream>
using namespace std;
int main(){
    int n1,n2, contador;
    cout<<"Ingresar dos numeros: \n";
    cin>>n1>>n2;
    cout<<endl;
    if(n1>n2){
        contador=n2+1;
        while(contador<n1){
        cout<<contador<<endl;
        contador++;
        }
    }
    else{
        contador=n1+1;
        while(contador<n2){
        cout<<contador<<endl;
        contador++;
        }
    }
    system("pause");
    return 0;
}

