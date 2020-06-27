#include <iostream>
using namespace std;

void calculoNota(int alumni[][5], int estu)
{
    int i,j;
    float calif = 0, prom = 0;
    for (int i = 0; i < estu; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            calif = calif + alumni[i][j];
        }
        prom = (calif * 0.20);
        if (calif >= 6)
        {
            cout << "El alumno que tiene  la posicion: " << i << "aprobo con promedio final de: " << prom << endl;
            calif = 0, prom = 0;
        }
        else
        {
            cout << "El alumno que tiene la posicion: " << i << "reprobo con promedio final de: " << prom << endl;
            calif = 0, prom = 0;
        }  
    }
}
void Matrices()
{
    int i,j, estu; 
    cout << "Ingrese la cantidad de alumnos: " << endl;
    cin >> estu;
    int alumni[estu][5];
    for (int i = 0; i < estu; i++)
    {
        cout << "Alumno en la posicion " << i << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Ingrese las nota del alumno " << j <<": ";
            cin >> alumni[i][j];
        }
    }
 calculoNota(alumni,estu);  

}
int main()
{
   Matrices();
}