/* PARCIAL CLINICA SAN SIMON
La clínica San Simón Protector dispone de la información de los últimos turnos de sus enfermeros/as. '

Por cada turno trabajado por un enfermero se registró la siguiente información:
-	Legajo del enfermero/a (entero entre 1000 y 15000)
-	Número de turno (entero)
-	Horario ('M' - Mañana, 'T' - Tarde, 'N' - Noche)
-	Cantidad de horas trabajadas en el turno (entero mayor a cero)

La información se encuentra agrupada por legajo de enfermero;

No todos los enfermeros trabajaron la misma cantidad de turnos. 

!Para indicar el fin del lote de datos se ingresa un legajo de enfermero negativo.

!Para indicar el fin de los registros de un enfermero se ingresa un número de turno igual a cero. 

Notas
Cada turno consiste en 8 horas. 
Las horas excedentes se consideran horas extras. 
Por ejemplo: Si un enfermero trabajó 12 horas en un turno, realizó 8 hs regulares y 4 hs extra. En cambio, si trabajó 6 horas en un turno: realizó 6 hs regulares y 0 hs extra.

Se pide hacer un programa en C++ para calcular e informar
A.	Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.
B.	La cantidad total de horas extras realizadas entre todos los enfermeros.
C.	La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (mañana, tarde y noche).
D.	El horario (mañana, tarde o noche) que haya registrado menor cantidad de horas trabajadas
E.	Aclaraciones:  Sólo habrá un horario que haya registrado la menor cantidad de horas trabajadas.

*/

#include <iostream>
using namespace std;

int main () {

  int legajoEnfermero;
  int numeroTurno;
  char horario; //('M' - Mañana, 'T' - Tarde, 'N' - Noche)
  int horasTrabajadas;

  // Variables A)
  float averageHorasTrabajadas;
  float accumulatorHorasTrabajadas;
  int counterTurnos;

  // Variables B)
  int horasExtrasTotales = 0;
  int horasExtras;

  // Variables C)
  bool trabajoM;
  bool trabajoT;
  bool trabajoN;
  int counterEnfermeros_puntoC = 0;

  // Variables D)
  int accumulatorHorasTurnoM = 0;
  int accumulatorHorasTurnoT = 0;
  int accumulatorHorasTurnoN = 0;
  string horarioQueSeTrabajoMenos;

  cout << "INGRESE EL LEGAJO DEL ENFERMERO: ";
  cin >> legajoEnfermero;

  while (legajoEnfermero >= 0) {

    cout << "\nINGRESE EL NUMERO DE TURNO: ";
    cin >> numeroTurno;

    counterTurnos = 0;
    accumulatorHorasTrabajadas = 0;

    trabajoM = 0;
    trabajoT = 0;
    trabajoN = 0;

    while (numeroTurno != 0) {
      cout << "\t-HORARIO ('M'-Mañana, 'T'-Tarde, 'N'-Noche): ";
      cin >> horario;

      cout << "\t-CANTIDAD DE HORAS TRABAJADAS: ";
      cin >> horasTrabajadas;

      // A)
      accumulatorHorasTrabajadas += horasTrabajadas;
      counterTurnos ++;

      // B)
      horasExtras = 0;
      if (horasTrabajadas > 8) {
        horasExtras = (horasTrabajadas - 8);

        cout << endl << endl << "----- HORAS EXTRAS ------ : " << horasExtras << endl << endl;
      }
      horasExtrasTotales += horasExtras;

        cout << endl << endl << "----- HORAS EXTRAS TOTALES------ : " << horasExtrasTotales << endl << endl;


      // C & D)
      switch (horario) {
      case 'M':
        trabajoM = 1;
        accumulatorHorasTurnoM += horasTrabajadas;
        break;
      
      case 'T':
        trabajoT = 1;
        accumulatorHorasTurnoT += horasTrabajadas;
        break;
      
      case 'N':
        trabajoN = 1;
        accumulatorHorasTurnoN += horasTrabajadas;
        break;
      
      default:
        break;
      }
      
      // CORTE 
      cout << "\nINGRESE EL NUMERO DE TURNO: ";
      cin >> numeroTurno;
    }

    if (trabajoM == 1 && trabajoT == 1 && trabajoN ==1) {
      counterEnfermeros_puntoC++;
    }
    
    // Aca muestro los totales por lotes
    cout << "\n\nA) PROMEDIO DE HS TRABAJADAS DEL ENFERMERO LEGAJO: " << legajoEnfermero << endl;
    averageHorasTrabajadas = accumulatorHorasTrabajadas / counterTurnos;
    cout << "\t- El promedio de horas trabajadas fue de: " << averageHorasTrabajadas << endl;

    // Corte General
    cout << "INGRESE EL LEGAJO DEL ENFERMERO: ";
    cin >> legajoEnfermero;
  }
  
  if (accumulatorHorasTurnoM < accumulatorHorasTurnoT && accumulatorHorasTurnoM < accumulatorHorasTurnoN) {
    horarioQueSeTrabajoMenos = "MAÑANA";
  } else {
    if (accumulatorHorasTurnoT < accumulatorHorasTurnoM && accumulatorHorasTurnoT < accumulatorHorasTurnoN) {
      horarioQueSeTrabajoMenos = "TARDE";
    } else {
      horarioQueSeTrabajoMenos = "NOCHE";
    }
  }

  // Aca muestro los totales generales.
  cout << "\n\nB) CANTIDAD DE HORAS EXTRAS TOTALES" << endl;
  cout << "\t- La cantidad de hs extras fueron: " << horasExtrasTotales << endl;
    
  cout << "\nC) CANTIDAD DE ENFERMEROS QUE TRABAJARON EN LOS 3 TURNOS" << endl;
  cout << "\t- La cantidad fue de: " << counterEnfermeros_puntoC << endl;
    
  cout << "\nD) HORARIO EN EL QUE SE REGISTRO MENOS HORAS" << endl;
  cout << "\t- El horario con menos horas trabajadas fue por la " << horarioQueSeTrabajoMenos << endl;
    

  cout << endl << endl;
  return 0;
}