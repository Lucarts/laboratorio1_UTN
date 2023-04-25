/* 14) Un año es bisiesto si es múltiplo de 4, 
exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. 
Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es. 
Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es. 
*/

#include <iostream>
using namespace std;

int main () {
  int year;
  bool isLeapYear = false;
  
  // Console in the Year
  cout << "Ingrese el anio" << endl;
  cin >> year;

  // Calculate if the year entered is a Leap Year
  if (year % 4 == 0)
  {
    isLeapYear = true;
    if (year % 100 == 0 && year % 400 != 0)
    {
      isLeapYear = false;
    }
  }
  
  if (isLeapYear)
  {
  cout << "El " << year <<  " es biciesto" << endl ;
  } 
  else
  {
  cout << "El " << year <<  " no es biciesto" << endl ;
  }

  cout << endl << endl;
  return 0;
}