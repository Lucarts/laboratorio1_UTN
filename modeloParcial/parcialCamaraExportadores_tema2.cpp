/* CAMARA DE EXPORTADORES TEMA 2 
La Cámara de Exportadores de la República Argentina dispone de las exportaciones
realizadas por 7 industrias del país. 

Por cada exportación se registra:
- Código de industria (Número entero)
- Código de exportación (Número entero)
- Continente de destino (1 - América, 2 - Europa, 3 - Asia)
- Refrigerado (carácter → 'S' - Sí, 'N' - No)
- Total de toneladas exportadas (float)
- Importe total (float)

La información se encuentra agrupada por código de industria. 

!Para indicar el fin de la carga de una industria se ingresa un código de exportación negativo. 

Se pide calcular e informar
A) El porcentaje de toneladas exportadas hacia América, Europa y Asia. 
B) La exportación refrigerada menos costosa que se haya realizado. Indicar el
importe de la exportación y la industria a la que pertenece.
C) Por cada industria, el promedio de toneladas por exportación.
D) La cantidad total de industrias que no hayan registrado exportaciones
refrigeradas.

Aclaraciones
- Podría no haber ninguna exportación refrigerada. Si hay alguna, habrá sólo una que
registre el menor costo.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main () {

  const int CANTIDAD_INDUSTRIAS = 7;

  int codigoIndustria;
  int codigoExportacion;
  int continenteDestino; // (1 - América, 2 - Europa, 3 - Asia)
  char refrigerado; // ('S' - Sí, 'N' - No)
  float toneladasExportadas;
  float importeTotal;

  // Variables A)
  float accumulatorTotalExportaciones = 0;
  float accumulatorTotalExportacionesAmerica = 0;
  float accumulatorTotalExportacionesEuropa = 0;
  float accumulatorTotalExportacionesAsia = 0;
  
  float percentageAmerica;
  float percentageEuropa;
  float percentageAsia;

  // Variables B)
  bool estaRefrigerada = 0;
  float importeMenorExportacionRefrigerada = -1;
  int industriaConLaMenorExportacionRefrigerada;

  // Variables C)
  float averageIndustry;
  float accumulatorToneladasExportadas;
  int counterExportaciones;

  // Variables D)
  bool registroExportacionRefrigerada;
  int counterIndustrias_puntoD = 0;

  for (int i = 0; i < CANTIDAD_INDUSTRIAS; i++) {
    cout << "\nINGRESE CODIGO DE EXPORTACION: ";
    cin >> codigoExportacion;

    estaRefrigerada = 0;
    counterExportaciones = 0;
    accumulatorToneladasExportadas = 0;
    registroExportacionRefrigerada = 0;  
    
    while (codigoExportacion > 0) {

      cout << "\t-INGRESE CODIGO DE INDUSTRIA: ";
      cin >> codigoIndustria;

      cout << "\t-INGRESE CONTINENTE DESTINO (1 - América, 2 - Europa, 3 - Asia): ";
      cin >> continenteDestino;

      cout << "\t-REFRIGERADO ('S' - Sí, 'N' - No): ";
      cin >> refrigerado;
      refrigerado = toupper(refrigerado);

      cout << "\t-INGRESE CANTIDAD DE TONELADAS EXPORTADAS: ";
      cin >> toneladasExportadas;

      cout << "\t-INGRESE EL IMPORTE TOTAL DE LA EXPORTACION: ";
      cin >> importeTotal;

      // A)
      accumulatorTotalExportaciones += toneladasExportadas;

      switch (continenteDestino) {
      case 1:
        accumulatorTotalExportacionesAmerica += toneladasExportadas;
        break;
      
      case 2:
        accumulatorTotalExportacionesEuropa += toneladasExportadas;
        break;
      
      case 3:
        accumulatorTotalExportacionesAsia += toneladasExportadas;
        break;
      
      default:
        break;
      }

      // C)
      counterExportaciones++;
      accumulatorToneladasExportadas += toneladasExportadas;
      
      // D & B)
      if (refrigerado == 'S') {
        registroExportacionRefrigerada = 1;
        
        // B )
        estaRefrigerada = 1;
        if (importeMenorExportacionRefrigerada == -1 || importeTotal < importeMenorExportacionRefrigerada) {
          importeMenorExportacionRefrigerada = importeTotal;
          industriaConLaMenorExportacionRefrigerada = codigoIndustria;
        }
      }

      cout << "\nINGRESE CODIGO DE EXPORTACION: ";
      cin >> codigoExportacion;
    }

    if (!registroExportacionRefrigerada) {
      counterIndustrias_puntoD ++;
    }

    cout << "\n\nPUNTO C) PROMEDIO DE TONELADAS POR EXPORTACION" << endl;
    averageIndustry = accumulatorToneladasExportadas / float (counterExportaciones);
    cout << "\t- El promedio de exportacion de la industria COD " << codigoIndustria << " - fue de TON :" << averageIndustry << endl;
  }
  
  cout << "\nPUNTO A) PORCENTAJE DE TONELADAS HACIA LOS CONTINENTES" << endl;
  percentageAmerica = accumulatorTotalExportacionesAmerica / accumulatorTotalExportaciones * 100;
  percentageEuropa = accumulatorTotalExportacionesEuropa / accumulatorTotalExportaciones * 100;
  percentageAsia = accumulatorTotalExportacionesAsia / accumulatorTotalExportaciones * 100;
  cout << "\t- % TON Exportadas hacia America: " << percentageAmerica << " % " << endl;
  cout << "\t- % TON Exportadas hacia Europa: " << percentageEuropa << " % " << endl;
  cout << "\t- % TON Exportadas hacia Asia: " << percentageAsia << " % " << endl;

  cout << "\nPUNTO B) EXPORTACION REFRIGERADA MENOS COSTOSA" << endl;
  cout << "\t- El importe fue de $" << importeMenorExportacionRefrigerada << endl;
  cout << "\t- La importacion pertenecio a la industria COD: " << industriaConLaMenorExportacionRefrigerada << endl;

  cout << "\nPUNTO D) CANTIDAD DE INDUSTRIAS QUE NO REGISTRARON EXPORTACIONES REFRIGERADAS" << endl;
  cout << "\t- Cantidad total: " << counterIndustrias_puntoD;

  cout << endl << endl;
  return 0;
}