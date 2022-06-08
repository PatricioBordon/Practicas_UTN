/// Ejercicio: TP5EJ8
/// Fecha: 14-05-22
/*  Enunciado: 8) Dada una lista de n�meros compuesta por grupos donde cada grupo est� separado del
siguiente por un cero, y la lista de n�meros finaliza cuando se ingresan dos ceros
consecutivos, se pide determinar e informar:
a) La cantidad de grupos en los que se detecten un total de 4 o m�s n�meros primos
consecutivos. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado n�meros negativos, el mayor y
el segundo mayor de los mismos y en que posici�n estaban dentro del subgrupo. En los
grupos sin negativos, informar �Grupo sin negativos�. Se informan 4 resultados por cada
grupo.
c) El mayor n�mero primo de todos los grupos, informando adem�s en que grupo y en qu�
posici�n del mismo fue detectado. Se informan 3 resultados al final.

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
    int n=1,nAnt=1,contPrimo,contDiv,grupos4PrimosCons=0,contPrimosGrupo,maxNeg,maxNeg2,posMaxNeg,posMaxNeg2,contador,contadorGrupo=0,maxPrimo=0,posMaxPrimo,grupoMaxPrimo;
    bool flagg4pc;
    cout<<"Ingrese los n�meros de cada grupo. (Los grupos deben ir separados por '0')."<<endl;
    while(n!=0 || nAnt!=0){
        nAnt=n;
        cin>>n;
        contPrimosGrupo=0;
        flagg4pc=false;
        maxNeg=maxNeg2=contador=0;
        contadorGrupo++;
        while(n!=0){
            nAnt=n;
/// COMIENZO NRO PRIMO
            if(n<0){
                contPrimo=n*-1;
            }
            else{
                contPrimo=n;
            }
            contDiv=0;
            for(int i=1;i<=contPrimo;i++){
                if(contPrimo%i==0){
                    contDiv++;
                }
                if(contDiv==3){
                    break;
                }
            }
            if(contDiv==2){
                contPrimosGrupo++;
                if(maxPrimo==0){
                    maxPrimo=n;
                    posMaxPrimo=contador;
                    grupoMaxPrimo=contadorGrupo;
                }
                else if(n>maxPrimo){
                    maxPrimo=n;
                    posMaxPrimo=contador;
                    grupoMaxPrimo=contadorGrupo;
                }
            }
            else{
                contPrimosGrupo=0;
            }
            if(contPrimosGrupo==4 && flagg4pc==false){
                grupos4PrimosCons++;
                flagg4pc=true;
            }
/// FIN NRO PRIMO
/// COMIENZO PUNTO B
            contador++;
            if(n<0){
                if(maxNeg==0){
                    maxNeg=n;
                    posMaxNeg=contador;
                }
                else if(maxNeg2==0){
                    if(maxNeg>n){
                        maxNeg2=n;
                        posMaxNeg2=contador;
                    }
                    else{
                        maxNeg2=maxNeg;
                        posMaxNeg2=posMaxNeg;
                        maxNeg=n;
                        posMaxNeg=contador++;
                    }
                }
                else if(n>maxNeg){
                    maxNeg2=maxNeg;
                    posMaxNeg2=posMaxNeg;
                    maxNeg=n;
                    posMaxNeg=contador++;
                }
                else if(n<maxNeg2){
                    maxNeg2=n;
                    posMaxNeg2=contador;
                }
            }
/// FIN PUNTO B
            cin>>n;
        }
        if(maxNeg==0){
            cout<<"No se ingresaron n�meros negativos."<<endl;
        }
        else{
            cout<<"El m�ximo n�mero negativo ingresado es "<<maxNeg<<" en la posici�n "<<posMaxNeg<<"."<<endl;
            cout<<"El segundo m�ximo n�mero negativo ingresado es "<<maxNeg2<<" en la posici�n "<<posMaxNeg2<<"."<<endl;
        }
    }
    cout<<"Se detectaron "<<grupos4PrimosCons<<" grupos con 4 o m�s n�meros primos consecutivos."<<endl;
    cout<<"El m�ximo n�mero primo ingresado es el "<<maxPrimo<<", ingresado en el grupo "<<grupoMaxPrimo<<" en la posici�n "<<posMaxPrimo<<"."<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
