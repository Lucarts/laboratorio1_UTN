#include <iostream>
using namespace std;

#include <cstdlib>

int main () {
  int number;

  cout << "Insert your number";
  cout << endl;
  cin >> number;

  if (number > 0)
  {
    cout << "el numero ingresado es positivo";
  } 
  else
  {
    if (number < 0)
    {
      cout << "el numero ingresado es negativo";
    }
    else {
      cout << "el numero ingresado es 0";
    }
  
  }
  
  
  cout << endl << endl;
  return 0;
}