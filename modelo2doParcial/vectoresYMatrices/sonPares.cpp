/* Ejercicio extra array.

Un vector de números enteros es pariente si todos los elementos que lo componen son números pares. 

Hacer una función llamada EsPariente que reciba dos parámetros: un vector de números enteros y un número entero que corresponde al tamaño del vector. 

La función debe devolver true si el vector es Pariente o false en caso contrario.

Aclaración: La función debe llamarse como se indica en el enunciado. 
La función no debe solicitar ningún dato al usuario ni mostrar ninguna información por pantalla. 

No deberá entregarse la función main para este problema. Pueden utilizarse funciones auxiliares si las necesitan.

Definición de número par: divisible por 2.

*/

#include <iostream>
using namespace std;

// Funtions declarations;
bool esPar(int numero);
bool EsPariente(int array[], int arrayLength);

int main() {
  int arrayNumeros[4] = {2, 6, 4, 2};
  bool sonPares = EsPariente(arrayNumeros, 4);

  cout << "EL VECTOR ES DE TODOS NUMEROS PARES: " << sonPares << endl;
  return 0;
}

bool EsPariente(int array[], int arrayLength) {
  int contadorPares = 0;

  for (int i = 0; i < arrayLength; i++) {
    if (esPar(array[i])) {
      contadorPares++;
    }
  }
  return (contadorPares == arrayLength);
}

bool esPar(int numero) {
  if (numero < 1) {
    return false;
  }

  if (numero % 2 == 0) {
    return true;
  } else
    return false;
}