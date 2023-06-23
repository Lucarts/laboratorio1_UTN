#include <iostream>
using namespace std;
#include "../Headers/functions.h"

void cargarDatos(int legajoPaleontologo_puntoB[500][2], float costoPromedio_puntoC[2]) {
  int legajo, diasDuracion, codigoProvincia, qFosilesAnimales, qFosilesVegetales;
  float costoExpedicion;

  cout << "Ingrese el Legajo del Paleontologo Lider: ";
  cin >> legajo;

  //B

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
    legajoPaleontologo_puntoB[legajo - 1000][0] += qFosilesAnimales;

    cout << "Ingrese la Cantidad de fosiles Vegetales Encontrados: ";
    cin >> qFosilesVegetales;
    legajoPaleontologo_puntoB[legajo - 1000][1] += qFosilesVegetales;

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

void puntoB(int legajoPaleontologo_puntoB[500][2]) {
  int i, cantidadMaxima = -1, cantidadFosiles, legajoGranDescubridor;

  for (int i = 0; i < 500; i++) {
    cantidadFosiles = legajoPaleontologo_puntoB[i][0] + legajoPaleontologo_puntoB[i][1];
    if (cantidadMaxima == -1 || cantidadFosiles > cantidadMaxima) {
      cantidadMaxima = cantidadFosiles;
      legajoGranDescubridor = i + 1000;
    }
  }
  cout << "\nPUNTO B) LEGAJO DEL PALEONTOLOGO QUE ENCONTRO MAS FOSILES" << endl;
  cout << "\t- El legajo es el numero " << legajoGranDescubridor << endl;
  cout << "\t- Encontro " << cantidadMaxima << endl;
}

void puntoC(float costoPromedio_puntoC[2]) {

  float costoPromedio = costoPromedio_puntoC[0] / costoPromedio_puntoC[1];

  cout << "\nPUNTO C) COSTO PROMEDIO DE LAS EXP. EN CORDOBA " << endl;
  cout << "\t- El costo promedio fue de: $" << costoPromedio << endl;
}
