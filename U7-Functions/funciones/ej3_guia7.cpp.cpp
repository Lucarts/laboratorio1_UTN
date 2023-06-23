/* Ejercicio 3) guia 7 NUMEROS PRIMOS
Hacer una función que reciba un número entero como parámetro y devuelva verdadero si el mismo es un número primo. De lo contrario debe devolver falso.
*/

#include <iostream>
using namespace std;

int esPrimo(int num1);

int main() {
  cout << (esPrimo(1)) << endl;
  return 0;
}

int esPrimo(int num1) {
  if (num1 < 2) {
    return 0;
  }

  for (int i = 2; i < num1; i++) {
    if (num1 % i == 0) {
      return 0;
    }
  }

  return 1;
}