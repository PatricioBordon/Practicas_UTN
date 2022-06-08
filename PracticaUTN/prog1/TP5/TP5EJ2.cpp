/// Ejercicio: TP5EJ2
/// Fecha: 10-05-22
/*  Enunciado: Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
a) Para cada uno de los grupos el máximo de los números pares y el máximo de los
números impares.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
c) Cuantos números positivos había en total entre los 10 grupos.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
	const int grupos=10;
	int n,pos=0,maxPar,maxImpar,qtyGrupo,qtyPar,qtyImpar,porcPar,porcImpar;
	cout<<"Ingrese los números de cada grupo, usando el 0 para separar los grupos."<<endl;
    for(int i=1;i<=grupos;i++){
        maxPar=maxImpar=qtyGrupo=qtyPar=qtyImpar=porcPar=porcImpar=0;
        cout<<"Ingrese los números del grupo "<<i<<":"<<endl;
        cin>>n;
        while(n!=0){
            qtyGrupo++;
            if(n%2==0){
                qtyPar++;
                if(maxPar==0){
                    maxPar=n;
                }
                else{
                    if(n>maxPar){
                        maxPar=n;
                    }
                }
            }
            else{
                qtyImpar++;
                if(maxImpar==0){
                    maxImpar=n;
                }
                else{
                    if(n>maxImpar){
                        maxImpar=n;
                    }
                }
            }
            if(n>0){
                pos++;
            }
            cin>>n;
        }
        if(maxPar!=0){
            cout<<"El máximo de los pares del grupo "<<i<<" es "<<maxPar<<"."<<endl;
        }
        else{
            cout<<"No se ingresaron números pares en el grupo "<<i<<"."<<endl;
        }
        if(maxImpar!=0){
            cout<<"El máximo de los impares del grupo "<<i<<" es "<<maxImpar<<"."<<endl;
        }
        else{
            cout<<"No se ingresaron números impares en el grupo "<<i<<"."<<endl;
        }
        if(qtyGrupo!=0){
            porcPar=qtyPar*100/qtyGrupo;
            porcImpar=qtyImpar*100/qtyGrupo;
        }
        cout<<"El grupo "<<i<<" tiene "<<porcPar<<"% de números pares y "<<porcImpar<<"% de números impares."<<endl;
    }

    cout<<"Se ingresaron en total "<<pos<<" números positivos."<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
