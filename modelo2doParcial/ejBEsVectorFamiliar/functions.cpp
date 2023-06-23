/* Modelo de Segundo parcial Problema 1 - 25p

Un vector de números enteros es Familiar si todos los elementos que lo componen son números primos. Hacer una función llamada EsVectorFamiliar que reciba dos parámetros: un vector de números enteros y un número entero que corresponde al tamaño del vector. 

La función debe devolver true si el vector es Familiar o false en caso contrario.
Aclaración: La función debe llamarse como se indica en el enunciado. 
La función no debe solicitar ningún dato al usuario ni mostrar ninguna información por pantalla. 
No deberá entregarse la función main para este problema. Pueden utilizarse funciones auxiliares si las necesitan.
Definición de número primo: En matemáticas, un número primo es un número natural mayor que 1 que tiene únicamente dos divisores positivos distintos: él mismo y el 1.

*/

#include <iostream>
using namespace std;

bool esPrimo(int numero);
bool EsVectorFamiliar(int array[], int arrayLength);

int main() {

  int arrayPrimos[3] = {4, 3, 5};

  bool esArrayPrimo = EsVectorFamiliar(arrayPrimos, 3);

  cout << "\n\t - El vector es primo : " << esArrayPrimo;

  cout << endl;
  return 0;
}

bool EsVectorFamiliar(int array[], int arrayLength) {
  int i, j, contadorPrimos = 0;

  for (i = 0; i < arrayLength; i++) {
    if (esPrimo(array[i])) {
      contadorPrimos++;
    }
  }

  return (contadorPrimos == arrayLength);
}

bool esPrimo(int numero) {
  int i, contador = 0;

  if (numero <= 1) {
    return false;
  }

  for (i = 1; i <= numero; i++) {
    if (numero % i == 0) {
      contador++;
    }
  }

  return (contador == 2);
}