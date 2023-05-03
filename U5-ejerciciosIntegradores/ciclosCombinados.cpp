/* 1) Una agencia de viajes posee la información de los cinco destinos turísticos que
  comercializa en cada uno de los meses del año 2022. Por cada destino y mes registra:
  -   Código de destino turístico (entero)
  -   Número de mes (entero entre 1 y 12)
  -   Cantidad de pasajes vendidos (entero)
  -   Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. Hay un registro para cada destino turístico y mes.

A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.
*/

#include <iostream>
using namespace std;

int main () {

  const int CANTIDAD_DESTINOS = 5, MESES = 12;
  int codigoDestino, mes, qPasajesVendidos, acuPasajes=0;
  float totalRecaudado;
  int i, j;
  int counterDestinos = 0;
  
  for (int i = 1; i <= CANTIDAD_DESTINOS; i++) {
    float recaudacionXDestino = 0;
    
    for (int j = 1; j <= MESES; j++) {
      cout << "DESTINO: "; 
      cin >> codigoDestino;
      cout << "Ingrese el numero de MES: ";
      cin >> mes;
      cout << "Ingrese la cantidad de PASAJES VENDIDOS: ";
      cin >> qPasajesVendidos;
      cout << "Ingrese el TOTAL RECAUDADO: ";
      cin >> totalRecaudado;

      // se pide A) cantidad total de pasajes vendidos
      acuPasajes += qPasajesVendidos;   

      // Se pide B) Total recaudado por destino OK
      recaudacionXDestino += totalRecaudado;
    }
    cout << endl << endl;
    // B) OK
    cout << "\tLA RECAUDACION TOTAL DEL DESTINO: " << codigoDestino << " = " << recaudacionXDestino << endl;
  }
  
  // A) cantidad total de pasajes vendidos
  cout << "\tCANTIDAD TOTAL DE PASAJES VENDIDOS: " << acuPasajes;

  cout << endl << endl;
  return 0;
}