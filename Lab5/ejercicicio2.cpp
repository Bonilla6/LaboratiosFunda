#include "conio.h"
#include "stdio.h"
#include "iostream"

using namespace std;

int segdsps(int hh, int mm, int ss)
{
 if ( hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59 )
    {
        ss++;
        if ( ss == 60 )
        {
            ss = 0;
            mm++;
            if ( mm == 60 )
            {
                mm = 0;
                hh++;
                if ( hh == 24 )
                {
                    hh = 0;
                }
            }
        }
        cout << "Un segundo despues la hora ingresada  es:" << endl <<hh<<":"<<mm<<":"<<ss; 
        
                
        return 0;
        
    }
}

int main()
{
    int hora, minuto, segundo;
    
    cout << "Ingrese la hora en formato 24 horas:" << endl;
    cin >> hora;
    cout << "Ingrse los minutos:" << endl;
    cin >> minuto;
    cout << "Ingrese los segundos:" << endl;
    cin >> segundo;
    segdsps(hora, minuto, segundo);
    return 0;
    
}