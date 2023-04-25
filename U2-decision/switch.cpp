#include <iostream>
using namespace std;

#include <cstdlib>

int main () {

  int var;

  cout << "Ingrese un numero (1 -3)" << endl;
  cin >> var;

  while (var > 3)
  {
    cout << "Ingrese un numero del 1 al 3" << endl;
    cin >> var;
  }
  
  switch  (var) {
    case 1:
    // instrucciones a ejecutar si la variable vale 1:
    cout << "A";
    break;

    case 2:
    // Instrucciones a ejecutar si la variable vale 2:
    cout << "B";
    break;

    case 3: 
    // instrucciones a ejecutar si la variable vale 3:
    cout << "C";
    break;

    default:
    // Instruccion en caso de que no se cumpla ninguno de los casos anteriores:

  }

  cout << endl << endl;
  return 0 ;
}
