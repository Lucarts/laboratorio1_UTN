/* 5) Hacer un programa para ingresar un N valor 
que indica la cantidad de números que componen una lista 
y luego solicitar se ingresen esos N números. 

Se pide informar cuantos son positivos
*/

#include <iostream>
using namespace std;

int main () {
  int i, N, n, counter = 0;
  cout << "Ingrese N valor: " << endl; 
  cin >> N;

  cout << "----------" << endl;

  for (i=0; i < N ; i++) {
    cout << "Ingrese un valor: ";
    cin >> n;

    if ( n > 0 ){
      counter ++;
    }
  }
  cout << "La cantidad de valores positivos ingresados fue de: " << counter;
  cout << endl << endl;
  return 0;
}