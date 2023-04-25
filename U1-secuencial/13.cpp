/* 13) Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.*/

#include <iostream>
using namespace std;

int main () {
  int monto, billetes_1000, billetes_500, billetes_200, billetes_100;

  cout << "Bienvenido al cajero automatico" << endl;
  cout << "Ingrese el monto a retirar " << endl;
  cin >> monto;

  // Calculo la cantidad de billetes de $1000
  billetes_1000 = monto / 1000;
  monto = monto % 1000;

  // Calculo la cantidad de billetes de $500
  billetes_500 = monto / 500;
  monto = monto % 500;

  // Calculo la cantidad de billetes de $200
  billetes_200 = monto / 200;
  monto = monto % 200;

  // Calculo la cantidad de billetes de $100
  billetes_100 = monto / 100;
  monto = monto % 100;

  cout << billetes_1000 << " billetes de $1.000 " << endl;
  cout << billetes_500 << " billetes de $500 " << endl;
  cout << billetes_200 << " billetes de $200 " << endl;
  cout << billetes_100 << " billetes de $100 " << endl;

  cout << endl << endl;
  return 0;
}

