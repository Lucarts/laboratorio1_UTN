/* 4) Una agencia de viaje posee la información de algunos destinos turísticos que
comercializó en algunos de los meses del año 2022. Por cada registro se ingresa:
  - Código de destino turístico (entero)
  - Número de mes (entero entre 1 y 12)
  - Cantidad de pasajes vendidos
  - Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada bajo ningún criterio. 
No se sabe la cantidad de destinos turísticos ni la cantidad de meses que cada destino trabajó.

!Para indicar el fin del programa se ingresa un código de destino igual a cero.

Se pide calcular e informar:

A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

*/

#include <iostream>
using namespace std;

int main (){
  int codDestino, mes, qPasajesVendidos;
  int i;
  float totalRecaudado;
  // Creo una variable para corte control
  int destino_actual;

  // Creo variable acumuladora para calculo de punto A)
  int qTotalPasajesVendidos = 0;
  // Creo variable acumuladora para calculo de punto B)
  float recaudacionXDestino;

  cout << "CODIGO DE DESTINO TURISTICO: ";
  cin >> codDestino;

  while (codDestino != 0){
    destino_actual = codDestino;

    recaudacionXDestino = 0;

    while (codDestino == destino_actual) {
      // Pido los datos de cada registro
      
      cout << "MES: ";
      cin >> mes;
      
      cout << "CANTIDAD DE PASAJES VENDIDOS: ";
      cin >> qPasajesVendidos;
      
      cout << "TOTAL RECAUDADO: ";
      cin >> totalRecaudado;
      
      // acumulo en las variables
      qTotalPasajesVendidos += qPasajesVendidos;
      recaudacionXDestino += totalRecaudado;

      cout << "CODIGO DE DESTINO TURISTICO: ";
      cin >> codDestino;
    } 

    // Muestro total recaudado punto B)
    cout << "\n\n\tTOTAL RECAUDADO: $ " << recaudacionXDestino;

  }

  // A) 
  cout << "\n\tCantidad total de pasajes vendidos: " << qTotalPasajesVendidos << endl;

  cout << endl << endl;
  return 0;
}
