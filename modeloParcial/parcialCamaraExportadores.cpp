/* La Cámara de Exportadores de la República Argentina dispone de las exportaciones
realizadas por algunas de las industrias del país. Por cada exportación se registra:
- Código de industria (Número entero)
- Código de exportación (Número entero)
- Continente de destino (1 - América, 2 - Europa, 3 - Asia)
- Total de toneladas exportadas (float)
- Importe total (float)

La información se encuentra agrupada por código de industria. 

!Para indicar el fin de la carga de una industria se ingresa un código de exportación igual a cero. 

!Para indicar el fin de la carga de datos se ingresa un código de industria igual a cero.

Se pide calcular e informar:
A) Por cada industria, el total de toneladas exportadas discriminadas por
continente. Es decir el total de toneladas exportadas a América, Europa y Asia.
B) La cantidad de industrias que hayan exportado a Europa pero no a Asia.
C) Los códigos de continente que no hayan registrado ninguna exportación mayor a
40 toneladas.
D) El nombre del continente qué más dinero haya abonado en total para la
industria con código 5. (20 puntos)

Aclaraciones : - Habrá sólo un continente que haya abonado la mayor cantidad de dinero para la industria con código 5.
*/

#include <iostream>
using namespace std;

int main () {

  int codigoIndustria;
  int codigoExportacion;
  int continenteDestino;
  float totalToneladasExportadas;
  float importeTotal;

  // Variables punto A)
  float totalToneladasExportadasAmerica;
  float totalToneladasExportadasEuropa;
  float totalToneladasExportadasAsia;

  // Variables b)
  bool exportoAEuropa;
  bool exportoAAsia;
  int counterIndustrias_puntoB = 0;

  // variables c)
  int codigoContinentes_puntoC;
  bool america40TON = 0;
  bool europa40TON = 0;
  bool asia40TON = 0;

  // variables d)
  bool industriaCodigo5 = 0;
  float importeTotalAbonadoAmerica;
  float importeTotalAbonadoEuropa;
  float importeTotalAbonadoAsia;
  string continenteQueAbonoMas;


  cout << "CODIGO DE INDUSTRIA: ";
  cin >> codigoIndustria;

  while (codigoIndustria != 0) {

    cout << "\tCODIGO DE EXPORTACION: ";
    cin >> codigoExportacion;

    totalToneladasExportadasAmerica = 0;
    totalToneladasExportadasEuropa= 0;
    totalToneladasExportadasAsia= 0;

    exportoAEuropa = 0;
    exportoAAsia = 0;

    importeTotalAbonadoAmerica = 0;
    importeTotalAbonadoEuropa = 0;
    importeTotalAbonadoAsia = 0;

    while (codigoExportacion != 0) {

      cout << "\tCONTINENTE DESTINO (1 - América, 2 - Europa, 3 - Asia) : ";
      cin >> continenteDestino;
      
      cout << "\tTOTAL DE TONELADAS EXPORTADAS : ";
      cin >> totalToneladasExportadas;
      
      cout << "\tIMPORTE TOTAL DE LA EXPORTACION : ";
      cin >> importeTotal;
      
      switch (continenteDestino) {
      case 1:
        totalToneladasExportadasAmerica += totalToneladasExportadas;
        if (totalToneladasExportadas > 40) {
          america40TON = 1;
        }
        importeTotalAbonadoAmerica += importeTotal;
        break;

      case 2:
        totalToneladasExportadasEuropa += totalToneladasExportadas;
        exportoAEuropa = 1;
        if (totalToneladasExportadas > 40) {
          europa40TON = 1;
        }
        importeTotalAbonadoEuropa += importeTotal;
        break;
          
      case 3:
        totalToneladasExportadasAsia += totalToneladasExportadas;
        exportoAAsia = 1;
        if (totalToneladasExportadas > 40) {
          asia40TON = 1;
        }
        importeTotalAbonadoAsia += importeTotal;
        break;
      
      default:
        break;
      }

      cout << "\n\tCODIGO DE EXPORTACION: ";
      cin >> codigoExportacion;
    }

    if (exportoAEuropa && !exportoAAsia) {
      counterIndustrias_puntoB ++;
    }

    cout << "\n\nPUNTO A) Total de toneladas exportadas por continente de la industria " << codigoIndustria << endl;
    cout << "\n\t -Total de toneladas exportadas a AMERICA: " << totalToneladasExportadasAmerica;
    cout << "\n\t -Total de toneladas exportadas a EUROPA: " << totalToneladasExportadasEuropa;
    cout << "\n\t -Total de toneladas exportadas a ASIA: " << totalToneladasExportadasAsia << endl;

    if (codigoIndustria == 5) {
      industriaCodigo5 = 1;

      if (importeTotalAbonadoAmerica > importeTotalAbonadoEuropa && importeTotalAbonadoAmerica > importeTotalAbonadoAsia) {
        continenteQueAbonoMas = "AMERICA" ;
      } else {
        if (importeTotalAbonadoEuropa > importeTotalAbonadoAmerica && importeTotalAbonadoEuropa > importeTotalAbonadoAsia) {
          continenteQueAbonoMas = "EUROPA" ; 
        } else {
          continenteQueAbonoMas = "ASIA" ;
        }
      }
    }
    

    cout << "\nCODIGO DE INDUSTRIA: ";
    cin >> codigoIndustria;
  }
  
  cout << "\nPUNTO B)" << endl;
  cout << "\t-Cantidad de industrias que exportaron a europa pero no a Asia: " << counterIndustrias_puntoB << endl;

  cout << "\nPUNTO C)" << endl;
  if (america40TON == 0) {
    cout << "\t-EL CONTINENTE CODIGO 1 NO REGISTRO NINGUNA EXPORTACION MAYOR A 40 TON " << endl;
  }
  if (europa40TON == 0) {
    cout << "\t-EL CONTINENTE CODIGO 2 NO REGISTRO NINGUNA EXPORTACION MAYOR A 40 TON " << endl;
  }
  if (asia40TON == 0) {
    cout << "\t-EL CONTINENTE CODIGO 3 NO REGISTRO NINGUNA EXPORTACION MAYOR A 40 TON " << endl;
  }

  cout << "\nPUNTO D) Continente que mas dinero haya abonado industria cod 5 " << endl;
  if (industriaCodigo5) {
    cout << "\t- EL CONTINENTE QUE MAS ABONO FUE " << continenteQueAbonoMas << endl;
  }
  
  cout << endl << endl;
  return 0;
}