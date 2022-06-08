/// Ejercicio: TP5EJ3
/// Fecha: 13-05-22
/*  Enunciado: 3) Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) El número de grupo con mayor porcentaje de números impares positivos respecto al total
de números que forman el grupo.
b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un
grupo no hubiera números primos informarlo con un cartel aclaratorio.
c) Informar cuantos grupos están formados por todos números ordenados de mayor a
menor.
*/

#include <iostream>
#include <locale.h>
using namespace std;


int main(){
	setlocale(LC_ALL,"spanish");
    const int grupos=10;
    int n,nAnt,cantGrupo,cantGruposOrdenados=0,ultPrimo,posPrimo,contPrim,contDivisores,cantImpPos=0,porcImpPos,maxPorc=0,grupoMaxPorc;
    bool ordenados=true;
    for(int i=1;i<=grupos;i++){
        cout<<"Ingrese los números del grupo "<<i<<": "<<endl;
        cin>>n;
        cantGrupo=cantImpPos=ultPrimo=posPrimo=contPrim=nAnt=0;
        ordenados=true;
        while(n!=0){
            cantGrupo++;
            if(n%2!=0 && n>0){
                cantImpPos++;
            }
            if(n<0){
                contPrim=n*-1;
            }
            else{
                contPrim=n;
            }
            contDivisores=0;
            for(int j=1;j<=contPrim;j++){
                if(contPrim%j==0){
                    contDivisores++;
                }
                if(contDivisores==3){
                    break;
                }
            }
            if(contDivisores==2){
                ultPrimo=n;
                posPrimo=cantGrupo;
            }
            if(nAnt!=0){
                if(nAnt<n){
                    ordenados=false;
                }
            }
            nAnt=n;
            cin>>n;
        }
        if(ordenados==true){
            cantGruposOrdenados++;
        }
        if(ultPrimo==0){
            cout<<"No se ingresaron números primos en el grupo "<<i<<"."<<endl;
        }
        else{
            cout<<"El último número primo ingresado en el grupo "<<i<<" es el número "<<ultPrimo<<", en la posición "<<posPrimo<<"."<<endl;
        }
        porcImpPos=cantImpPos*100/cantGrupo;
        if(porcImpPos>maxPorc){
            maxPorc=porcImpPos;
            grupoMaxPorc=i;
        }
    }
    cout<<"El grupo con el mayor porcentaje de números impares positivos ingresados es el grupo "<<grupoMaxPorc<<"."<<endl;
    if(cantGruposOrdenados==1){
        cout<<"Hay "<<cantGruposOrdenados<<" grupo ordenado de mayor a menor."<<endl;
    }
    else{
        cout<<"Hay "<<cantGruposOrdenados<<" grupos ordenados de mayor a menor."<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
