/// Ejercicio: TP5EJ10
/// Fecha: 13-05-22
/*  Enunciado: 10) Una empresa a�rea registr� los vuelos durante el mes pasado. Los registros est�n
agrupados por n�mero de avi�n. El lote finaliza con un registro con c�digo de avi�n igual a
cero. Cada registro contiene:
- N�mero de avi�n (1 a 50)
- D�a del vuelo (1 a 31)
- Cantidad de asientos vendidos
- Cantidad de asientos no vendidos
- Minutos de puntualidad (> 0 si lleg� atrasado, 0 si lleg� en hora, < 0 si se adelant�)
Se pide determinar e informar:
a) El n�mero de avi�n que tuvo menor porcentaje de asientos ocupados respecto al total de
asientos a ocupar, considerando todos los vuelos que haya efectuado en el mes.
b) El n�mero de avi�n que sum� mayor cantidad de minutos de atraso.
c) Informar el d�a y n�mero de avi�n que haya tenido la mayor cantidad individual de
minutos de atraso.
*/


#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"spanish");
    int nroAvion,nroAntAvion=0,diaVuelo,cantVendidos,cantNoVendidos,totVendidos=0,totNoVendidos=0,asientosTotales=0,porcVendidos,menorOcupacion=0,menorOcupacionAvion;
    int minPuntualidad,totMinPuntualidad,maxMinPuntualidad=0,maxAvionPuntualidad,maxDiaMinPuntualidad=0,maxAvionDiaPuntualidad,maxDiaPuntualidad;
    cout<<"Ingrese el registro de vuelos. (nro de avion 0 par finalizar)"<<endl;
    cout<<"N�mero de avi�n: ";
    cin>>nroAvion;
    while(nroAvion<0 || nroAvion>50){
        cout<<"Ingrese un n�mero de avi�n v�lido."<<endl;
        cin>>nroAvion;
    }
    while(nroAvion!=0){
        nroAntAvion=nroAvion;
        totNoVendidos=totVendidos=0;
        totMinPuntualidad=0;
        while(nroAntAvion==nroAvion){
            cout<<"Ingrese d�a del vuelo: ";
            cin>>diaVuelo;
            while(diaVuelo<1 || diaVuelo>31){
                cout<<"Ingrese un d�a v�lido."<<endl;
                cin>>diaVuelo;
            }
            cout<<"Ingrese cantidad de asientos vendidos: ";
            cin>>cantVendidos;
            cout<<"Ingrese cantidad de asientos NO vendidos: ";
            cin>>cantNoVendidos;
            cout<<"Ingrese minutos de puntualidad del vuelo (> 0 si lleg� atrasado, 0 si lleg� en hora, < 0 si se adelant�): ";
            cin>>minPuntualidad;
            totNoVendidos+=cantNoVendidos;
            totVendidos+=cantVendidos;
            totMinPuntualidad+=minPuntualidad;
            if(maxDiaMinPuntualidad==0){
                maxDiaMinPuntualidad=minPuntualidad;
                maxDiaPuntualidad=diaVuelo;
                maxAvionDiaPuntualidad=nroAntAvion;
            }

            cout<<"N�mero de avi�n: ";
            cin>>nroAvion;
            while(nroAvion<0 || nroAvion>50){
                cout<<"Ingrese un n�mero de avi�n v�lido."<<endl;
                cin>>nroAvion;
            }
        }
        asientosTotales=totNoVendidos+totVendidos;
        porcVendidos=totVendidos*100/asientosTotales;
        if(menorOcupacion==0){
            menorOcupacion=porcVendidos;
            menorOcupacionAvion=nroAntAvion;
        }
        else if(menorOcupacion>porcVendidos){
            menorOcupacion=porcVendidos;
            menorOcupacionAvion=nroAntAvion;
        }
        if(maxMinPuntualidad==0){
            maxMinPuntualidad=totMinPuntualidad;
            maxAvionPuntualidad=nroAntAvion;
        }
        else if(totMinPuntualidad>maxMinPuntualidad){
            maxMinPuntualidad=totMinPuntualidad;
            maxAvionPuntualidad=nroAntAvion;
        }
    }
    cout<<"El avi�n "<<menorOcupacionAvion<<" fue el avi�n con menor porcentaje de ocupaci�n de asientos en el mes."<<endl;
    cout<<"El avi�n "<<maxAvionPuntualidad<<" fue el que sum� m�s minutos de atraso en el mes."<<endl;
    cout<<"El avi�n "<<maxAvionDiaPuntualidad<<", en el d�a "<<maxDiaPuntualidad<<", fue el que m�s minutos de impuntualidad tuvo en un mismo d�a."<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
