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
	// 10) Una empresa registr� las ventas que realiz� durante el mes anterior. Para cada venta se
	// tienen los siguientes datos:
	// - N�mero de art�culo (1 a 30)
	// - D�a (1 a 31)
	// - Cantidad de unidades vendidas
	// - Recaudaci�n del d�a
	// Este lote finaliza con un registro con n�mero de art�culo igual a cero. En el lote anterior
	// no aparecen registros de los art�culos que por alguna raz�n no se hayan vendido alg�n
	// o ning�n d�a del mes.
	// Los registros est�n agrupados por n�mero de art�culo.
	// Se pide determinar e informar:
	// a) El n�mero del art�culo m�s vendido en total considerando las ventas de la primera
	// quincena. Se considera primera quincena los d�as del 1 al 15 inclusive.
	// b) Para cada uno de los art�culos informar la recaudaci�n total considerando todas las
	// ventas del mes.
	// c) Informar la semana en la que se vendi� mayor cantidad de art�culos en total. Se
	// considera:
	// Primera Semana: d�as 1 al 7. Segunda Semana: d�as 8 al 15.
	// Tercera Semana: d�as 16 al 23. Cuarta Semana: d�as 24 al 31.
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
	cout << "Semana con mas ventas en total: " << mventas << "� semana "<<endl;
	return 0;
}

