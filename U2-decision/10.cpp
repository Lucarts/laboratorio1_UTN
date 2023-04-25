// 10) Hacer un programa para ingresar cinco números y listar el máximo de ellos.

#include <iostream>
using namespace std;

int main () {
  int num1, num2, num3, num4, num5, max;
  
  cout << "Ingrese cinco numeros" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;
  cin >> num5;

  // Buscar el numero mas grande
  max = num1;

  if (num2 > max) {
    max = num2;
  } 

  if (num3 > max) {
      max = num3;
  } 
    
  if (num4 > max) {
      max = num4;
  } 
    
  if (num5 > max) {
      max = num5;
  } 

  cout << "El numero mayor es: " << max << endl ;

  cout << endl << endl;
  return 0;
}