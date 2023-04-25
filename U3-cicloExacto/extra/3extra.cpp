/* 3 - Se dispone de la información de siete localidades de la zona norte de la Provincia de Buenos Aires.
Cada localidad lanzó mediante una aplicación web una campaña de registración para la vacunación contra la gripe para sus habitantes.

Por cada una de las siete localidades se registró:
-	Nombre de la localidad (string)
-	Cantidad de registrados a vacunarse que pertenecen a grupo de riesgo (entero)
-	Cantidad de registrados a vacunarse que no pertenecen a grupo de riesgo (entero)
-	Población total de la localidad (entero)

La Provincia de Buenos Aires estimó que se necesitará diariamente un/a vacunador/a por cada 70 registrados. También estableció que por día y localidad sólo podrán trabajar hasta 10 vacunadores.

Se pide calcular e informar:
1)	Por cada centro, la cantidad total de vacunadores necesarios y la cantidad total de días que llevará la campaña de vacunación.

2)	La cantidad total de registrados para vacunarse contra la gripe y qué porcentaje representa sobre el total de la población de las siete localidades.

3)	La cantidad de localidades donde se hayan registrado más personas que pertenecen a grupo de riesgo que personas que no pertenecen a grupo de riesgo.
*/

#include <iostream>
using namespace std;

int main () {

  string localidades[7];
  string nombre_localidad;
  int qPoblacionRiesgo, qPoblacionComun, QpoblacionTotal;
  const int capacidadMaximaVacunadores = 50;
  float vacunadores;
  float dias;

  for (int i = 0; i < 7; i++)
  {
    cout << "Ingrese el nombre de la Localidad: " ;
    cin >> nombre_localidad;
    localidades[i] = nombre_localidad;

    cout << "Ingrese la poblacion de riesgo: " ;
    cin >> qPoblacionRiesgo;

    cout << "Ingrese la poblacion de comun: " ;
    cin >> qPoblacionRiesgo;

    cout << "Ingrese la poblacion total: " ;
    cin >> QpoblacionTotal;

    vacunadores = (qPoblacionComun + qPoblacionRiesgo) / capacidadMaximaVacunadores;
    dias = vacunadores / 10;

    //1) Por cada centro, la cantidad total de vacunadores necesarios y la cantidad total de días que llevará la campaña de vacunación.
    cout << endl << endl;
    cout << "Localidad de " << localidades[i] << endl<< endl;
    cout << "Cantidad Total de vacunadores necesarios " << vacunadores << endl;
    cout << "La campania en " << localidades[i] << " llevara: " << dias << " dias" << endl;
    cout << "----------" << endl << endl;

    
  }
  


    // 2) Cantidad total de registrados para vacunarse contra la gripe y qué porcentaje representa sobre el total de la población de las siete localidades.

    // 3) La cantidad de localidades donde se hayan registrado más personas que pertenecen a grupo de riesgo que personas que no pertenecen a grupo de riesgo.



  return 0;
}

