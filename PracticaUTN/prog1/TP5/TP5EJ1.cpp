/// Ejercicio: TP5EJ1
/// Fecha: 14-05-22
/*  Enunciado: 1) Hacer un programa para ingresar una lista de 10 números y luego informar cuantos de
los números ingresados son primos
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
    int nro,contPrimo,contDiv,cantPrimos=0;
    const int totNros=10;
    cout<<"Ingrese "<<totNros<<" números."<<endl;
    for(int i=1;i<=totNros;i++){
        contDiv=0;
        cin>>nro;
             if(nro<0){
                contPrimo=nro*-1;
            }
            else{
                contPrimo=nro;
            }
            for(int j=1;j<=contPrimo;j++){
                if(contPrimo%j==0){
                    contDiv++;
                }
                if(contDiv==3){
                    break;
                }
            }
            if(contDiv==2){
                cantPrimos++;
            }
    }
    if(cantPrimos==1){
        cout<<"Se ingresó "<<cantPrimos<<" número primo.";
    }
    else{
        cout<< "Se ingresaron "<<cantPrimos<<" números primos.";
    }
	cout<<endl;
	system("pause");
	return 0;
}
