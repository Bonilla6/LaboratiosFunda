#include <iostream>
#include <string>
using namespace std;
int main() 

{
    int nc;
    string palabra;
    cout << "Ingrese una palabra";
    cin >> palabra;
    nc = palabra.length();
    if (nc>10)
    {
        cout << "Su palabra es mayor a 10 caracteres"<< endl;
    } 
    else
    {
        cout << "Su palabra es menor a 10 caracteres"<< endl;
    }
    if ((nc % 2) == 0)
    {
        cout << "Su palabra contiene un numero par de caracteres";
    }
    else
    {
        cout << "Su palabra contiene un numero impar de caracteres";
    }
 return 0;

}