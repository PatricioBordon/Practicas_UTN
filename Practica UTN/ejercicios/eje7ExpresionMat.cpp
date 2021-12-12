#include <iostream>
#include <math.h>
int main(){
    float x,y,resul,ycuadradamenosuno;
    std::cout<<"Ingresar valor de X: ";std::cin>>x;
    ingresaydenuevo:
    std::cout<<"Ingresar valor de y: ";std::cin>>y;
    //sqrt sirve para raiz cuadrada y pow para potencias
    ycuadradamenosuno=(pow(y,2)-1);
    if(ycuadradamenosuno==0){
        std::cout<<"Ingresa un valor de y mayor a 1\n";
        goto ingresaydenuevo;
    }
    resul=(sqrt(x)) / ycuadradamenosuno;
    std::cout<<"Resultado: "<<resul<<"\n";
    system("pause");
    return 0;
}