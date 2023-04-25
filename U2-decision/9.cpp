//9) Hacer un programa para ingresar tres números y listar el máximo de ellos.
 
#include <iostream>
using namespace std;

int main () {
  int num1, num2, num3, max;
  
  cout << "Ingrese tres numeros" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;

  // Buscar el numero mas grande
  max = num1;

  if (num2 > num1) {
    max = num2;
  } 

  if (num3 > num2) {
      max = num3;
    } 
 
  cout << "El numero mayor es: " << max << endl ;

  cout << endl << endl;
  return 0;
}