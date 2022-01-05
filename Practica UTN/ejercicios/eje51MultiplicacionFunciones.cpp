/*
Crear una función que le pida al usuario 2 números enteros positivos y los guarde.
Crear una función que reciba 2 números y retorne el resultado.
Crear una función que muestre el resultado.
Llamar las funciones multiplicación, retornar y mostrar el resultado a nuestra función principal.
*/
#include <iostream>
int n1, n2;//son globales para que no sean alteradas
void PedirNumPos ();
int recibir (int num1, int num2);
void mostrar (int num1, int num2);

int main()
{
    int resultado;
    PedirNumPos();
    resultado= recibir (n1, n2);
    std::cout<<"Resultado: "<<resultado<<"\n";
    mostrar (n1, n2);
    system("pause");
    return 0;
}
void PedirNumPos ()
{
    std::cout<<"Ingresar dos numeros enteros positivos: ";
    std::cout<<"\nNumero 1: ";
    std::cin>>n1;
    if(n1<0)
    {
        
        do
        {
            std::cout<<"Debe ser un numero positivo, intenta de nuevo: ";
            std::cin>>n1;
        }while (n1<0);
    }  
    std::cout<<"\nNumero 2: ";
    std::cin>>n2; 
    if(n2<0)
    {
        
        do
        {
            std::cout<<"Debe ser un numero positivo, intenta de nuevo: ";
            std::cin>>n2;
        } while (n2<0);
        
    }
}
int recibir (int num1, int num2)
{
    /*int num1, num2, guardar;
    guardar = num1* num2;
    return guardar;*/
    return num1* num2;
}
void mostrar (int num1, int num2)
{
    int resul;
    resul= num1*num2;
    std::cout<<"Resultado de la multiplicacion: "<<resul<<"\n";
}


