/* 7) Hacer un programa para ingresar por teclado tres números
      e informar con una leyenda aclaratoria si los tres son todos
      distintos entre sí, caso contrario no emitir nada. 

Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
*/

#include <iostream>
using namespace std;

int main () {
  int number1, number2, number3;
  
  cout << "Ingrese tres numeros " << endl;
  cin >> number1;
  cin >> number2;
  cin >> number3;

  if ( number1 != number2 && number2 != number3 && number1 !=number3) {
    cout << "Los tres numeros ingresados son diferentes" << endl ;
  } else {
  return 0;
  }
  
  return 0;
 }