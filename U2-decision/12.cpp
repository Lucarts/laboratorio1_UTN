/* 12) Hacer un programa para leer tres números diferentes 
y determinar e informar el número del medio. 
Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.
*/

#include <iostream>
using namespace std;

int main () {
  int num1, num2, num3, medio;
  
  cout << "Ingrese tres numeros" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;

  // Calcular el numero del medio
  medio = num1;

  if (num2 > num1 && num2 < num3)
  {
    medio = num2;
  }
  
  if (num3 < num2 && num3 > num1)
  {
    medio = num3;
  }
 
  cout << "El numero del medio es : " << medio << endl ;

  cout << endl << endl;
  return 0;
}