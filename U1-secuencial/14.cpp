/* 14) Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.*/

#include <iostream>
using namespace std;

int main () {

  float importeCompra, descuento, importeACobrar, descuentoAplicado;

  cout << "Ingrese el Importe de la compra " << endl;
  cin >> importeCompra;

  cout << "Ingrese el total del descuento a aplicar: " << endl ;
  cin >> descuento;

  importeACobrar =(importeCompra * (100 - descuento) / 100);
  descuentoAplicado = importeCompra - importeACobrar;

  cout << "El importe sin descuento es de $" << importeCompra << endl;
  cout << "El descuento aplicado es de $" << descuentoAplicado << endl;
  cout << "El importe total a cobrar es de $" << importeACobrar << endl << endl;

  return 0;
}

