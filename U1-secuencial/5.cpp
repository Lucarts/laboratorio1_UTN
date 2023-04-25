#include <iostream>
using namespace std;

int main () {
  char marcaA, marcaB, marcaC;
  float qvendidosA, qvendidosB, qvendidosC, totalVendidos;

  marcaA = 'A';
  marcaB = 'B';
  marcaC= 'C';

  cout << "Ingrese la cantidad vendida de " << marcaA << endl;
  cin >> qvendidosA;
  
  cout << "Ingrese la cantidad vendida de " << marcaB << endl;
  cin >> qvendidosB;
  
  cout << "Ingrese la cantidad vendida de " << marcaC<< endl;
  cin >> qvendidosC;

  totalVendidos = qvendidosA + qvendidosB + qvendidosC;

  cout << "El porcentaje1 vendido es de:" << endl ;
  cout << marcaA << ":" << qvendidosA/totalVendidos * 100 << "%" << endl;
  cout << marcaB << ":" << qvendidosB/totalVendidos * 100 << "%" << endl;
  cout << marcaC << ":" << qvendidosC/totalVendidos * 100 << "%" << endl;
  
  return 0;
}