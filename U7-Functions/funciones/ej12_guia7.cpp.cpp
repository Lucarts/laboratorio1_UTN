/* Ejercicio 12) guia 7 NUMEROS PRIMOS SOPHIE GERMAIN
Hacer una función que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.

NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.

Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

*/

// Matriz sophie Germainian

#include <iostream>
using namespace std;

int esPrimoSophieGermain(int array[], int arrayLength);
int esPrimo(int num1);

int main() {
  int arrayTesteo[] = {7, 2};

  cout << (esPrimoSophieGermain(arrayTesteo, 2)) << endl;
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

int esPrimoSophieGermain(int array[], int arrayLength) {
  int counterSophies = 0;

  for (int i = 0; i < arrayLength; i++) {
    int numeroSophieGermain = (2 * array[i]) + 1;
    if (esPrimo(array[i]) && esPrimo(numeroSophieGermain)) {
      counterSophies++;
    }
  }

  return (counterSophies == arrayLength);
}