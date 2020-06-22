#include <iostream>
using namespace std;


int main()
{
    int nimpares[100], n, i;
    nimpares[0] = 1;

    n = 1;

    for (int i = 1; i < 100; i++)
    {
        n = n +2;
        nimpares[i] = n;
    }
    cout << "Esta es la lista de los primeros 100 numeros impares" << endl;

    for ( i=99; i >=0 ; i--)
    {
       cout << nimpares[i] << endl;
    }
}    