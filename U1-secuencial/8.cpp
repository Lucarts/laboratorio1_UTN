/* 8) Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.*/

#include <iostream>
using namespace std;

int main (){
  float totalVenta, descuento, totalDescontado;

  cout << "Ingrese el Importe de la venta " << endl;
  cin >> totalVenta;

  cout << "Ingrese el total de la venta con el descuento aplicado: " << endl ;
  cin >> totalDescontado;

  descuento = (((totalVenta-totalDescontado) / totalVenta) * 100);

  cout << "El descuento aplicado es de " << descuento << "%"<< endl << endl;

  return 0;
}

