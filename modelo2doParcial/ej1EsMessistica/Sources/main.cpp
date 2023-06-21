/* Primer Ejercicio -> Es MESSISTICA
Una matriz es Messistica si es una matriz de enteros de 10x10, en todas sus filas hay por lo menos un elemento con el valor 10 y la suma de todos los elementos de al menos una fila da como resultado el valor 10.

Hacer una función llamada EsMessistica que reciba una matriz de 10x10 y devuelva true si la matriz recibida es Messistica o false si no lo es.

NOTA: No deben entregar la función main para este problema. La función EsMessistica sólo debe calcular la condición de la matriz, no debe solicitar al usuario ningún dato ni mostrar por pantalla ninguna información.

*/

#include <iostream>
using namespace std;
#include "../Headers/EsMessistica.h"

int main() {

  int matrizPrueba[10][10] = {
      {10, 0, 10, 0, 10, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {9, 1, 0, 0, 0, 0, 0, 10, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  bool resultado = EsMessistica(matrizPrueba);

  cout << "LA MATRIZ PRESENTADA ES MESSISTICA:" << endl;
  cout << "\t" << resultado << endl;

  return 0;
}