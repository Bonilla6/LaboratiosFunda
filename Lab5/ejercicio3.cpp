#include "iostream"
#include "string.h"
#include "cmath"

using namespace std;

int bisiesto(int anio) 
{
    if (anio%4==0 and anio%100!=0)
    {
        return true; 
    }
    else if(anio%400==0)
    {
        return true;

    }
    else 
    {
        return false;
    }
    
} 

int main()
{
    int year;
    int (bisiesto(int a)); 
    cout << "Coloque el a" <<(char)164<<"o :" << endl; 
    cin >> year;
    if(bisiesto(year)) 
    {
    cout << "El a"<<(char)164<<"o es bisiesto" << endl;
    }
    else
    {
    cout << "No es bisiesto" << endl; 
    }
    
 return 0;
    
}