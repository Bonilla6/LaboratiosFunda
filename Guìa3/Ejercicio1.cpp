#include <iostream>
using namespace std;
int main()
{
    float numero1;
    int numero2;
    float numero3;
    float promedio;

    cout << "Ingrese su primer numero entero:" << endl;
    cin >> numero1;

    cout << "Ingrese su segundo numero entero:" << endl;
    cin >> numero2;

    cout << "Ingrese su tercer numero entero:" << endl;
    cin >> numero3;

    promedio = (numero1 + numero2 + numero3)/3; 

    cout << "Su promedio es:"<<promedio << endl;

    return 0;
}