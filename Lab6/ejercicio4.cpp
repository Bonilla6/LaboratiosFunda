#include <iostream>

using namespace std;

void leer(int arreglo[], int numero)
{
    for (int i=0; i<numero; i++)
    {
        cout<<"Digite los datos de la posicion ["<<i<<"]: "<<endl;
        cin>>arreglo[i];
    }
}

void sumar(int arreglo[], int arreglo2[],int numero, int total[])
{
    for(int i=0; i<numero; i++)
    {
        total[i]=arreglo[i]+arreglo2[i];
    }
}

void resultadofinal(int resultado[], int numero)
{
    for(int i=0; i<numero; i++)
    {
        cout<<"La suma de los arreglos en la posicion ["<<i<<"] es: "<<resultado[i]<<endl; 
    }
}

int main()
{
    int arreglo1[100], arreglo2[100], resultado[100], tamanio;

    cout << "Ingrese de cuanto quiere sus arreglos: ";
    cin >> tamanio;

    cout << "Ingrese los datos de su primer arreglo, con su orden respectivo:" << endl;
    leer(arreglo1,tamanio);

    cout << "Ingrese los datos de su segundo arreglo, con su orden respectivo" << endl;
    leer(arreglo2,tamanio);

    sumar(arreglo1,arreglo2,tamanio,resultado);

    resultadofinal(resultado,tamanio); 

    return 0;
}