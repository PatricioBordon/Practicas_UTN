/*UTNFRGP
Ejercicio: Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
Autor: PEB
Fecha: 20/03/2022
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float recaudacion1, recaudacion2, recaudacion3, recaudacion4, promedio, total, porcentaje1, porcentaje2, porcentaje3, porcentaje4;
    cout<<"Recaudacion semana 1: ";
    cin>>recaudacion1;
    cout<<"Recaudacion semana 2: ";
    cin>>recaudacion2;
    cout<<"Recaudacion semana 3: ";
    cin>>recaudacion3;
    cout<<"Recaudacion semana 4: ";
    cin>>recaudacion4;

    promedio = (recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4) / 4;
    total = recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4;
    porcentaje1 = recaudacion1 * 100 / total;
    porcentaje2 = recaudacion2 * 100 / total;
    porcentaje3 = recaudacion3 * 100 / total;
    porcentaje4 = recaudacion4 * 100 / total;

    cout<<"Promedio: $"<<promedio<<"\n";
    cout<<"Porcentaje semana 1: %"<<porcentaje1<<"\n";
    cout<<"Porcentaje semana 2: %"<<porcentaje2<<"\n";
    cout<<"Porcentaje semana 3: %"<<porcentaje3<<"\n";
    cout<<"Porcentaje semana 4: %"<<porcentaje4<<"\n";

    system("pause");
    system("cls");
    cout<<"Gracias vuelva prontos\n";
    system("pause");
    return 0;
}

