//11) Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.

#include <iostream>
using namespace std;

int main () {
  int num1, num2, num3, num4, num5, counter;
  
  cout << "Ingrese cinco numeros" << endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;
  cin >> num5;

  // crear un contador 
  counter = 0;

  if (num1 > 0) {
    counter++;
  } 
  if (num2 > 0) {
    counter++;
  } 
  if (num3 > 0) {
    counter++;
  } 
  if (num4 > 0) {
    counter++;
  } 
  if (num5 > 0) {
    counter++;
  } 
 
  cout << "La cantidad de numeros positivos ingresados es de : " << counter<< endl ;

  cout << endl << endl;
  return 0;
}