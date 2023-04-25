/* 9) Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.*/

#include <iostream>
using namespace std;

int main (){
  int minutes, hours, remainder;

  cout << "Ingrese la cantidad de minutos que deseas pasar a horas" << endl;
  cin >> minutes;

  hours = minutes / 60;
  remainder = minutes % 60;

  cout << minutes << " minutos equivalen a: " << endl;
  cout << hours << " Horas. " << endl;  
  cout << remainder << " Minutos. ";  

  cout << endl << endl;
  return 0;
}
