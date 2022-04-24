/*UTNFRGP
Ejercicio:Hacer un programa para ingresar cinco números. Se pide luego resolver como tres casos
diferentes:
a) Listar el máximo
b) Listar el mínimo
c) Listar el máximo y el mínimo.
Autor: PEB
Fecha:4/4/2022
*/
#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,a2,b2,c2,d2,e2,a3,b3,c3,d3,e3,maximo,minimo,maximodefinitivo,minimodefinitivo,minimo2,minimo3,maximo2,maximo3;
    cin>>a>>b>>c>>d>>e;
    if(a>b && a>c && a>d && a>e){
        maximo = a;
    }
    else if(b>a && b>c && b>d && b>e){
        maximo = b;
    }
    else if(c>b && c>a && c>d && c>e){
        maximo = c;
    }
    else if(d>b && d>c && d>a && c>e){
        maximo = d;
    }
    else{
        maximo = e;
    }


    if(a<b && a<c && a<d && a<e){
    minimo = a;
    }
    else if(b<a && b<c && b<d && b<e){
        minimo = b;
    }
    else if(c<b && c<a && c<d && c<e){
        minimo = c;
    }
    else if(d<b && d<c && d<a && c<e){
        minimo = d;
    }
    else{
        minimo = e;
    }

    cin>>a2>>b2>>c2>>d2>>e2;
    if(a2>b2 && a2>c2 && a2>d2 && a2>e2){
        maximo2 = a;
    }
    else if(b2>a2 && b2>c2 && b2>d2 && b2>e2){
        maximo2 = b;
    }
    else if(c2>b2 && c2>a2 && c2>d2 && c2>e2){
        maximo2 = c;
    }
    else if(d2>b2 && d2>c2 && d2>a2 && c2>e2){
        maximo2 = d;
    }
    else{
        maximo2 = e;
    }


    if(a2<b2 && a2<c2 && a2<d2 && a2<e2){
    minimo2 = a;
    }
    else if(b2<a2 && b2<c2 && b2<d2 && b2<e2){
        minimo2 = b;
    }
    else if(c2<b2 && c2<a2 && c2<d2 && c2<e2){
        minimo2 = c;
    }
    else if(d2<b2 && d2<c2 && d2<a2 && c2<e2){
        minimo2 = d;
    }
    else{
        minimo2 = e;
    }

    cin>>a3>>b3>>c3>>d3>>e3;
    if(a3>b3 && a3>c3 && a3>d3 && a3>e3){
        maximo3 = a;
    }
    else if(b3>a3 && b3>c3 && b3>d3 && b3>e3){
        maximo3 = b;
    }
    else if(c3>b3 && c3>a3 && c3>d3 && c3>e3){
        maximo3 = c;
    }
    else if(d3>b3 && d3>c3 && d3>a3 && c3>e3){
        maximo3 = d;
    }
    else{
        maximo3 = e;
    }


    if(a3<b3 && a3<c3 && a3<d3 && a3<e3){
    minimo3 = a;
    }
    else if(b3<a3 && b3<c3 && b3<d3 && b3<e3){
        minimo3 = b;
    }
    else if(c3<b3 && c3<a3 && c3<d3 && c3<e3){
        minimo3 = c;
    }
    else if(d3<b3 && d3<c3 && d3<a3 && c3<e3){
        minimo3 = d;
    }
    else{
        minimo3 = e;
    }



    if(minimo<minimo2 && minimo<minimo3){
        minimodefinitivo = minimo;
    }
    else if(minimo2<minimo && minimo2<minimo3){
        minimodefinitivo = minimo2;
    }
    else if(minimo3<minimo2 && minimo3<minimo){
        minimodefinitivo = minimo3;
    }


    if(maximo>maximo2 && maximo>maximo3){
        maximodefinitivo = maximo;
    }
    else if(maximo2>maximo && maximo2>maximo3){
        maximodefinitivo = maximo2;
    }
    else if(maximo3>maximo2 && maximo3>maximo){
        maximodefinitivo = maximo3;
    }


    cout<<"Minimos: "<<minimo<<endl;
    cout<<minimo2<<endl;
    cout<<minimo3<<endl;
    cout<<"Maximos: "<<maximo<<endl;
    cout<<maximo2<<endl;
    cout<<maximo3<<endl;

    cout<<"Maximo: "<<maximodefinitivo<<endl;
    cout<<"Minimo: "<<minimodefinitivo<<endl;
    cout<<endl;

    return 0;
    system("pause");
}


