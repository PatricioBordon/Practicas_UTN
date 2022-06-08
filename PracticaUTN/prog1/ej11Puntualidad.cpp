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
	float menor;
	float navion;
	int numer;
	float numeri;
	float porcentaje;
	float puntu;
	float puntual;
	float puntualidad;
	float totalasinovend;
	float totalasivend;
	// 11) Una empresa aérea registró los vuelos durante el mes pasado. Los registros están
	// agrupados por número de avión. Cada registro contiene:
	// - Número de avión (1 a 50)
	// - Día del vuelo (1 a 31)
	// - Cantidad de asientos vendidos
	// - Cantidad de asientos no vendidos
	// - Minutos de puntualidad (> 0 si llegó atrasado, 0 si llegó en hora, < 0 si se adelantó)
	// 5
	// El lote finaliza con un registro con número de avión igual a cero.
	// Los registros están agrupados, no ordenados, por número de avión. En el lote anterior no
	// aparecen registros de los aviones que por alguna razón no hayan salido algún o
	// ningún día del mes.
	// Se pide determinar e informar:
	// a) El número de avión que tuvo menor porcentaje de asientos ocupados respecto al total de
	// asientos a ocupar, considerando todos los vuelos que haya efectuado en el mes.
	// b) El número de avión que sumó mayor cantidad de minutos de atraso.
	// c) Informar el día y número de avión que haya tenido la mayor cantidad individual de
	// minutos de atraso
	cout << "Numero de avion" << endl;
	cin >> navion;
	menor = 0;
	aux = 0;
	ma = 0;
	while ((navion!=0)) {
		puntual = 0;
		adelantado = 0;
		porcentaje = 0;
		atrasado = 0;
		anterior = navion;
		capacidad = 0;
		eld = 0;
		numeri = 0;
		while (navion==anterior) {
			cout << "Dia" << endl;
			cin >> dia;
			cout << "Asientos vendidos" << endl;
			cin >> asivend;
			cout << "Asientos sin vender" << endl;
			cin >> asinovend;
			totalasivend = totalasivend+asivend;
			totalasinovend = totalasinovend+asinovend;
			cout << "Puntualidad" << endl;
			cin >> puntualidad;
			if (puntualidad>0) {
				adelantado = adelantado+puntualidad;
			} else {
				if (puntualidad<0) {
					puntu = puntualidad*(-1);
					atrasado = atrasado+puntualidad;
					avionatras = navion;
				} else {
					puntual = puntual+puntualidad;
				}
			}
			if (puntu>ma) {
				ma = puntu;
				eld = dia;
				numeri = navion;
			}
			capacidad = totalasivend+totalasinovend;
			cout << "Numero de avion" << endl;
			cin >> navion;
		}
		// se hace el TOTAL de ingresos *100/capacidad
		porcentaje = totalasivend*100/capacidad;
		if (aux==0) {
			menor = porcentaje;
			aux = 1;
			numer = anterior;
		} else {
			if (menor>porcentaje) {
				menor = porcentaje;
				numer = anterior;
			}
		}
	}
	cout << "Avion con menor porcentaje de asientos ocupados: " << numer << endl;
	cout << "Avion con mayor cantidad de minutos atrasados: " << avionatras << endl;
	cout << "Avion con la mayor cantidad individual de minutos de atraso: numero " << numeri << endl;
	cout << "Dia " << eld << endl;
	return 0;
}

