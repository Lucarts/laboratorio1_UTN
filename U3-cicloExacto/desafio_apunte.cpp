// Puntualmente te pidió que puedas ingresar un número entre 1 y 15 y dibuje por pantalla las tablas de dicho número desde el 0 hasta el 10 inclusive.

#include <iostream>
using namespace std;

int main () {
  int numero, i;
  cout << "Ingrese un numero entre 0 y 15: ";
  cin >> numero;
  
  // Valido que el numero este entre 0 y 15
  while (numero < 0 || numero > 15){
    cout << "Ingrese un numero entre 0 y 15: ";
    cin >> numero;
  }
  
  cout << endl;
  cout << "Tabla del " << numero << endl;

  for (i = 1; i <= 10; i++) {
    cout << numero << " x " << i << " = " << numero * i << endl;
  }
  
  cout << endl << endl;
  return 0;
}