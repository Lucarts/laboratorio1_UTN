/* PARCIAL CAMARA EXPORTADORES TEMA 3

La Cámara de Exportadores de la República Argentina dispone de las exportaciones realizadas por 10 industrias del país. 

Por cada exportación se registra:
- Código de industria (Número entero)
- Código de exportación (Número entero)
- Código de producto (Número entero desde 1 hasta 40)
- Continente de destino (1 - América, 2 - Europa, 3 - Asia)
- Total de toneladas exportadas (float)
- Importe total (float)

La información se encuentra agrupada por código de industria. 
Cada industria registró 7 exportaciones. 
La información no se encuentra ordenada bajo ningún criterio.

Cada exportación es enviada en contenedores que pueden transportar hasta 30 toneladas.

Se pide calcular e informar:
A) La cantidad de industrias que no exportaron nunca el producto con código 35. 
B) El nombre del continente que más toneladas haya recibido en total 
C) Por cada industria, la cantidad total de contenedores necesarios. 
D) La exportación que haya registrado el menor importe total por tonelada. Se debe informar el código de exportación, el importe por tonelada y el continente de destino.


Aclaraciones
- Habrá sólo un continente que haya totalizado la mayor cantidad de toneladas.
- Habrá sólo una exportación que haya registrado el menor importe total por tonelada.
- Para una exportación de 31 toneladas serán necesarios 2 contenedores para enviarla.

*/ 

#include <iostream>
using namespace std;

int main () {
  const int CANTIDAD_INDUSTRIAS = 10;
  const int CANTIDAD_EXPORTACIONES = 7;

  int codigoIndustria;
  int codigoExportacion;
  int codigoProducto; //(Número entero desde 1 hasta 40)
  int continenteDestino; //(1-América, 2-Europa, 3-Asia)
  float toneladasExportadas;
  float importeTotal;

  // variables A)
  int counterIndustrias_puntoA = 0;
  bool exportoProducto35;

  // variables B)
  string continenteQueMasToneladasRecibio;
  float accumulatorToneladasAmerica = 0;
  float accumulatorToneladasEuropa= 0;
  float accumulatorToneladasAsia= 0;

  // Variable C)
  int cantidadTotalContenedores;
  float toneladasRemaining;

  // Variable D)
  float importePorTon;
  float importeMenorPorTon = -1;
  int codigoExportacionMenorTon;
  int continenteDestinoMenorTon;

  for (int i = 0; i < CANTIDAD_INDUSTRIAS; i++) {

    cout << "\nINGRESE EL CODIGO DE INDUSTRIA: ";
    cin >> codigoIndustria;

    exportoProducto35 = 0;
    toneladasRemaining = 0;
    cantidadTotalContenedores = 0;
    importePorTon = 0;

    for (int j = 0; j < CANTIDAD_EXPORTACIONES; j++) {

      cout << "\nINGRESE EL CODIGO DE EXPORTACION: ";
      cin >> codigoExportacion;

      cout << "\t-INGRESE EL CODIGO DE PRODUCTO (Número entero desde 1 hasta 40): ";
      cin >> codigoProducto;

      cout << "\t-INGRESE EL CONTINENTE DE DESTINO (1 -América, 2-Europa, 3- Asia): ";
      cin >> continenteDestino;

      cout << "\t-INGRESE EL TOTAL DE TONELADAS EXPORTADAS: ";
      cin >> toneladasExportadas;

      cout << "\t-INGRESE EL IMPORTE TOTAL: ";
      cin >> importeTotal;

      if (codigoProducto == 35) {
        exportoProducto35 = 1;
      }

      switch (continenteDestino) {
      case 1:
        accumulatorToneladasAmerica += toneladasExportadas;
        break;
      
      case 2:
        accumulatorToneladasEuropa += toneladasExportadas;
        break;
      
      case 3:
        accumulatorToneladasAsia += toneladasExportadas;
        break;
      
      default:
        break;
      }

      toneladasRemaining = toneladasExportadas;
      cantidadTotalContenedores ++;
      while (toneladasRemaining > 30) {
        cantidadTotalContenedores++;
        toneladasRemaining -= 30;
      }
      
      importePorTon = importeTotal / toneladasExportadas;

      if (importeMenorPorTon == -1 || importePorTon < importeMenorPorTon) {
        importeMenorPorTon = importePorTon;
        codigoExportacionMenorTon = codigoExportacion;
        continenteDestinoMenorTon = continenteDestino;
      }
    }

    if (exportoProducto35 == 0) {
      counterIndustrias_puntoA++;
    }
    
    cout << "\n\nPUNTO C) CANTIDAD TOTAL DE CONTENEDORES NECESARIOS: " << endl;
    cout << "\t- La cantidad de contenedores industria COD " << codigoIndustria << " es de : " << cantidadTotalContenedores  << endl;
  }
  
  cout << "\nPUNTO A) CANTIDAD DE INDUSTRIAS QUE NO EXPORTARON EL PRODUCTO COD 35: " << endl;
  cout << "\t- Cantidad de industrias: " << counterIndustrias_puntoA << endl;

  cout << "\nPUNTO B) CONTINENTE QUE MAS TONELADAS RECIBIO: " << endl;
  if (accumulatorToneladasAmerica > accumulatorToneladasEuropa && accumulatorToneladasAmerica > accumulatorToneladasAsia) {
    continenteQueMasToneladasRecibio = "AMERICA";
  } else {
    if (accumulatorToneladasEuropa > accumulatorToneladasAmerica && accumulatorToneladasEuropa > accumulatorToneladasAsia) {
      continenteQueMasToneladasRecibio = "EUROPA";
    } else {
      continenteQueMasToneladasRecibio = "ASIA";
    }
  }
  cout << "\t- El continente fue: " << continenteQueMasToneladasRecibio << endl;
  
  cout << "\nPUNTO D) EXPORTACION QUE REGISTRO EL MENOR IMPORTE POR TON: " << endl;
  cout << "\t- Codigo de exportacion: " << codigoExportacionMenorTon << endl;
  cout << "\t- Importe por tonelada: " << importeMenorPorTon << endl;
  cout << "\t- Continente de destino (1 - América, 2 - Europa, 3 - Asia): " << continenteDestinoMenorTon << endl;

  cout << endl << endl;
  return 0;
}