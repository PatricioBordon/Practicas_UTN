/*
Pedir al usuario que ingrese la cantidad dinero que quiere cambiar en formato numero entero.
Crear una función llamada “entregaDinero” que reciba el numero int ingresado y que reciba por referencia 10 denominaciones de cambio 
(mil, quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos, uno).
La función “entregaDinero” debe calcular la cantidad de cambio a entregar.
*/
#include <iostream>

void entregaDinero (int dinero, int& mil, int& quinientos, int& doscientos, int& cien, int& cincuenta, 
int& veinte, int& diez, int& cinco, int& dos, int& uno);

int main(){
	int dinero, mil, quinientos, doscientos, cien, cincuenta, 
	veinte, diez, cinco, dos, uno;
	std::cout<<"Ingresar cantidad de dinero a cambiar: ";
	std::cin>>dinero;
	std::cout<<"Aqui esta tu cambio:\n";
	entregaDinero( dinero, mil, quinientos, doscientos, cien, cincuenta, 
	veinte, diez, cinco, dos, uno);
	std::cout<<"Billetes de mil: "<<mil<<"\n";
	std::cout<<"Billetes de quinientos: "<<quinientos<<"\n";
	std::cout<<"Billetes de doscientos: "<<doscientos<<"\n";
	std::cout<<"Billetes de cien: "<<cien<<"\n";
	std::cout<<"Billetes de cincuenta: "<<cincuenta<<"\n";
	std::cout<<"Billetes de veinte: "<<veinte<<"\n";
	std::cout<<"Billetes de diez: "<<diez<<"\n";
	std::cout<<"Billetes de cinco: "<<cinco<<"\n";
	std::cout<<"Billetes de dos: "<<dos<<"\n";
	std::cout<<"Billetes de uno: "<<uno<<"\n";
	system ("pause");
	return 0;
}

void entregaDinero (int dinero, int& mil, int& quinientos, int& doscientos, int& cien, int& cincuenta, 
int& veinte, int& diez, int& cinco, int& dos, int& uno){
	mil= dinero/ 1000;
	dinero= dinero% 1000;

	quinientos= dinero/ 500;
	dinero= dinero% 500;

	doscientos= dinero/ 200;
	dinero%= 200; //con el modular tambien sirve hacer el %=

	cien= dinero/ 100;
	dinero%= 100;

	cincuenta= dinero/50;
	dinero%= 50;

	veinte= dinero/ 20;
	dinero%= 20;

	diez= dinero/ 10;
	dinero%= 10;

	cinco= dinero/5;
	dinero%= 5;

	dos= dinero/ 2;
	dinero%= 2;

	uno= dinero;

}
