#include <iostream>
using namespace std;
#include "../Headers/matematica.h"

/*
Suma los dos numeros que recibe como parametro y devuelve el resultado de la suma
*/

int sumar(int num1, int num2) {
  int resultado;
  resultado = num1 + num2;
  return resultado;
}

/*
Divide el primer numero que recibe como parametro por el segundo y devuelve el resultado de la division
ATENCION: No contempla la division por cero
*/
float dividir(int num1, int num2) {
  float resultado;
  resultado = (float)num1 / (float)num2;
  return resultado;
}

/*
Saludar es una function que saluda
*/
void saludar() {
  cout << "Bienvenido a mi programa hecho con funciones" << endl;
}
