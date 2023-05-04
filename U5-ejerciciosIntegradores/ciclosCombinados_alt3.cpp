/* 3) Una agencia de viaje posee la información de algunos destinos turísticos que
comercializa en cada uno de los meses del año 2022. Por cada registro se ingresa
  - Código de destino turístico (entero)
  - Número de mes (entero entre 1 y 12)
  - Cantidad de pasajes vendidos (entero)
  - Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No se sabe la cantidad de destinos trabajados pero cada destino
registró la información de cada mes del año 2022. 

!Para indicar el fin del programa se ingresa un código de destino igual a cero.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

*/

#include <iostream>
using namespace std;

int main (){
  const int MESES = 12;

  int codDestino, mes, qPasajesVendidos;
  int i;
  float totalRecaudado;

  // Creo variable acumuladora para calculo de punto A)
  int qTotalPasajesVendidos = 0;
  // Creo variable acumuladora para calculo punto B)
  float totalRecaudadoxDestino = 0;

  cout << "CODIGO DE DESTINO TURISTICO: ";
  cin >> codDestino;

  while (codDestino != 0){
    totalRecaudadoxDestino = 0;

    for (i = 1; i <= 12; i++) {
      // Pido los datos de cada registro
      
      cout << "MES: ";
      cin >> mes;
      
      cout << "CANTIDAD DE PASAJES VENDIDOS: ";
      cin >> qPasajesVendidos;
      
      cout << "TOTAL RECAUDADO: ";
      cin >> totalRecaudado;

      // acumulo en las variables
      qTotalPasajesVendidos += qPasajesVendidos;
      totalRecaudadoxDestino += totalRecaudado;

    }

    cout << "\tTOTAL RECAUDADO DESTINO: $" << totalRecaudadoxDestino << endl << endl;

    cout << "CODIGO DE DESTINO TURISTICO: ";
    cin >> codDestino;

  }

  // A) 
  cout << "\tCantidad total de pasajes vendidos: " << qTotalPasajesVendidos << endl;

  cout << endl << endl;
  return 0;
}
