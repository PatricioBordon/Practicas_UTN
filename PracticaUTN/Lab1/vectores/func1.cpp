///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
/*
Dadas las edades de los 30 alumnos de un curso, calcular e informar:
a) Cuántos de esos alumnos tienen una edad mayor a la edad promedio.
b) Cuántos alumnos tienen una edad igual a un valor que se ingresa por teclado.
c) Cuál es la edad más grande
d) Cuál es la edad más chica
*/




using namespace std;
///un VECTOR es una variable bajo un mismo nombre puede almacenar una cantidad definidad previamente
///de valores de un mismo tipo

///VARIABLES SIMPLES: un nombre un sólo valor al mismo tiempo


///cargar datos en el vector
void cargarVector(int vEdad[], const int TAM){
    int i;
    for(i=0;i<TAM;i++){
        cout<<"VALOR: ";
        cin>>vEdad[i];///al usar el vector lo uso desde la posición 0 hasta la cantidad -1
    }
}

void mostrarVector(int vEdad[], const int TAM){
    int i;
    for(i=0;i<TAM;i++){
        cout<<vEdad[i]<<endl;
    }
}

    ///sumar todos los datos contenidos en el vector
int sumarVector(int vEdad[], const int TAM){
    int i;
    int sumaEdad=0;
    for(i=0;i<TAM;i++){
        sumaEdad+=vEdad[i];///acumulo en la variable sumaEdad todos los valores contenidos en el vector
    }
    return sumaEdad;
}

    ///calcular cuántos de los valores contenidos en el vector son mayores al promedio
int contarMayores(int vEdad[], int TAM, float prom){
    int i;
    int cantMayor=0;
    for(i=0;i<TAM;i++){
        if(vEdad[i]>prom){
            cantMayor++;
        }
    }
    return cantMayor;
}
///fuera de todas las funciones las variables son globales: son reconocidas por todas las funciones.

int main(){
    const int TAM=5;
    int sumaEdad=0, cantMayor=0;
    float prom;
    {
        int x=0;
        cout<<x;
    }
    cout<<x;
    ///DECLARACION DE UN VECTOR
    ///int vEdad[5];/// al declarar pongo la cantidad que necesito
    int vEdad[TAM];/// también se puede declarar con una constante previamente definida

    cargarVector(vEdad,TAM);

    sumaEdad=sumarVector(vEdad,TAM);
    ///
    prom=(float)sumaEdad/TAM;
    cout<<"EL PROMEDIO DE EDAD ES: "<<prom<<endl;
    cantMayor=contarMayores(vEdad,TAM,prom);
	cout<<endl;
	cout<<"CANTIDAD DE ALUMNOS MAYORES AL PROMEDIO: "<<cantMayor<<endl;

	system("pause");
	return 0;
}
