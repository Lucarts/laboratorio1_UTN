/* 3) Hacer un programa para ingresar por teclado un número y 
      luego informar por pantalla con un cartel aclaratorio 
      si el mismo es par o impar.
*/

#include <iostream>
using namespace std; 
#include <cmath>

int main () {
  int number;

  cout << "Ingrese un numero" << endl;
  cin >> number;

  if (( (number % 2) == 0))
  {
    cout << "El numero " << number << " es par" << endl ;
  }
    cout << "El numero " << number << " es impar" << endl ;
   
  cout << endl << endl;

  return 0;
}
