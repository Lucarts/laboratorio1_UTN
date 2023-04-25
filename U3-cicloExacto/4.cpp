/* 4) Hacer un programa para que el usuario ingrese dos números 
y luego el programa muestre por pantalla los números 
entre el menor y el mayor de ambos. 
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main () {
  int i, num1, num2, max, min;
  cout << "Ingrese dos numeros: " << endl; 
  cin >> num1 ;
  cin >> num2 ;

  cout << "----------" << endl;

  min = num1;

  if (num1 > num2) {
    max = num1;
    min = num2;
  } else {
    max = num2;
  }

  for (i = max; i >= min; i--) {
    cout << i << endl;
  }

  cout << endl << endl;
  return 0;
}