/* 1) Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo. Caso contrario debe devolver falso.
*/

#include <iostream>
using namespace std;

bool esMultiplo(int num1, int num2) {
  return (num1 % num2 == 0);
}

int main() {
  cout << (esMultiplo(7, 4)) << endl;
  return 0;
}
