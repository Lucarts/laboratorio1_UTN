#include <iostream>

using namespace std;


int main () {
  int sueldoFijo, premio, qautosVendidos;

  sueldoFijo = 15000;
  premio = 2000;

  cout << "Ingrese la cantidad de autos vendidos" << endl;
  cin >> qautosVendidos;

  cout << "Sueldo total a pagar: $" << (sueldoFijo + premio * qautosVendidos) << endl << endl ;


  return 0;
}