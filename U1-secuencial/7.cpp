/* 7) Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar*/

#include <iostream>
using namespace std;

int main () {
  float totalVenta, descuento, totalDescontado;

  cout << "Ingrese el Importe de la venta " << endl;
  cin >> totalVenta;

  cout << "Ingrese el porcentage de descuento a aplicar: " << endl ;
  cin >> descuento;

  totalDescontado = (((100 - descuento) * totalVenta) / 100);

  cout << "El importe a pagar es de $" << totalDescontado << endl << endl;
  
  return 0;
}