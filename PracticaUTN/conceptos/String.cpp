/*
una cadena o string es una matriz o array de caracteres
Un STRING o cadena de caracteres es un tipo de dato que se 
utiliza para almacenar textos, no es una variable primitiva 
como el el int, el bool o el float, sino que es un conjunto 
de variables primitivas tipo caracter.
*/
#include <iostream>
int main(){
    char programador[]="programador";
    //otra forma es con un arreglo
    //char pimpollo[]={'p','i','m','p','o','l','l','o'};
    std::cout<<programador<<"\n"<<sizeof(programador)-1<<"\n\n";
    char pimpollo[] = {'p', 'i', 'm', 'p', 'o', 'l', 'l', 'o', 0};//le resto uno por que cuenta el null
    
    std::cout<<pimpollo<<"\n"<<sizeof(pimpollo)-1<<"\n";//le resto uno por que cuenta el null

    char nombre[8];/*si escribo "Patricio", se desborda la memoria, ya que la funcion cin 
    no le importa el rango que estableci, eso provoca que "robe" espacios de memoria que no estan conteniendo a la variable que declare
    Es decir, va a leer lo que yo escriba y va a guardar las 5 letras (fue el limite que estableci) en la seccion de memoria que contiene 
    a la variable declarada y a las otras tres letras las va a guardar en otra seccion de memoria
    Esto esta mal, por que si esto pasa en una maquina con poca memoria, la desborda.

    Ademas si hay un espacio despues de la palabra, cin no lo lee.
    Esto se arregla con gets()   
    get significa Tomar y S significa String
    */
    std::cout<<"Ingresar Nombre ";

    // gets(nombre);//misma funcion que cin mas la funcion de que lee despues del espacio
    //pero no respeta el rango que estableci, entonces se soluciona asi
    std::cin.getline(nombre,sizeof(nombre)+1,'\n');/*pude haber ecrito el 8 como limite pero use la funcion size of por que es practico
    en caso de que el codigo sea muy extenso, ahorrando tiempo en buscar el numero limite que estableci*/

    std::cout<<nombre<<"\n";

    system("pause");
    return 0;
    /*
    std::cin.getline(nombre, sizeof(nombre)) solo recoge 4 caracteres y no 5.
    Por lo que lee char pimpollo[] = "pimpollo"; y char pimpollo[] = {'p', 'i', 'm', 'p', 'o', 'l', 'l', 'o'}; no son equivalentes, 
    ya que char pimpollo[] = "pimpollo" introduce automáticamente un NULL al final, por lo tanto el equivalente debería ser
    char pimpollo[] = {'p', 'i', 'm', 'p', 'o', 'l', 'l', 'o' '\0'}; 
    o también char pimpollo[] = {'p', 'i', 'm', 'p', 'o', 'l', 'l', 'o', 0}; 
    que es el motivo por el que en el primer ejemplo se imprime "pimpolloprogramador" y no "pimpollo", no encuentra el NULL y 
    sigue leyendo la memoria hasta encontrar el NULL.
    */
    
    }