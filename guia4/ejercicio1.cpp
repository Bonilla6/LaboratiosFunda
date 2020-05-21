#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Ingrese numero 1 y numero 2";
    cin >>num1>>num2;
    if ((num1 % num2) == 0)
    {
        cout << "El numero es divisible";
    }else{
        cout << "El numero no es divisible";
    }

    return 0;
 
}
