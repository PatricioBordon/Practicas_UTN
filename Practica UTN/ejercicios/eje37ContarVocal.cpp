/*
Pedir al usuario que ingrese un texto.
Contar las letras VOCALES de ese texto.
*/
#include <iostream>
int main(){
    char texto[30]="\0";
    int la=0,le=0,li=0,lo=0,lu=0;
    int LA=0,LE=0,LI=0,LO=0,LU=0;
    std::cout<<"Ingresar texto: ";
    std::cin.getline(texto,30,'\n');
    for (int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
            case 'a': la++ ;break;
            case 'e': le++ ;break;
            case 'i': li++ ;break;
            case 'o': lo++ ;break;
            case 'u': lu++ ;break;
            case 'A': LA++ ;break;
            case 'E': LE++ ;break;
            case 'I': LI++ ;break;
            case 'O': LO++ ;break;
            case 'U': LU++ ;break;
         default: break;
        }
    }
    std::cout<<"Cantidad de veces que se repitieron las vocales:\n";
    std::cout<<"Letra A: "<<la+LA<<" veces\n";
    std::cout<<"Letra E: "<<le+LE<<" veces\n";
    std::cout<<"Letra I: "<<li+LI<<" veces\n";
    std::cout<<"Letra O: "<<lo+LO<<" veces\n";
    std::cout<<"Letra U: "<<lu+LU<<" veces\n";


    system("pause");
    return 0;
}

