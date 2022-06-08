/*UTNFRGP
Ejercicio: Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de
descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a
pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar
será de $ 800.
Autor: PEB
Fecha: 21/03/2022
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int importe, descuento, total;

    cout<<"Ingresar el importe de la venta: $";
    cin>>importe;
    cout<<"Ingresar el descuento aplicado a la venta: %";
    cin>>descuento;

    total = importe - (descuento * importe / 100);
    cout<<"Importe total: $"<<total;

    return 0;
    system("pause");
}


