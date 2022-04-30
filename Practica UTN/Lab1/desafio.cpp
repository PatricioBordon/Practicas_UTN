/*UTNFRGP
Ejercicio:
Autor: PEB
Fecha:
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int primos, n, d;
    bool es_primo=false;

    n = 2;
    cout<<"Ingresar cantidad de numeros primos: ";
    cin>>primos;
    while (primos> 0) {

        es_primo = true;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = false;
                break;
            }
        }

        if (es_primo) {
            cout<<"\n"<< n;
            primos--;
        }
        n++;
    }

    cout<<("\n");
    return 0;
}
