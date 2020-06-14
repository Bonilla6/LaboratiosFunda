#include "iostream"
using namespace std;

int ruleta(int num)
{
  int numz, contador=1; 
  numz = rand()%101-1; //Generador de un numero random
  do 
 {
    if(num>numz) //pistas por si el numero ingresado es mayor
    {
    
      cout << "El numero escogido es mayor al numero magico" << endl;
      contador++;
      cout << "El numero de intento es el " << contador << endl;
      cout << "Ingrese otro numero" << endl;
      cin >> num;

    }
      else if(num < numz) // pistas por si el numero ingresado es menor
      {   
        
        cout << "El numero es menor al numero magico" << endl;
        contador++;
        cout << "El numero de intento es el " << contador << endl;
        cout << "Ingrese otro numero " << endl;
        cin >> num;
      }   
      else if (numz=num) //por si el numero ingresado es el mismo
      {
        cout << "Felicitaciones, adivinaste el numero" <<endl;
        contador<=4;
      } 
    }

  while(contador<=4 && num != 101);
  
}

int main ()
{

 int numz, num, contador = 0, salir= 101;

 cout << "Tienes que adivinar el numero magico" << endl;
 // Indicaciones para el usuario
 cout << "Solo tienes 5 oportunidades para adivinarlo" << endl << "Tu numero tiene que estar entre 1 y 100" << endl;     
 cout << "si desea abandonar el juego digite: 101" << endl;
 cin >> num;
 ruleta(num);
 if (num!=numz)
 {
   cout <<"Intentalo otra vez" ;
 }
 return 0;  
}