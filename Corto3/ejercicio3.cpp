#include <iostream>
#include "string.h"
#include <cmath>

using namespace std;

int bisiesto(int anio) //funcion entera para calcular el aó ingresado
{
    if (anio%4==0 and anio%100!=0)
    {
        return true; 
    }
    else if(anio%400==0)
    {
        return true;

    }
    else // si no comple con ningunas de las concdiciones planteadas, no sera el año bisiiesto
    {
        return false;
    }
    
} 

int main()
{
    int year;
    int (bisiesto(int a)); // llamado de la funcion
    cout << "Coloque el a" <<(char)164<<"o :" << endl; // codigo ascii
    cin >> year;
    if(bisiesto(year)) 
    {
    cout << "El a"<<(char)164<<"o es bisiesto" << endl;
    }
    else
    {
    cout << "No es bisiesto" << endl; // si no lo cumple
    }
    
 return 0;
    
}