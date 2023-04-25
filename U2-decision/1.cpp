/* 1) Hacer un programa para ingresar por teclado un número
 y luego emitir por pantalla un cartel aclaratorio
indicando si el mismo es positivo, negativo o cero.
*/

#include <iostream>
using namespace std; 

#include <cmath>

int main () {
  float number;

  cout << "Ingrese un numero" << endl;
  cin >> number;

  if (number > 0)
  {
    cout << "El numero es positivo" << endl ;
  }
  else if (number < 0)
  {
    cout << "El numero es positivo" << endl ;
  }
  else
  {
    cout << "El numero es cero" << endl ;
  }
    
  
  cout << endl << endl;

  return 0;
}