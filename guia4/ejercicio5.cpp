#include <iostream>
#include <string>
using namespace std;
int main()

{
    string palabra;
    char c1 , c2;
    cout << "Ingrese una palabra";
    cin  >>palabra;
    c1 = palabra.front();
    c2 = palabra.back();
    if (c1==c2)
    {
        cout << "Su palabra empieza y termina con la misma letra";
    }
    else
    {
        cout << "Su palabra empieza y termina con una letra diferente";
    }
    return 0;
    
    
}