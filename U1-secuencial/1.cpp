# include <iostream>
using namespace std;

int main () {
  int qhoras, qpaga;
  cout << "ingrese la cantidad de horas trabajadas \n";
  cin >> qhoras;
  cout << "Ingrese la cantidad que se le paga por hora \n";
  cin >> qpaga;

  cout << "El sueldo del operario es de: $" << qhoras * qpaga << endl << endl;

  return 0;
}