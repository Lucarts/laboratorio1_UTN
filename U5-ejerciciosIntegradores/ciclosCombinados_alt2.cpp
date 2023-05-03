/* 2) Una agencia de viaje posee la información de los cinco destinos turísticos que
comercializa en algunos meses del año 2022. Por cada registro se ingresa:
  - Código de destino turístico (entero)
  - Número de mes (entero entre 1 y 12)
  - Cantidad de pasajes vendidos (entero)
  - Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No todos los destinos tuvieron información para todos los meses.
! ESTRUCTURA CORTE DE CONTROL: Para indicar que finaliza la carga de un destino se ingresa un mes igual a cero. 

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

*/

#include <iostream>
using namespace std;

int main (){
  int codigoDestino, mes, qPasajesVendidos;
  float totalRecaudado;

  // variable para utilizar corte de control
  int destinoActual;

  // variable para calcular A)
  int acuPasajesVendidos = 0;

  cout << "CODIGO DE DESTINO: ";
  cin >> codigoDestino;

  while (codigoDestino != 0) {
    // variable para calcular B)
    float acuTotalRecaudadoXDestino = 0;

    destinoActual = codigoDestino;
    
    while (codigoDestino == destinoActual) {

      cout << "MES: ";
      cin >> mes;

      cout << "TOTAL PASAJES VENDIDOS: ";
      cin >> qPasajesVendidos;
      
      cout << "TOTAL RECAUDADO: ";
      cin >> totalRecaudado;

      acuPasajesVendidos += qPasajesVendidos;
      acuTotalRecaudadoXDestino += totalRecaudado;

      cout << "CODIGO DESTINO: ";
      cin >> codigoDestino;
    }

    // B) Total recaudado por cada destino 
    cout << "TOTAL RECAUDADO $ " << acuTotalRecaudadoXDestino;
    cout << endl << endl;

  }
  // A) Acumulador de pasajes vendidos 
  cout << "CANTIDAD TOTAL DE PASAJES VENDIDOS: " << acuPasajesVendidos;

  cout << endl << endl;
  return 0;
}
