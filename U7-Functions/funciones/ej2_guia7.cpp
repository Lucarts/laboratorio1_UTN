/* Ejercicio 2 guia 7
Hacer una función que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo: 
-	Si recibe 7.78 debe devolver 8.
-	Si recibe 7.48 debe devolver 7.
-	Si recibe 7.5 debe devolver 8.
*/

#include <iostream>
using namespace std;

int redondeo(float num1) {

  int redondeo = (num1 / 1);
  if (num1 - redondeo >= 0.5) {
    return redondeo + 1;
  }
  return redondeo;
}

int main() {
  cout << (redondeo(7.78)) << endl;
  return 0;
}
