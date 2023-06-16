#include <iostream>
using namespace std;
#include "../Headers/matematica.h"

int sumar(int a, int b) {
  int resultado;
  resultado = a + b;
  return resultado;
}

int main() {
  int n1, n2, resultado;
  float resultadoDivision;

  n1 = 10;
  n2 = 50;

  // saludar();

  resultado = sumar(n1, n2);
  cout << "El resultado de la suma es de : " << resultado << endl;

  dividir(n1, n2);
  cout << "El resultado de la division es de : " << resultadoDivision << endl;

  return 0;
}
