#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float radio;
    float perimetro;
    float area;
    float Pi = 3.1416;

    cout << "Ingrese el radio del circulo:" << endl;
    cin >> radio;
    
    area = pow( radio, 2)*Pi;
    cout << "El area del circulo es:" <<area << endl;

    perimetro = 2*(radio*Pi);
    cout << "El perimtetro del circulo es:" <<perimetro << endl;

    return 0;

}