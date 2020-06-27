#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int codigo(char primer[], char segundo[])
{ 
  int i, tamanio;
  tamanio = strlen(primer);
  for (int i = 0; i < tamanio; i++)
  {
    switch (primer[i])
    {
      case 'm' :
      segundo[i] = '0';
      break;
      case 'u' :
      segundo[i] = '1';
      break;
      case 'r' :
      segundo[i] = '2';
      break;
      case 'c' :
      segundo[i] = '3';
      break;
      case 'i' :
      segundo[i] = '4';
      break;
      case 'e' :
      segundo[i] = '5';
      break;
      case 'l' :
      segundo[i] = '6';
      break;
      case 'a' :
      segundo[i] = '7';
      break;
      case 'g' :
      segundo[i] = '8';
      break;
      case 'o' :
      segundo[i] = '9';
      break;
      default:
      segundo[i] = primer[i];
      break;
    }
  }
  cout << "Su frase en clave murcielago" << endl;
  cout << (segundo) << endl;
  return 0;
}


int main()
{
  char oracion[1000], oracion2[100];
  cout << "El programa sustituira su frase en clave murcielago" << endl;
  cout << "Ingrese su frase:" << endl;
  cin.getline(oracion,1000);
  codigo(oracion, oracion2);
}