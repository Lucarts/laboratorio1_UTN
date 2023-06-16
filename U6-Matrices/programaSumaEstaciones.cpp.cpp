
#include <iostream>
using namespace std;

int main() {
  string nombreEstaciones[4] = {"Verano", "Otonio", "Invierno", "Primavera"};

  int votosEstaciones[4] = {}; // 1 Verano, 2otonio, 3invierno, 4primavera;
  int i, nroEstacion;

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese la estaciond del anio favorita (1 Verano, 2 otonio, 3 invierno, 4 primavera): ";
    cin >> nroEstacion;

    votosEstaciones[nroEstacion - 1]++;
  }

  for (int j = 0; j < 4; j++) {

    cout << "\n\tLa estacion " << nombreEstaciones[j] << " tiene "
         << votosEstaciones[j] << " votos" << endl;

    // cout << "La estacion " << j + 1 << " tiene " << votosEstaciones[j]
    //      << " votos" << endl;
  }

  cout << endl
       << endl;
  return 0;
}