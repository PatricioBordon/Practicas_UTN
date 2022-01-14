/*
- Pedir al humano que ingrese dos valores.
- Crear una función llamada “calcula” que reciba dos valores de tipo int y los sume y multiplique.
- Hacer la la función “calcula” retorne un arreglo con la suma y la el resultado de la multiplicación.
*/
#include <iostream>
int *Calcula (int, int); //el asterisco sirve para avisar que es un puntero

int main(){
    int suma, multiplicacion, n1,n2;
    std::cout<<"ingresar dos valores: ";
    std::cin>>n1>>n2;
    int *resultado=*calcula (n1, n2);
    suma= resultado[0];
    multiplicacion= resultado[1];
    std::cout<<"Suma= ";
    std::cout<<"Multiplicacion= ";

    system ("pause");
    return 0;
}

int *Calcula (int num1, int num2){
    int suma, multiplicacion;
    suma= num1 + num2;
    multiplicacion= num1 * num2;
    int *resultado;
    resultado[0]= suma;
    resultado[1]= multiplicacion;
    return resultado;
}