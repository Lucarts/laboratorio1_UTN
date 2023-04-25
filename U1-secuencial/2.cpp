#include <iostream>

using namespace std;

int main () {
  int num1, num2, swap;

  cout << "Por favor ingrese dos numeros" << endl;
  cin >> num1 >> num2;

  swap = num1;
  num1 = num2;
  num2 = swap;

  cout << num1 << endl << num2 << endl;

    return 0;
}
