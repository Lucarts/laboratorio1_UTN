/* 2) Hacer un programa para ingresar por teclado dos números y
      luego informar por pantalla con un cartel aclaratorio
      si el primer número es múltiplo del segundo
*/
#include <iostream>
using namespace std; 
#include <cmath>

int main () {
  int number1, number2;

  cout << "Ingrese dos numeros" << endl;
  cin >> number1;
  cin >> number2;

  if (( (number1 % number2) == 0))
  {
    cout << "El numero " << number1 << " es multiplo de " << number2 <<  endl ;
  }
   
    cout << "Los numeros ingresados no son multiplos" <<  endl ;
 
  
  cout << endl << endl;

  return 0;
}
