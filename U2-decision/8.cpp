/* 8) Basado en los 2 ejercicios anteriores, 
  hacer un programa para ingresar por teclado 
  la longitud de los tres lados de un triángulo 
  y luego listar que tipo de triángulo es: 

  - Equilátero: si los tres lados son iguales.
  - Isósceles: si dos de los tres lados son iguales.
  - Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;

int main () {
  int lado1, lado2, lado3;
  
  cout << "Ingrese los tres lados de un triangulo" << endl;
  cin >> lado1;
  cin >> lado2;
  cin >> lado3;

// Verificar si es equilátero: tres lados iguales.
if ( lado1 == lado2 && lado2==lado3 ) {
    cout << "Es un triangulo equilatero: los 3 lados son iguales" << endl ;
  } 

// Verificar si es Isósceles: dos lados iguales.
  if ( lado1 == lado2 && lado2 != lado3 ) {
    cout << "Es un triangulo Isósceles: dos lados iguales" << endl ;
  } 

// Verificar si es Escaleno: tres lados distintos.
  if ( lado1 != lado2 && lado2 != lado3 && lado1 !=lado3) {
    cout << "Es un triangulo Escaleno: tres lados distintos" << endl ;
  } 

  return 0;
 }