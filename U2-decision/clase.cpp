#include <iostream>
using namespace std;

int main () {

  int initialNumber, i;

  cout << "Ingrsar un numero inicial: ";
  cin >> initialNumber;

  for ( i = initialNumber; i >= 0 ; i--)
  {
    cout << i << endl;
  }

  return 0;
}