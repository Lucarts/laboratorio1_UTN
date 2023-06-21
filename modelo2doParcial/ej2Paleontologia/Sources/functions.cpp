#include <iostream>
using namespace std;
#include "../Headers/functions.h"

void cargarDatos(int matriz[500][6]) {
  int legajo, diasDuracion, codigoProvincia, qFosilesAnimales, qFosilesVegetales;
  float costoExpedicion;

  cout << "\nIngrese el Legajo del Paleontologo Lider: ";
  cin >> legajo;

  while (legajo != 0) {
    matriz[legajo - 1000][0] = legajo;

    cout << "\nIngrese los dias de duracion: ";
    cin >> diasDuracion;
    matriz[legajo - 1000][1] = diasDuracion;

    cout << "\nIngrese el Codigo de la Provincia: ";
    cin >> codigoProvincia;
    matriz[legajo - 1000][2] = codigoProvincia;

    cout << "\nIngrese la Cantidad de fosiles Animales Encontrados: ";
    cin >> qFosilesAnimales;
    matriz[legajo - 1000][3] = qFosilesAnimales;

    cout << "\nIngrese la Cantidad de fosiles Vegetales Encontrados: ";
    cin >> qFosilesVegetales;
    matriz[legajo - 1000][4] = qFosilesVegetales;

    cout << "\nIngrese el costo Total de la Expedicion: ";
    cin >> costoExpedicion;
    matriz[legajo - 1000][5] = costoExpedicion;

    cout << "\nIngrese el Legajo del Paleontologo Lider: ";
    cin >> legajo;
  }
}

void puntoA(int matriz[500][6], bool array[6]) {
  int i;

  for (i = 0; i < 500; i++) {
    if (matriz[i][3] != 0) {
      array[matriz[i][2] - 1] = true;
    }
  }
}

int puntoB(int matriz[500][6]) {

  int cantidadMayorDeFosilesEncontrados;
  int cantidadFosilesActual, legajoConMasDescubrimientos;

  for (int i = 0; i < 500; i++) {
    cantidadFosilesActual = matriz[i][3] + matriz[i][4];
    if (cantidadFosilesActual > cantidadMayorDeFosilesEncontrados) {
      cantidadMayorDeFosilesEncontrados = cantidadFosilesActual;
      legajoConMasDescubrimientos = matriz[i][0];
    }
  }

  return legajoConMasDescubrimientos;
}

float puntoC(int matriz[500][6]) {
  int i;

  float accumulatorCba = 0, counterCba = 0;

  int provinciaExpedicion = 4;

  for (i = 0; i < 500; i++) {

    if (matriz[i][2] == 4) {
      accumulatorCba += matriz[i][5];
      counterCba++;
    }
  }

  float costoPromedio = float(accumulatorCba) / float(counterCba);

  return costoPromedio;
}