/*UTNFRGP
Ejercicio:
Autor: PEB
Fecha: 23/03/2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, i, medio, menor, mayor, tope=3;
    cout<<"Ingresar un numero: ";
    cin>>n;
    mayor=n;
    medio=n;
    menor=n;
    for (i=2;i<=tope;i++){
        cout<<"Ingresar un numero: ";
        cin>>n;
        if(n>mayor){
            menor=medio;
            medio=mayor;
            mayor=n;
        }

        else {
                if(n>medio){
                menor=medio;
                medio=n;
                }
        else{
            n<menor;
            medio=menor;
            menor=n;


        }
        }

    }

    cout<<medio;

    return 0;
    system("pause");
}
