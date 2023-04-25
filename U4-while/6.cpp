/* 6) Hacer un programa que permita ingresar
una lista de números positivos, negativos o cero
hasta que se ingrese el 5º número par.

Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.
*/

#include <iostream>
using namespace std;

int main () {
  int num, counter = 0, qPares = 0, qTernas = 0;
  bool racha = false;

  while (qPares < 5){
    cout << "Ingrese una lista de numeros positivos, negativos o cero: " ;
    cin >> num;

    if (num % 2 == 0) {
      qPares++;
    }

    if (num < 0) {
      racha = true;
      counter ++;
      if (counter == 3) {
        qTernas++;
        counter = 0;
      }
    } else {
      racha = false;
      counter = 0;
    }
  }

  cout << endl << endl;
  cout << "Cantidad de ternas negativas: " << qTernas;
  cout << endl << endl;

  return 0;
}