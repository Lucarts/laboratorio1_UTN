/* Ejercicio 1)  
Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

#include <iostream>
using namespace std;
int LONGITUD_MATRIZ = 10;

int main() {
  int matrizNumeros[10]{};

  // Pido al user que ingrese los 10 numeros
  for (int i = 0; i < LONGITUD_MATRIZ; i++) {
    cout << "Ingrese una lista de 10 numeros 1enteros: ";
    cin >> matrizNumeros[i];
  }

  // Muestro solamente los numeros positivos
  cout << "Los numeros positivos ingresados fueron: " << endl;

  for (int j = 0; j < LONGITUD_MATRIZ; j++) {
    if (matrizNumeros[j] > 0) {
      cout << matrizNumeros[j] << "  ";
    }
  }

  cout << endl;
  return 0;
}