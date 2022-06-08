/*UTNFRGP
Ejercicio: Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
Autor: PEB
Fecha:
*/

#include <iostream>
using namespace std;
int main(){
    int N, PrimerImpar, UltimoImpar;
    bool primero=false, ultimo=false;
    cout<<"Ingresar numeros: ";

    while(N!=0){
        cin>>N;
        if (primero==false){

            if(N%2!=0){
                PrimerImpar=N;
                primero=true;
            }
        }
        else{
            if(N%2!=0){
                UltimoImpar=N;
                ultimo=true;
            }
        }
    }
    if(ultimo==true&&primero==true){
        cout<<"Primer impar: "<<PrimerImpar<<endl;
        cout<<"Ultimo impar: "<<UltimoImpar<<endl;
    }
    else{
        if(ultimo==false&&primero==true)
            cout<<"Hay solo un impar: "<<PrimerImpar<<endl;
    }

    system("pause");
    return 0;
}
