// /1) Una agencia de viajes posee la informacion de los cinco destinos turisticos que
	// /comercializa en cada uno de los meses del año 2019. Por cada destino y mes registra:
	// /- Codigo de destino turistico (entero)
	// /- Numero de mes (entero entre 1 y 12)
	// / - Cantidad de pasajes vendidos (entero)
	// /- Total recaudado (float)
	// /La informacion se encuentra agrupada por destino turistico pero no se encuentra ordenada
	// /bajo ningun criterio.
	// /Se pide calcular e informar:
	// /A) La cantidad total de pasajes vendidos en el año 2019 entre todos los destinos turísticos.
	// /B) Por cada destino turístico, el total recaudado.

#include<iostream>
using namespace std;

int main() {
	float cantpas;
	int cod;
	float destinos;
	float mes;
	int nummes;
	float total;
	float ventapordestino;
	float ventatotal;
	
	ventatotal = 0;
	for (destinos=1;destinos<=5;destinos++) {
		ventapordestino = 0;
		cout << "codigo de destino: " << endl;
		cin >> cod;
		for (mes=1;mes<=12;mes++) {
			cout << "mes" << endl;
			cin >> nummes;
			cout << "Pasajes vendidos" << endl;
			cin >> cantpas;
			cout << "Total recaudado" << endl;
			cin >> total;
			ventatotal = cantpas+ventatotal;
			ventapordestino = ventapordestino+total;
		}
		cout << "venta de destino " << cod << ": $" << ventapordestino << endl;
	}
	cout << "Cantidad total de pasajes entre todos los destinos: " << ventatotal << endl;
	return 0;
}

