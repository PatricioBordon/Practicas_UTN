// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;



int main() {
	float adelantado;
	float anterior;
	float asinovend;
	float asivend;
	float atrasado;
	float aux;
	int avionatras;
	float capacidad;
	int dia;
	float eld;
	float ma;
	float mayor;
	float menor;
	float navion;
	int numer;
	float numeri;
	float porcentaje;
	float puntual;
	float puntualidad;
	// 11) Una empresa a?rea registr? los vuelos durante el mes pasado. Los registros est?n
	// agrupados por n?mero de avi?n. Cada registro contiene:
	// - N?mero de avi?n (1 a 50)
	// - D?a del vuelo (1 a 31)
	// - Cantidad de asientos vendidos
	// - Cantidad de asientos no vendidos
	// - Minutos de puntualidad (> 0 si lleg? atrasado, 0 si lleg? en hora, < 0 si se adelant?)
	// 5
	// El lote finaliza con un registro con n?mero de avi?n igual a cero.
	// Los registros est?n agrupados, no ordenados, por n?mero de avi?n. En el lote anterior no
	// aparecen registros de los aviones que por alguna raz?n no hayan salido alg?n o
	// ning?n d?a del mes.
	// Se pide determinar e informar:
	// a) El n?mero de avi?n que tuvo menor porcentaje de asientos ocupados respecto al total de
	// asientos a ocupar, considerando todos los vuelos que haya efectuado en el mes.
	// b) El n?mero de avi?n que sum? mayor cantidad de minutos de atraso.
	// c) Informar el d?a y n?mero de avi?n que haya tenido la mayor cantidad individual de
	// minutos de atraso
	cout << "Numero de avion" << endl;
	cin >> navion;
	menor = 0;
	while ((navion!=0)) {
		puntual = 0;
		adelantado = 0;
		atrasado = 0;
		aux = 0;
		anterior = navion;
		capacidad = 0;
		eld = 0;
		numeri = 0;
		ma = 0;
		while (navion==anterior) {
			cout << "Dia" << endl;
			cin >> dia;
			cout << "Asientos vendidos" << endl;
			cin >> asivend;
			cout << "Asientos sin vender" << endl;
			cin >> asinovend;
			cout << "Puntualidad" << endl;
			cin >> puntualidad;
			if (puntualidad>0) {
				adelantado = adelantado+puntualidad;
			} else {
				if (puntualidad<0) {
					puntualidad = puntualidad*(-1);
					if (puntualidad>ma) {
						ma = atrasado;
						eld = dia;
						numeri = navion;
					}
					atrasado = atrasado+puntualidad;
					avionatras = navion;
				} else {
					puntual = puntual+puntualidad;
				}
			}
			capacidad = capacidad+asivend+asinovend;
			cout << "Numero de avion" << endl;
			cin >> navion;
		}
		porcentaje = asivend*100/capacidad;
		if ((porcentaje>mayor) && (aux==0)) {
			menor = porcentaje;
			aux = 1;
			numer = anterior;
		} else {
			if (porcentaje<menor) {
				menor = porcentaje;
				numer = anterior;
			}
		}
		anterior = navion;
	}
	cout << "Avion con menor porcentaje de asientos ocupados: " << numer << endl;
	cout << "Avion con mayor cantidad de minutos atrasados: " << avionatras << endl;
	cout << "Avion con la mayor cantidad individual de minutos de atraso: numero " << numeri << endl;
	cout << "Dia " << eld << endl;
	return 0;
}

