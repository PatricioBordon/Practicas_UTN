/*
Es un algoritmo de búsqueda que encuentra la posición de un
valor en un array ordenado. Compara el valor con el elemento 
en el medio del array, si no son iguales, la mitad en la cual 
el valor no puede estar es eliminada y la búsqueda continúa en 
la mitad restante hasta que el valor se encuentre.
Depende el numero a encontrar gasta menos recursos
*/
#include <iostream>
int main(){
    regresa:
    int tamano, lista[]={1,2,3,4,5}, valor, cont=0, inferior, superior, mitad;
    bool encontrado=false;
    tamano=sizeof(lista)/sizeof(*lista);//esto equivale a 20/4 = 5 (es mas eficiente asi solo cambio la lista en vez de tamano y lista)
    inferior=0;
    superior=tamano;

    std::cout<<"Ingresar un valor de la siguiente lista:\n";
    for (int i = 0; i < tamano; i++)
    {
        std::cout<<lista[i]<<"\n";
    }
    std::cout<<"Ingresar el valor: ";
    std::cin>>valor;

    while ((inferior <= superior) && (cont<tamano))
    {
        mitad=(inferior+superior)/2;
        if(lista[mitad]==valor)
        {
        encontrado=true;
        break;
        }
        if (lista[mitad]>valor)
        {
            superior=mitad;
            mitad= (inferior+superior)/2;
        }
        if (lista[mitad]<valor)
        {
            inferior=mitad;
            mitad= (inferior+superior)/2;
        }
        cont++;
    }
        
    if (encontrado==true)
    {
       std::cout<<"El valor coincide con la posicion: "<<mitad+1<<"\n";
    }

    if (encontrado==false)
    {
        std::cout<<"El valor ingresado no coincide con la lista, intenta de nuevo:\n";
        goto regresa;
    }
    
    system("pause");
    return 0;
}