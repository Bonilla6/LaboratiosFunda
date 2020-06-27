#include <iostream>
using namespace std;

int calculo(float num[])
{
    float prom;
    float suma; 
    int i;
    suma = 0;
    for (int i=0; i<=24; i++)
    {
        suma += num[i];
    }
    prom = suma / 25;
    cout << "El promedio de estatura de una clase de 25 alumnos es:  "<< prom << endl;
    return prom;
}
void arribabajo(float num[], float prom)
{
    int mayor = 0, menor = 0;
    for (int i=0; i<=24; i++) 
    {
        if (num[i] > prom)
        {
            mayor += 1;
        }
        else if (num[i] < prom)
        {
            menor += 1;
        }
    }
        cout << "Cantidad de estaturas que estan arriba de la media: \n" << mayor << endl;
        cout << "Cantidad de estaturas que estan abajo de la media: \n" << menor << endl;
}

int main()
{
    float num[25], prom;
    int mayor = 0, menor = 0;
    cout << "Se calcula el promedio de la altura de 25 alumnos"<< endl;
    for (int i=0; i<=24; i++)
    {
        cout<<"Digite la medida de la posicion ["<<i<<"]: "<<endl;
        cin>>num[i];
    }
    prom = calculo(num);
    arribabajo(num, prom);
    return 0;
}