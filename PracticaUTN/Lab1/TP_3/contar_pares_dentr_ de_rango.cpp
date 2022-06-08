/*UTNFRGP
Ejercicio:
Autor: PEB
Fecha:
*/

#include <iostream>
using namespace std;
int countOdds(int low, int high)
{
    int count=0;
    for(int i=low;i<=high;i++)
        if(i%2==0) count++;

    return count;
}
int main()
{
    int low,high;
    cin>>low>>high;
    cout<< countOdds(low, high) <<endl;
}
