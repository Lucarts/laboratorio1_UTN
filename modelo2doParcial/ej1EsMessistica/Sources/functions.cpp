#include <iostream>
using namespace std;

#include "../Headers/EsMessistica.h"

// Implementacion de la function EsMessistica:
// en todas sus filas hay por lo menos un elemento con el valor 10 y la suma de todos los elementos de al menos una fila da como resultado el valor 10.

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

bool EsMessistica(int matriz[10][10]) {

  int i, j;
  int accumulatorDeLaFila;
  bool hayUnElementoConValor10;
  bool alMenosUnaFilaAcumula10 = false;
  int filasMessisticas = 0;

  for (i = 0; i < 10; i++) {
    hayUnElementoConValor10 = false;
    accumulatorDeLaFila = 0;

    for (j = 0; j < 10; j++) {
      accumulatorDeLaFila += matriz[i][j];
      if (matriz[i][j] == 10) {
        hayUnElementoConValor10 = true;
      }
    }

    if (hayUnElementoConValor10) {
      filasMessisticas++;
      if (accumulatorDeLaFila == 10) {
        alMenosUnaFilaAcumula10 = true;
      }
    } else
      return false;

    cout << "\n\n\t CANTIDAD DE FILAS MESISTICAS: " << filasMessisticas;
    cout << "\n\n\t HAY ALGUNA FILA CON VALOR 10: " << alMenosUnaFilaAcumula10;
    cout << "\n\n\t ACUMULADOR DE LA FILA " << accumulatorDeLaFila;
    cout << "\n\t _____________________________________ \n";
  }

  bool result;

  if (alMenosUnaFilaAcumula10 && filasMessisticas == 10) {
    result = true;
  } else {
    result = false;
  }

  return result;
}
