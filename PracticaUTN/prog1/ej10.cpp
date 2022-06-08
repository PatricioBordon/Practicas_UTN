#include<iostream>
using namespace std;

int main() {
	int anterior;
	int cantuni;
	int cont;
	int dia;
	float mayor;
	float mayorq;
	float mventas;
	int nro;
	int nroarticulo;
	int num;
	int numarti;
	bool paso15;
	float quincena, total;
	float recaudaciondia;
	int semana1, semana2, semana3, semana4;
	// 10) Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se
	// tienen los siguientes datos:
	// - Número de artículo (1 a 30)
	// - Día (1 a 31)
	// - Cantidad de unidades vendidas
	// - Recaudación del día
	// Este lote finaliza con un registro con número de artículo igual a cero. En el lote anterior
	// no aparecen registros de los artículos que por alguna razón no se hayan vendido algún
	// o ningún día del mes.
	// Los registros están agrupados por número de artículo.
	// Se pide determinar e informar:
	// a) El número del artículo más vendido en total considerando las ventas de la primera
	// quincena. Se considera primera quincena los días del 1 al 15 inclusive.
	// b) Para cada uno de los artículos informar la recaudación total considerando todas las
	// ventas del mes.
	// c) Informar la semana en la que se vendió mayor cantidad de artículos en total. Se
	// considera:
	// Primera Semana: días 1 al 7. Segunda Semana: días 8 al 15.
	// Tercera Semana: días 16 al 23. Cuarta Semana: días 24 al 31.
	cont = 0;
	cout << "Numero de articulo" << endl;
	cin >> nroarticulo;
	mayorq = 0;
	semana1 = 0;
	semana2 = 0;
	semana3 = 0;
	semana4 = 0;
	cont = cont+1;
	paso15 = false;
	while ((nroarticulo!=0)) {
		total = 0;
		quincena = 0;
		anterior = nroarticulo;
		while (nroarticulo==anterior) {
			cont = cont+1;
			cout << "Dia: " << endl;
			cin >> dia;
			cout << "Recaudacion del Dia: " << endl;
			cin >> recaudaciondia;
			total = total+recaudaciondia;
			cout << "Cantidad de unidades:" << endl;
			cin >> cantuni;
			if ((dia>=1) && (dia<=15)) {
				paso15 = true;
				nro = nroarticulo;
				quincena = quincena+cantuni;
			}
			if ((dia>=1) && (dia<=7)) {
				semana1 = semana1+cont;
			} else {
				if ((dia>=8) && (dia<=15)) {
					semana2 = semana2+cont;
				} else {
					if ((dia>=16) && (dia<=23)) {
						semana3 = semana3+cont;
					} else {
						if ((dia>=24) && (dia<=31)) {
							semana4 = semana4+cont;
						}
					}
				}
			}
			cout << "numero de articulo" << endl;
			num = nroarticulo;
			cin >> nroarticulo;
		}
		if (quincena>mayorq) {
			numarti = nro;
			mayorq = quincena;
		}
		cout << "Total de articulo " << num << ": $" << total << endl;
	}
	if (paso15==true) {
		cout << "El articulo mas vendido en la primera quincena es el articulo " << numarti << ": $" << quincena << endl;
	}
	if (semana1>semana2) {
		mayor = semana1;
		mventas = 1;
	} else {
		mayor = semana2;
		mventas = 2;
	}
	if (semana3>mayor) {
		mayor = semana3;
		mventas = 3;
	} else {
		if (semana4>mayor) {
			mayor = semana4;
			mventas = 4;
		}
	}
	cout << "Semana con mas ventas en total: " << mventas << "º semana "<<endl;
	return 0;
}

