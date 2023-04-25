/* 6) Hacer un programa para ingresar por teclado tres números 
    y luego determinar e informar con una leyenda aclaratoria
    si los tres son iguales entre sí, 
    caso contrario no emitir nada. 

Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>
using namespace std;

int main () {
  int number1, number2, number3;
  
  cout << "Ingrese tres numeros " << endl;
  cin >> number1;
  cin >> number2;
  cin >> number3;

  if ( number1 == number2 && number2==number3 ) {
    cout << "Los tres numeros ingresados son iguales" << endl ;
  } else {
  return 0;
  }
  
  return 0;
 }