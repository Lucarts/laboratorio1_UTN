/* 4) Hacer un programa para ingresar por teclado dos números 
      y luego informar por pantalla la diferencia absoluta 
      entre ambos.
*/

#include <iostream>
using namespace std; 
#include <cmath>

int main () {
  int number1, number2, absolute;

  cout << "Ingrese dos numeros" << endl;
  cin >> number1;
  cin >> number2;

  absolute = number1-number2;

  if ( absolute < 0 )
  {
    absolute = absolute * (-1);
  }

  cout << "El valor absoluto entre " << number1 << " y " << number2 << " es :" << endl;
  cout << absolute;
   
  cout << endl << endl;

  return 0;
}
