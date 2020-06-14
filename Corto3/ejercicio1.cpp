#include <iostream>
#include <iomanip>
using namespace std;

int SalarioReal()
{
    float ss, AFP, renta, salarioT, salarior;
    int HorasNor, HorasExtr, numE, i;
    cout << endl << "Digite el numero de empleados:" << endl;
    cin >> numE;
    for (int i = 1; i <= numE; i++) //iteracion para calcular el salario total y neto de cada empleado 
    {
        cout << endl << "Digite sus horas trabajadas en el mes:" << endl;
        cin >>HorasNor;
        cout << endl <<"Digite sus horas extras trabajadas en el mes:" << endl;
        cin >>HorasExtr;

        salarioT = (HorasNor*1.75) + (HorasExtr*2.50); //Calcular el salario sin ningun descuento incluido
        ss = salarioT*0.04; //Salario con el descuento de 4%
        AFP = salarioT*0.0625; // salario con el descuento de 6.25%
        renta = salarioT*0.1; // salario con el 10%
        salarior = salarioT - (ss+AFP);
        if (salarioT>500)
        {
        salarior = (salarior) - (renta);
        }
        cout << fixed << setprecision(2) << endl <<"Su salario total es:"<<salarioT; //Ocupe esta funcion para poder ocupar solo dos decimales
        cout << fixed << setprecision(2) << endl <<"Su salario neto es:"<<salarior;
    }
 return 0;
} 

int main()
{ 
    SalarioReal();
}