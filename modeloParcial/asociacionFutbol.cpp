/* ASOCIACION DE FUTBOL GRAL PACHECO
La Asociación de Fútbol de General Pacheco dispone de la información de los equipos que
participaron en los últimos 5 torneos realizados. 

Por cada equipo se registró:
- Número de torneo (Número entero)
- Número de equipo (Número entero)
- Partidos ganados (Número entero)
- Partidos empatados (Número entero)
- Partidos perdidos (Número entero)
- Goles a favor (Número entero)
- Goles en contra (Número entero)
- Puntos descontados por sanciones (Número entero)

La información se encuentra agrupada por número de torneo. 

!Para indicar la finalización de carga de datos de un torneo se ingresa un número de equipo igual a cero.


Se pide calcular e informar:

A) Por cada torneo, el equipo campeón del certamen. Indicando el número de equipo y
los puntos obtenidos. (30 puntos)

B) La cantidad de torneos que no hayan tenido equipos a los que se les descontó
puntos por sanciones. (30 puntos)

C) La diferencia de goles del equipo nro 15. (20 puntos)

D) El equipo que menos partidos haya empatado en un torneo pero que al menos haya
empatado alguno. Indicar el número de equipo, la cantidad de partidos empatados y
el número de torneo. (20 puntos)

Aclaraciones:
- Sólo habrá un equipo con la mayor cantidad de puntos en cada torneo. Se otorgan 3
puntos por partido ganado y 1 punto por partido empatado. Se deben descontar los
puntos debido a sanciones.

- Habrá sólo un equipo con la menor cantidad de empates en un torneo.

*/

#include <iostream>
using namespace std;

int main () {
  const int CANTIDAD_TORNEOS = 5;

  int numeroTorneo;

  int numeroEquipo;
  int partidosGanados;
  int partidosEmpatados;
  int partidosPerdidos;
  int golesAFavor;
  int golesEnContra;
  int puntosDescontados;

  // variables A)
  int puntajeEquipo;
  int equipoCampeon;
  int puntosObtenidosCampeon;

  // variables B)
  int counterTorneosSinSanciones = 0;
  bool huboSancion;

  // variables c)
  bool existeEquipo15;
  int diferenciaDeGoles;

  // Variables d)
  int equipoQueMenosEmpato;
  int numeroDeTorneoConElMenorEmpate;
  int cantidadMinDePartidosEmpatados = -1;

  cout << "INGRESE EL NUMERO DE TORNEO: ";
  cin >> numeroTorneo;

  for (int i = 0; i < CANTIDAD_TORNEOS; i++) {
    
    cout << "\nINGRESE EL NUMERO DE EQUIPO: ";
    cin >> numeroEquipo;

    // Aca reinicializo las variables para sublotes
    puntajeEquipo = 0;
    puntosObtenidosCampeon = -1;
    
    huboSancion = 0;

    diferenciaDeGoles = 0;
    existeEquipo15 = 0;

    while (numeroEquipo != 0) {
      
      cout << "\t-PARTIDOS GANADOS: ";
      cin >> partidosGanados;

      cout << "\t-PARTIDOS EMPATADOS: ";
      cin >> partidosEmpatados;

      cout << "\t-PARTIDOS PERDIDOS: ";
      cin >> partidosPerdidos;

      cout << "\t-GOLES A FAVOR: ";
      cin >> golesAFavor;

      cout << "\t-GOLES EN CONTRA: ";
      cin >> golesEnContra;
    
      cout << "\t-PUNTOS DESCONTADOS POR SANCIONES: ";
      cin >> puntosDescontados;

      if (puntosDescontados > 0) {
        huboSancion = 1;
      }

      // A)
      puntajeEquipo = (partidosGanados * 3 ) + partidosEmpatados - puntosDescontados;
      
      if (puntosObtenidosCampeon == -1 || puntosObtenidosCampeon < puntajeEquipo) {
        puntosObtenidosCampeon = puntajeEquipo;
        equipoCampeon = numeroEquipo;
      }

      // C)
      if (numeroEquipo == 15) {
        diferenciaDeGoles = golesAFavor - golesEnContra;
        existeEquipo15 = 1;
      }

      // D)
      if (partidosEmpatados > 0) {
        if (cantidadMinDePartidosEmpatados == -1 || cantidadMinDePartidosEmpatados > partidosEmpatados) {
          cantidadMinDePartidosEmpatados = partidosEmpatados;
          equipoQueMenosEmpato = numeroEquipo;
          numeroDeTorneoConElMenorEmpate = numeroTorneo;
        }
      }
        
      // corte
      cout << "\nINGRESE EL NUMERO DE EQUIPO: ";
      cin >> numeroEquipo;
    }

    if (!huboSancion) {
      counterTorneosSinSanciones++;
    }

    // Aca muestro los totales por sublotes
    cout << "\n\nPUNTO A) CAMPEON DEL TORNEO NRO: " << numeroTorneo << endl;
    cout << "\t-Campeon equipo numero: " << equipoCampeon << endl;
    cout << "\t-Puntos obtenidos por el campeon: " << puntosObtenidosCampeon << endl;

    cout << "\nPUNTO B) DIFERENCIA DE GOLES EQUIPO nro 15: " << endl;
    if (existeEquipo15) {
      cout << "\t-La diferencia de goles del equipo 15 fue de: " << diferenciaDeGoles << endl;
    } else {
      cout << "\t-No hubo ningun equipo nro 15 en el torneo NRO " << numeroTorneo << endl;
    }
    cout << endl;
    
    cout << "INGRESE EL NUMERO DE TORNEO: " ;
    cin >> numeroTorneo;
  }

  // Aca muestro los totales generales
  cout << "\nPUNTO B) CANTIDAD DE TORNEOS SIN SANCIONES: " << endl;
  cout << "\t-Cantidad de torneos sin equipos sancionados: " << counterTorneosSinSanciones << endl;

  cout << "\nPUNTO D) EQUIPO QUE MENOS PARTIDOS EMPATO: " << endl;
  cout << "\t-Numero de equipo que menos partidos empato: " << equipoQueMenosEmpato<< endl;
  cout << "\t-Cantidad de partidos que empato: " << cantidadMinDePartidosEmpatados << endl;
  cout << "\t-Torneo en el que sucedio: " << numeroDeTorneoConElMenorEmpate << endl;

  cout << endl << endl;
  return 0;
}