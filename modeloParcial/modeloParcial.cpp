/* LaraKart es un torneo que se realiza todos los años en la Ciudad de Buenos Aires. Durante el lapso de un día los participantes pueden dirigirse a la pista de karting y realizar el circuito. Luego de que haya terminado el torneo se anunciará al ganador de la competencia.

El organizador del torneo prevé que la edición 2023 tendrá una gran cantidad de participantes. 

Cada participante realizará exactamente 4 vueltas a la pista de carrera

Por cada vuelta de cada participante se registra:
-	Código de participante (entero)
-	Número de vuelta (1 a 4)
-	Tiempo empleado (en minutos)
-	Descalificado (1 - Sí; 0 - No)

La información se encuentra agrupada por código de participante y por cada participante la información de las vueltas se encuentra ordenada por número de vuelta (de menor a mayor).
!Para indicar el fin de la carga de datos se ingresa un código de participante negativo.

Se pide calcular e informar
A)	Informar el ganador de la competencia. El mismo es aquella persona que haya demorado menos tiempo en completar el circuito completo (las 4 vueltas) y nunca haya sido descalificado. Informar el código de participante y el tiempo demorado.

NOTA: No habrá más de una persona que haya completado el circuito con el menor tiempo (ambiente ideal).
  
B)	La cantidad total de participantes que hayan sido descalificados al menos una vez.
  
C)	La cantidad total de participantes que no hayan sido descalificados en la última vuelta.
  
D)	Por cada participante, el porcentaje de vueltas descalificadas y el porcentaje de vueltas no descalificadas.
*/

#include <iostream>
using namespace std;

int main () { 
  int codigoParticipante, numeroVuelta, qMinutos, i; 
  bool descalificado;
  const int CANTIDAD_VUELTAS = 4;

  // A
  int ganador, tiempoMinimo = 0;
  int acumuladorTiempoTotal;
  
  bool puedeGanar;
  // D
  float descalificaciones, calificaciones;
  // B
  int counterDescalificaciones = 0;
  // C
  int counterCalificacionesUltimaVuelta = 0;

  cout << "CODIGO PARTICIPANTE: ";
  cin >> codigoParticipante;

  while (codigoParticipante >= 0) {
    
    acumuladorTiempoTotal = 0;
    descalificaciones = 0;
    calificaciones = 0;
    puedeGanar = 1;

    for (i = 0; i < CANTIDAD_VUELTAS; i++){
      
      cout << "\tNUMERO DE VUELTA: ";
      cin >> numeroVuelta;
      
      cout << "\tCANTIDAD DE MINUTOS: ";
      cin >> qMinutos;
      acumuladorTiempoTotal += qMinutos;

      cout << "\tDESCALIFICADO? (1 - Sí; 0 - No): ";
      cin >> descalificado;

      if (descalificado) {
        descalificaciones++;
        puedeGanar = 0;
      } else {
        calificaciones++;
      }

      if (i == CANTIDAD_VUELTAS - 1 && !descalificado) {
        counterCalificacionesUltimaVuelta++;
      }

    }

    if (puedeGanar) {
      if (tiempoMinimo == 0 || acumuladorTiempoTotal <= tiempoMinimo) {
        tiempoMinimo = acumuladorTiempoTotal;
        ganador = codigoParticipante;
      }
    }

    if (!puedeGanar) {
      counterDescalificaciones++;
    }

    // D)
    cout << "\n\nD) % de calificaciones y descalificaciones" << endl;
    cout << "\t% CALIFICACIONES : " << float(calificaciones / CANTIDAD_VUELTAS * 100) << " % " << endl;
    cout << "\t% DESCALIFICACIONES : " << float(descalificaciones / CANTIDAD_VUELTAS * 100 )<< " % " << endl << endl;


    // Pido el nuevo registro
    cout << "CODIGO PARTICIPANTE: ";
    cin >> codigoParticipante;
  }
  

  // A) 
  cout << "\n\nA) GANADOR" << endl;
  cout << "\tEL GANADOR DE LA COMPETENCIA ES: " << ganador << endl;
  cout << "\tEL TIEMPO DEL GANADOR FUE: " << tiempoMinimo << endl;

  // B)
  cout << "\nB)" << endl;
  cout << "\tCANTIDAD DESCALIFICADOS AL MENOS UNA VEZ: " << counterDescalificaciones << endl;

  // C)
  cout << "\nC)" << endl;
  cout << "\tCANTIDAD CALIFICADOS EN LA ULTIMA VUELTA : " << counterCalificacionesUltimaVuelta<< endl;

  
  cout << endl << endl;
  return 0;
}