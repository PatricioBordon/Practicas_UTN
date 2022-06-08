/// Ejercicio: TP5EJ10
/// Fecha: 13-05-22
/*  Enunciado: 10) Una empresa aérea registró los vuelos durante el mes pasado. Los registros están
agrupados por número de avión. El lote finaliza con un registro con código de avión igual a
cero. Cada registro contiene:
- Número de avión (1 a 50)
- Día del vuelo (1 a 31)
- Cantidad de asientos vendidos
- Cantidad de asientos no vendidos
- Minutos de puntualidad (> 0 si llegó atrasado, 0 si llegó en hora, < 0 si se adelantó)
Se pide determinar e informar:
a) El número de avión que tuvo menor porcentaje de asientos ocupados respecto al total de
asientos a ocupar, considerando todos los vuelos que haya efectuado en el mes.
b) El número de avión que sumó mayor cantidad de minutos de atraso.
c) Informar el día y número de avión que haya tenido la mayor cantidad individual de
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
    cout<<"Número de avión: ";
    cin>>nroAvion;
    while(nroAvion<0 || nroAvion>50){
        cout<<"Ingrese un número de avión válido."<<endl;
        cin>>nroAvion;
    }
    while(nroAvion!=0){
        nroAntAvion=nroAvion;
        totNoVendidos=totVendidos=0;
        totMinPuntualidad=0;
        while(nroAntAvion==nroAvion){
            cout<<"Ingrese día del vuelo: ";
            cin>>diaVuelo;
            while(diaVuelo<1 || diaVuelo>31){
                cout<<"Ingrese un día válido."<<endl;
                cin>>diaVuelo;
            }
            cout<<"Ingrese cantidad de asientos vendidos: ";
            cin>>cantVendidos;
            cout<<"Ingrese cantidad de asientos NO vendidos: ";
            cin>>cantNoVendidos;
            cout<<"Ingrese minutos de puntualidad del vuelo (> 0 si llegó atrasado, 0 si llegó en hora, < 0 si se adelantó): ";
            cin>>minPuntualidad;
            totNoVendidos+=cantNoVendidos;
            totVendidos+=cantVendidos;
            totMinPuntualidad+=minPuntualidad;
            if(maxDiaMinPuntualidad==0){
                maxDiaMinPuntualidad=minPuntualidad;
                maxDiaPuntualidad=diaVuelo;
                maxAvionDiaPuntualidad=nroAntAvion;
            }

            cout<<"Número de avión: ";
            cin>>nroAvion;
            while(nroAvion<0 || nroAvion>50){
                cout<<"Ingrese un número de avión válido."<<endl;
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
    cout<<"El avión "<<menorOcupacionAvion<<" fue el avión con menor porcentaje de ocupación de asientos en el mes."<<endl;
    cout<<"El avión "<<maxAvionPuntualidad<<" fue el que sumó más minutos de atraso en el mes."<<endl;
    cout<<"El avión "<<maxAvionDiaPuntualidad<<", en el día "<<maxDiaPuntualidad<<", fue el que más minutos de impuntualidad tuvo en un mismo día."<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
