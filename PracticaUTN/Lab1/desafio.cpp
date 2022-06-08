/*UTNFRGP
Ejercicio:
Autor: PEB
Fecha:
*/
#include <iostream>
#include <stdio.h>


int main() {
    int primos, n, d;
    bool es_primo=false;

    n = 2;
    std::cout<<"Ingresar cantidad de numeros primos: ";
    std::cin>>primos;
    while (primos> 0) {

        es_primo = true;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = false;
                break;
            }
        }

        if (es_primo) {
            std::cout<<"\n"<< n;
            primos--;
        }
        n++;
    }

    std::cout<<("\n");
    return 0;
}
