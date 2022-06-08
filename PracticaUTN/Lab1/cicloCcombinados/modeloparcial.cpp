#include<iostream>
using namespace std;

int main() {
	float dia;
	float envios;
	float enviosacum;
	float enviosmen;
	float importe;
	float importetotal;
	float reparmen;
	float repartidor;
	importetotal = 0;
	enviosmen = 0;
	for (repartidor=1;repartidor<=25;repartidor++) {
		enviosacum = 0;
		cout << "repartidor " << repartidor << endl;
		cout << "Dia:" << endl;
		cin >> dia;
		while (dia!=0) {
			cout << "Envios: " << endl;
			cin >> envios;
			enviosacum = enviosacum+envios;
			cout << "Importe:" << endl;
			cin >> importe;
			importetotal = importetotal+importe;
			cout << "Dia:" << endl;
			cin >> dia;
		}
		if (repartidor==1) {
			enviosmen = enviosacum;
			reparmen = repartidor;
		} else {
			if ((enviosacum<=enviosmen) && (enviosacum!=0)) {
				enviosmen = enviosacum;
				reparmen = repartidor;
			}
		}
		if (enviosacum>70) {
			cout << "repartidor " << repartidor << " tiene mas de 70 envios" << endl;
		}
	}
	cout << "Importe total entre todos: " << importetotal << endl;
	cout << "Repartidor de menos envios: " << reparmen << endl;
	return 0;
}

