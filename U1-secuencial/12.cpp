/* 12) Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
*/

#include <iostream>
using namespace std;

int main () {
  int huevosTotales, qCajas, qHuevosIndividuales, pHuevo, pCaja, totalAPagar;

  pCaja = 100;
  pHuevo = 12;

  cout << "Ingrese la cantidad de huevos a comprar" << endl ;
  cin >> huevosTotales;

  qCajas = huevosTotales / 12;
  qHuevosIndividuales = huevosTotales % 12;

  totalAPagar = qCajas * pCaja + qHuevosIndividuales * pHuevo;

  cout << "El total a pagar es de: $" << totalAPagar;

  cout << endl << endl;

  return 0;
}