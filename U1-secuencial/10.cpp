/* 10) Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen. */

#include <iostream>
using namespace std;

int main () {
  
  int days, minutes, hours;

  cout << "Ingrese la cantidad de horas que deseas pasar a dias" << endl;
  cin >> hours;

  days = hours / 24;
  hours = hours % 24;
  minutes = (hours * 60) % 60;

  cout << minutes << " minutos equivalen a: " << endl;
  cout << days << " Dias. " << endl;  
  cout << hours << " Horas. " << endl;  
  cout << minutes << " Minutos. ";  

  cout << endl << endl;
  
  return 0;
}

