/* 5) Un negocio de perfumería efectúa descuentos según el importe de la venta. 
  - Si el importe es menor a $100 aplicar un descuento del 5% 
  - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% 
  - Si el importe es mayor a $500 aplicar un descuento del 15% 

  Hacer un programa donde se ingresa el importe original sin descuento
  y que se informe por pantalla el importe con el descuento ya aplicado.
*/

#include <iostream>
using namespace std;

int main () {
  int amount, discount, netAmount;
  
  cout << "Ingrese el importe original sin descuento " << endl;
  cin >> amount;

  if (amount < 100)
  {
    discount = 5;
  } else
  {
    if (amount < 500)
    {
      discount = 10;
    } 
    else {
      discount = 15;
    }
  }
  
  netAmount = ((100-discount) * amount ) / 100;

  cout << "El importe neto es de " << netAmount << endl ;
  cout << endl<< endl;
  return 0;
}