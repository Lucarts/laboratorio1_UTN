  /* 17) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
  $ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
  $ 12 por kW por el consumo excedente de 101 a 200 kW. 
  $ 15 por kW por el consumo excedente de 201 kW en adelante.

  Hacer un programa para que, dado el consumo en kilovatios 
  de un determinado cliente, el programa calcule 
  e informe el total a pagar por el mismo. 

  Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550 
  Ejemplo 2: Un consumo de 125 kW, se calculará: $ 10 x 100 + $ 12 x 25 = $1300.
  Ejemplo 3: Un consumo de 250 kW, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950.
*/

#include <iostream>
using namespace std;

int main () {
  int kw, totalAPagar;

  cout << "Consumo de KW : ";
  cin >> kw;

  if (kw >= 100) {
    totalAPagar = 100 * 10;
    cout << " Los primeros 100kw : ";
    cout << totalAPagar << endl << endl;

    if (kw > 100 && kw <= 200 ) {
      totalAPagar += (kw - 100) * 12;
      cout << "Entre 100 y 200 kw:  ";
      cout << totalAPagar << endl << endl;
    } 
    
    if (kw > 200) {
      totalAPagar += (100) * 12;
      totalAPagar += (kw - 200) * 15;
      cout << "Mas de 200 kw:  ";
      cout << totalAPagar << endl << endl;
    }
    
  } else {
    totalAPagar = kw * 10;
  }

  cout << "El total a pagar es de: $ " << totalAPagar;

  cout << endl << endl;

  return 0;
}

