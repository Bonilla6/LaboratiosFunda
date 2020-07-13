#include <iostream>
#include <string>
#include <string.h>

const int longCad = 20;

using namespace std;

struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};


void datos (costoPorArticulo cant[], int n)
{
    string art;
    for (int i = 0; i < n; i++)
    {
        cout << "Digite el nombre del articulo: " << endl;
        getline(cin, art, '\n');
        strncpy(cant[i].nombreArticul, art.c_str( ), longCad);
        cant[i].nombreArticul[longCad]='\0';
        cout << "Ingrese la cantidad de " << art << ":" << endl;
        cin >> cant[i].cantidad;
        cout << "Ingrese el costo unitario " << endl;
        cin >> cant[i].precio;
        cin.ignore(100, '\n'); 
    }
    
}
float costo(costoPorArticulo cant[], int n)
{
   for (int i = 0; i < n; i++)
   {
       cant[i].costoPorArticulo = cant[i].precio * cant[i].cantidad;
    }
  
}
void mostrar(costoPorArticulo cant[], int n)
{
    cout << "Usted lleva la cantidad de " << n << " productos difentes" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Usted lleva: " << cant[i].cantidad <<  cant[i].nombreArticul << endl;
    }
    
}
float total(costoPorArticulo cant[], int n)
{
    float total;
    total = 0;
    for (int i = 0; i < n; i++)
    {
      total = cant[i].costoPorArticulo + total;
    }
     
    return total;
}

int main ()
{
    int n; 
    cout << "Bienvenido a nuestra tienda" << endl;
    cout << "Ingrese la cantidad de los los diferentes articulos por llevar: " << endl;
    cin >> n;
    cin.ignore(100, '\n');   
    costoPorArticulo cant[n];
    datos(cant, n);
    costo(cant, n);
    mostrar(cant, n);
    cout << "Su total a pagar es: " << total(cant, n) << endl;
    return 0;
}