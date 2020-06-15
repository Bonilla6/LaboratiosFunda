#include "iostream"
#include "cmath"
using namespace std;

int mcd(int num1, int num2)
{
 int resid;
   if(num1>num2) 
   {
      do
     {
        resid = num1 % num2; 
        if (resid != 0)
        {
          num1 = num2;
          num2 = resid;
        }
     } while (resid != 0);
     cout << "El MCD es:" << num2 << endl;
    }
    else
    {
      do
     {
        resid = num2 % num1;
        if (resid != 0)
        {
          num2 = num1;
          num1 = resid;
        }
     } while (resid != 0);
     cout << "El MCD de los numeros ingresados es:" << num1 << endl;
    }
     
  return 0;
  
}

int main(void)
{
  int n1, n2;
    
  cout << "Digite su numero" << endl;
  cin >> n1;
  cout << endl << "Digite su segundo numero" << endl;
  cin >> n2;
  mcd(n1, n2);

 return 0;   
    
}