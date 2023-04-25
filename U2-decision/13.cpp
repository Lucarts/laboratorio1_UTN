/* 13) Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, 
ingresando día, mes y año como 3 datos individuales. 
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. 
Calcular luego la edad en años de esa persona y listarlo por pantalla. 
*/

#include <iostream>
using namespace std;

int main () {
  int dNacimiento, mNacimiento, aNacimiento, dActual, mActual, aActual, edad;
  
  // Ingresan dd/mm/aaaa de nacimiento
  cout << "Ingrese el dia de nacimiento" << endl;
  cin >> dNacimiento;
  cout << "Ingrese el mes de nacimiento" << endl;
  cin >> mNacimiento;
  cout << "Ingrese el anio de nacimiento" << endl;
  cin >> aNacimiento;

  // Ingresan dd/mm/aaaa actual
  cout << "Ingrese el dia Actual" << endl;
  cin >> dActual;
  cout << "Ingrese el mes Actual" << endl;
  cin >> mActual;
  cout << "Ingrese el anio Actual" << endl;
  cin >> aActual;

  // Calculo la edad de la persona
  edad = aActual - aNacimiento;

  if (mActual >= mNacimiento) 
  {
   if (dActual >= dNacimiento) {
    cout << "La edad de la persona es de " << edad <<  " Anios" << endl ;
    } else
    {
      edad -= 1;
    }
  } else 
    {  
      edad -= 1;
    }

  cout << "La edad de la persona es de " << edad <<  " Anios" << endl ;

  cout << endl << endl;
  return 0;
}