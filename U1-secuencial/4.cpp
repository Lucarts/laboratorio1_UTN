#include <iostream>
using namespace std;

int main () {
  float asientosTotales, asientosOcupados, ocupacion, desocupacion ;

  cout << "Ingrese la cantidad de asientos disponibles del avion" << endl;
  cin >> asientosTotales;

  cout << "Ingrese la cantidad de pasajes ocupados" << endl;
  cin >> asientosOcupados;

  ocupacion = asientosOcupados/asientosTotales * 100 ;
  desocupacion = 100 - ocupacion;

  cout << "el porcentaje de ocupacion es de: " << ocupacion << "%" << endl << endl;
  cout << "el porcentaje de no ocupacion es de: " << desocupacion << "%"<< endl<< endl;

  return 0;
}