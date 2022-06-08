/// Ejercicio: TP5EJ4
/// Fecha: 13-05-22
/*  Enunciado: 4) Dada una lista de números enteros todos distintos entre sí y que finaliza con un cero,
determinar e informar con un cartel aclaratorio si los números primos que aparezcan en la
misma están ordenados de menor a mayor. Los números positivos primos pueden no ser
consecutivos, pero sí estar ordenados.
Por ejemplo:
4, 5, 7, 12, 13, 0 Se emite un cartel que diga “Ordenados” (5,7 y 13)
2, 10, 3, 5, 11, 7, 14, 0 Se emite un cartel que diga “Desordenados” (2, 3, 5, 11 y 7)

*/

///RESUELTO DEFINIENDO UNA FUNCIÓN PARA CHEQUEAR LOS NROS PRIMOS.

#include <iostream>
#include <locale.h>
using namespace std;
int n;
bool esPrimo=false;
int primoChecker(){
    int contPrimo, contDivisores=0;
    esPrimo=false;
    if(n<0){
        contPrimo=n*-1;
    }
    else{
        contPrimo=n;
    }
    for(int i=1;i<=contPrimo;i++){
        if(n%i==0){
            contDivisores++;
        }
        if(contDivisores==3){
            break;
        }
    }
    if(contDivisores==2){
        esPrimo=true;
    }
}
int main(){
	setlocale(LC_ALL,"spanish");
    int nPrimoAnt=0;
    bool ordenados=true;
    cout<<"Ingrese los números a chequear."<<endl;
    cin>>n;
    while(n!=0){
        primoChecker();
        if(esPrimo==true){
            if(nPrimoAnt!=0){
                if(nPrimoAnt>n){
                    ordenados=false;
                }
            }
            nPrimoAnt=n;
        }
        cin>>n;
    }
    if(nPrimoAnt==0){
        cout<<"No se ingresaron números primos.";
    }
    else{
        if(ordenados==true){
            cout<<"Los números primos ingresados están ordenados de menor a mayor.";
        }
        else{
            cout<<"Los números primos ingresados no están ordenados de menor a mayor.";
        }
    }
	cout<<endl;
	system("pause");
	return 0;
}
