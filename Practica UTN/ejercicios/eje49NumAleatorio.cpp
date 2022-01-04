/*
Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. 
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario si el 
numero que dígito es menor o mayor al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle 
el numero de intentos que le llevo.
*/
#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void pedirnumero (int x);
void aleatorio (int azar);
int n1, azar;
int main(){
    pedirnumero(n1);
    aleatorio(azar);
    system ("pause");
    return 0;
}

void pedirnumero (int x){
    
    cout<<"Adivina el numero\n";
    cout<<"Ingresar Numero: ";
    cin>>x;
}

void aleatorio(int azar){
    int cont=1;
    srand(time(NULL));
    azar=1+rand()%100;
    do
    {
        if (n1>azar)
        {
            cout<<"Ingresar un numero menor: ";
        }
        if (n1<azar)
        {
            cout<<"Ingresar un numero mayor: ";
        }
        cin>>n1;
        cont++;
    } while (n1!=azar);
    cout<<"Genial! adivinaste el numero despues de " <<cont<<" intentos\n";
}