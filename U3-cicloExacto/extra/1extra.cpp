/* 1) Se desea un programa que permita ingresar una cantidad de horas por teclado.
Luego, a partir de las horas ingresadas el sistema debe mostrar por pantalla:
Una D por cada día que se pueda expresar con dicha cantidad de horas.
Una M por cada mes (grupo de 30 días) que se pueda expresar con dicha cantidad de horas.
Una A por cada año (grupo de 365 días) que se pueda expresar con dicha cantidad de horas.

Por ejemplo, si se ingresa 1584 horas el sistema debe indicar:
DDDDDDDDDD
*/

#include <iostream>
using namespace std;

int main () {
  int hours, days, months, years;

  cout << "Ingrese la cantidad de horas a convertir: ";
  cin >> hours;

  days = hours / 24;
  months = days / 30;
  years = days / 365;

  for (int i = 0; i < days; i++) {
    cout << 'D';
  }
  
  for (int i = 0; i < months; i++) {
    cout << 'M';
  }
  
  for (int i = 0; i < years; i++) {
    cout << 'Y';
  }
  
  cout << endl << endl;
  return 0;
}
