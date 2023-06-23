/* Primer Ejercicio -> Es MESSISTICA
Una matriz es Messistica si:
- es una matriz de enteros de 10x10, //ok porque lo recibo como parametro
- en todas sus filas hay por lo menos un elemento con el valor 10 y
- la suma de todos los elementos de al menos una fila da como resultado el valor 10.

Hacer una función llamada EsMessistica que reciba una matriz de 10x10 y devuelva true si la matriz recibida es Messistica o false si no lo es.

NOTA: No deben entregar la función main para este problema. 

La función EsMessistica sólo debe calcular la condición de la matriz, no debe solicitar al usuario ningún dato ni mostrar por pantalla ninguna información.
*/

#include <iostream>
using namespace std;

bool EsMessistica(int matriz[10][10]);

int main() {

  int matrizPrueba[10][10] = {
      {10, 0, 10, 0, 10, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {9, 1, 0, 0, 0, 10, 0, 1, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {10, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  bool resultado = EsMessistica(matrizPrueba);

  cout << "\t- LA MATRIZ PRESENTADA ES MESSISTICA:" << resultado << endl;

  return 0;
}

bool EsMessistica(int matriz[10][10]) {
  bool hayFilaQueSuma10 = false;
  bool hayUnDiegoEnLaFila;
  int counterFilasMessisticas = 0;
  int accumulatorValores;

  for (int i = 0; i < 10; i++) {
    hayUnDiegoEnLaFila = false;
    accumulatorValores = 0;

    for (int j = 0; j < 10; j++) {
      accumulatorValores += matriz[i][j];
      if (matriz[i][j] == 10) {
        hayUnDiegoEnLaFila = true;
      }
    }
    if (hayUnDiegoEnLaFila) {
      counterFilasMessisticas++;
    }

    if (accumulatorValores == 10) {
      hayFilaQueSuma10 = true;
    }
  }

  return (counterFilasMessisticas == 10 && hayFilaQueSuma10);
}