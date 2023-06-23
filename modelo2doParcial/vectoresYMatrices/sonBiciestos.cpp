/* Ejercicio extra array. BICIESTOS

Un vector de números enteros es biciesto si todos los elementos que lo componen lo son.

Los años bisiestos son los divisibles entre 4 (como 2004, 2008, etc.) excepto si es divisible entre 100, 


Hacer una función llamada sonTodosBiciestos que reciba dos parámetros: un vector de números enteros y un número entero que corresponde al tamaño del vector. 

La función debe devolver true o false.

Aclaración: La función debe llamarse como se indica en el enunciado. 
La función no debe solicitar ningún dato al usuario ni mostrar ninguna información por pantalla. 
No deberá entregarse la función main para este problema. Pueden utilizarse funciones auxiliares si las necesitan.

*/

#include <iostream>
using namespace std;

bool esBiciesto(int year);
bool SonTodosBiciestos(int years[], int arrayLength);

int main() {

  int arrayYears[3] = {2000, 2008, 2012};

  cout << "\nTODOS SON LEAP YEARS: " << SonTodosBiciestos(arrayYears, 3) << endl;
  cout << endl;
  return 0;
}

bool SonTodosBiciestos(int years[], int arrayLength) {
  int counterBiciestos = 0;

  for (int i = 0; i < arrayLength; i++) {
    if (esBiciesto(years[i])) {
      counterBiciestos++;
    }
  }

  return (counterBiciestos == arrayLength);
}

// Los años bisiestos son los divisibles entre 4 (como 2004, 2008, etc.) excepto si es divisible entre 100,
bool esBiciesto(int year) {
  return (year % 100 != 0 && year % 4 == 0);
}