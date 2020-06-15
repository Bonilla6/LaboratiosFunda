#include "iostream"
using namespace std;

int diadsps(int dd, int ms, int anio)
{
    switch (ms)
    {
        case 1:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 2:
        if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) // si es bisiesto, son 29 dias
        {
            if ( dd >= 1 && dd <= 28) // si pone 28, serian 29 del mismo mes
            {
              dd ++;
              anio = anio;
              ms = ms;
            }
            else if ( dd == 29)
            {
             dd = 1;
             ms ++;
             anio = anio;
            }
        }
        else //no es bisiesto
        {
           if ( dd >= 1 && dd <= 27) // si pone 27, serian 28 del mismo mes
            {
                dd ++;
                anio = anio;
                ms = ms;
            }
            else //28 dias, la fecha siguiente seria 1 del mes siguiente
            {
             dd = 1;
             ms ++;
             anio = anio;
            }
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 3:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 4:
        if ( dd >= 1 && dd <= 29) // si es 29, prox seria 30
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //30 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 5:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 6:
        if ( dd >= 1 && dd <= 29) // si es 29, prox seria 30
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //30 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 7:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 8:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 9:
        if ( dd >= 1 && dd <= 29) // si es 29, prox seria 30
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //30 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 10:
        if ( dd >= 1 && dd <= 30) // 30, dias el proximo seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;  
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 11:
        if ( dd >= 1 && dd <= 29) // si es 29, prox seria 30
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //30 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dd = 1;
            ms ++;
            anio = anio;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        case 12:
       if ( dd >= 1 && dd <= 30) // si es 30, prox seria 31
        {
          dd++; 
          ms = ms;
          anio = anio;
        }
        else //31 dias, la fecha siguiente seria 1 del año siguiente
        {
            dd = 1;
            ms = 1;
            anio ++;
        }
        cout << "La siguiente fecha de la ingresada es:" << dd << "/" << ms << "/" << anio << endl;
        break;
        default:
        cout << "Ha ingresado un numero de mes invalido";
        break;
       
    }
      
 return 0;
}
int main ()
{
 int dia, mes, year;

 cout << "Ingrese la fecha que desea:" << endl;
 cout << "Ingrese el a" << (char) 164 << "o:" << endl;
 cin >> year;
 cout << "Ingrese el numero a su mes deseado, entre 1 y 12, respectivamente:" << endl;
 cin >> mes;
 cout << "Ingrese el dia:" << endl;
 cin >> dia;
 diadsps(dia, mes, year);

}