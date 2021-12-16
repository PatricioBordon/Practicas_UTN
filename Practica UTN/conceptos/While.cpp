#include <iostream>
int main(){
    int i;
    i=1;
    while (i<=10)
    {
        std::cout<<i<<"\n";
        /*si la instruccion de abajo no existiera
        seria infinito*/
        i++;
    }
    

    system("pause");
    return 0;
}