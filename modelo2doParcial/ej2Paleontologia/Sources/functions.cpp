#include <iostream>
using namespace std;
#include "../Headers/functions.h"

void cargarDatos(float costoPromedio_puntoC[2]) {
  int legajo, diasDuracion, codigoProvincia, qFosilesAnimales, qFosilesVegetales;
  float costoExpedicion;

  cout << "Ingrese el Legajo del Paleontologo Lider: ";
  cin >> legajo;

  // C
  float accumulator_puntoC = 0;
  float counter_puntoC = 0;

  while (legajo != 0) {
    cout << "Ingrese los dias de duracion: ";
    cin >> diasDuracion;

    cout << "Ingrese el Codigo de la Provincia: ";
    cin >> codigoProvincia;

    cout << "Ingrese la Cantidad de fosiles Animales Encontrados: ";
    cin >> qFosilesAnimales;

    cout << "Ingrese la Cantidad de fosiles Vegetales Encontrados: ";
    cin >> qFosilesVegetales;

    cout << "Ingrese el costo Total de la Expedicion: ";
    cin >> costoExpedicion;
    if (codigoProvincia == 4) {
      counter_puntoC++;
      accumulator_puntoC += costoExpedicion;
    }

    cout << "\nIngrese el Legajo del Paleontologo Lider: ";
    cin >> legajo;
  }

  costoPromedio_puntoC[0] = accumulator_puntoC;
  costoPromedio_puntoC[1] = counter_puntoC;
}

void puntoA() {
}

void puntoB() {
}

void puntoC(float costoPromedio_puntoC[2]) {

  float costoPromedio = costoPromedio_puntoC[0] / costoPromedio_puntoC[1];

  cout << "\nPUNTO C) COSTO PROMEDIO DE LAS EXP. EN CORDOBA " << endl;
  cout << "\t- El costo promedio fue de: $" << costoPromedio << endl;
}
