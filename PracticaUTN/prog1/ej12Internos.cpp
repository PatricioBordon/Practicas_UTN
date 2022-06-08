// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

int main() {
	float acumv;
	float aux;
	float aux2;
	float cantpas;
	float cantviajes;
	float dia;
	int diamenor;
	int intermayor;
	float mayor;
	float mayorq;
	float menor;
	float nroantinter;
	float nrointer;
	int nromenor;
	float primeraq;
	float recaudia;
	float segundaq;
	float total;
	cout << "Ingresar numero de interno desde 1 a 150" << endl;
	cin >> nrointer;
	while ((nrointer<1) || (nrointer>150)) {
		cout << "ERROR: Ingresar desde 1 a 150" << endl;
		cin >> nrointer;
	}
	aux = 0;
	aux2 = 0;
	mayor = 0;
	segundaq = 0;
	primeraq = 0;
	while (nrointer!=0) {
		acumv = 0;
		nroantinter = nrointer;
		total = 0;
		while (nrointer==nroantinter) {
			cout << "Dia" << endl;
			cin >> dia;
			while ((dia<1) || (dia>30)) {
				cout << "el Dia debe ser de 1 a 30" << endl;
				cin >> dia;
			}
			cout << "Recaudacion de dia" << endl;
			cin >> recaudia;
			if (aux2==0) {
				menor = recaudia;
				diamenor = dia;
				aux2 = 1;
				nromenor = nroantinter;
			} else {
				if (recaudia<menor) {
					diamenor = dia;
					menor = recaudia;
					nromenor = nroantinter;
				}
			}
			total = total+recaudia;
			cout << "Cantidad de pasajeros" << endl;
			cin >> cantpas;
			cout << "Cantidad de viajes" << endl;
			cin >> cantviajes;
			if ((dia>=1) && (dia<=15)) {
				primeraq = primeraq+cantpas;
				acumv = acumv+cantviajes;
			} else {
				if ((dia>=16) && (dia<=30)) {
					segundaq = segundaq+cantpas;
				}
			}
			cout << "Ingresar numero de interno desde 1 a 150" << endl;
			cin >> nrointer;
		}
		if (aux==0) {
			mayor = acumv;
			aux = 1;
			intermayor = nroantinter;
		} else {
			if (acumv>mayor) {
				mayor = acumv;
				intermayor = nroantinter;
			}
		}
		cout << "Recaudacion total de interno" << nroantinter << ": $" << total << endl;
	}
	if (primeraq>segundaq) {
		mayorq = 1;
	} else {
		mayorq = 2;
	}
	cout << "Numero de interno que realizo mas viajes: " << intermayor << endl;
	cout << "Numero de Quincena coon Mayor cantidad de pasajeros: " << mayorq << endl;
	cout << "Numero de interno que menors recaudo: " << nromenor << " en el dia " << diamenor << endl;
	return 0;
}

