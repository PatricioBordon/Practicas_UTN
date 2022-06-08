/*
Crear una función llamada “pedirDatos” que le pida al usuario 2 números de coma flotante positivos.
Crear una función llamada “retornaExponente” que reciba 2 números y retorne el primer número elevado al exponente del segundo.
Crear una función llamada “muestraExponente” que reciba 2 números y muestre el primer número elevado al exponente del segundo.
Llamar las funciones “pedirDatos”, “retornaExponente” y “muestraExponenete” el resultado a nuestra función principal.
*/
#include <iostream>
#include <math.h>
float n1, expo;
void pedirDatos();
float retornaExponente (float num1, float exponente);
void muestraExponente (float num1, float exponente);

int main()
{   float resultado;
    pedirDatos();
    resultado= retornaExponente (n1,  expo);
    std::cout<<"Resultado retornado: "<<resultado<<"\n";
    muestraExponente ( n1,  expo);
    system ("pause");
    return 0;
}

void pedirDatos()
{
    std::cout<<"Ingresar numero decimal positivo: "; std::cin>>n1;
    if (n1<0)
    {
        do
        {
            std::cout<<"Error...Debe ser un numero positivo, intenta de nuevo:\n";
            std::cin>>n1;
        } while (n1<0);
        
    }
    std::cout<<"Ingresar exponente decimal positivo: "; std::cin>>expo;
    if (expo<0)
    {
        do
        {
            std::cout<<"Error...Debe ser un numero positivo, intenta de nuevo:\n";
            std::cin>>expo;
        } while (expo<0);
        
    }

}
float retornaExponente (float num1, float exponente)
{
    float resultado= 1;
    for (int i = 1; i <= exponente; i++)
    {
        resultado *= num1;
    }
    return resultado;
}
void muestraExponente (float num1, float exponente)
{   
    float resultado= retornaExponente (num1, exponente);
    std::cout<<"Resultado: "<<resultado<<"\n";
}
