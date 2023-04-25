/* 16) Hacer un programa para ingresar por teclado cuatro números. 
Si los valores que se ingresaran están ordenados en forma creciente, 
emitir el mensaje “Conjunto Ordenado”, caso contrario 
emitir el mensaje: “Conjunto Desordenado”. 

Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados. 
Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados. 
Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

*/

#include <iostream>
using namespace std;

int main () {
  int num1, num2, num3, num4, i;
  string message;

  cout << "Ingrese 4 numeros" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;

  if (num1 <= num2) {
    if (num2 <= num3) {
      if (num3 <= num4) {
        message = "Conjunto Ordenado";
      } else {
        message = "Conjunto Desordenado";
      }
    } else {
      message = "Conjunto Desordenado";
    }
  } else {
    message = "Conjunto Desordenado";
  }
  
  cout << message;

  cout << endl << endl;
  return 0;
}

