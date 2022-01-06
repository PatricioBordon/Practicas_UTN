/*
Calcular raiz cuadrada sin biblioteca math
*/

#include <iostream>

#define presicion 0.0000001 
double raiz(double num); 

double n1, resul;//si quiero numero redondo lo declaro como int

int main()
{
    std::cout<<"Raiz de: "; std::cin>>n1;
    resul= raiz(n1);
    
    std::cout<<resul<<"\n";
    system("pause");
    return 0;
}

double raiz(double num) 
{
    double minimo = 0; 
    double maximo = num;//representa al numero
    double mitad = 0; 

    while (maximo - minimo > presicion) 
    {
        mitad = (maximo + minimo) / 2; 
        if (mitad*mitad > num) 
        {
            maximo = mitad;
        }
        else 
        {
            minimo = mitad;
        }    
    }   
    return mitad;
}
