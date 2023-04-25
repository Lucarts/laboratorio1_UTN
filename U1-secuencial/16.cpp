#include <iostream>
using namespace std;

int main () {
  char A, letra;
  int diferencia;

  A = 'a';

  cout << "Ingrese una letra del abecedario" << endl;
  cin >> letra;
  cout << endl;

  diferencia = letra - A;

  cout << "Hay " << diferencia << " letras de diferencia entre la letra '" << letra << "' y la '" << A << "'." << endl << endl;
  
  return 0;
}