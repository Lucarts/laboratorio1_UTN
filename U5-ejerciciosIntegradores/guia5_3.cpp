/* 3) Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles. Se confecciona una serie de registros con el objeto de controlar la asistencia de sus empleados. 
Hay un primer registro por empleado que contiene:
-	Nro. de Legajo
-	Cantidad de horas teóricas a trabajar por semana

A continuación de este registro, siete registros más, uno por cada uno de los 7 días con los siguientes datos:
-	Hora de entrada (entero) 
-	Hora de salida (entero)		

El día que falta el empleado se ingresa cero en la hora de entrada y salida respectivamente.		

Después de estos siete registros aparece nuevamente un registro de otro empleado seguido por los registros de los días trabajados por este último y así hasta el último empleado.		

Realizar un programa que ingresando los datos indicados determine e informe:
a)	Los nros. de legajo de los empleados que faltaron algún día en la semana.
b)	Para cada empleado indicar con una leyenda aclaratoria si trabajó de más, igual o de menos a las horas teóricas que tiene asignadas en la semana.

*/

#include <iostream>
using namespace std;

int main () {
  const int NUMERO_EMPLEADOS = 50;
  const int DIAS_TRAJABADOS = 7;
  int legajo, qHorasTeoricas, horaEntrada, horaSalida;

  // Variables
  // A)
  bool ausente;
  // B)
  int qHorasEfectivas;


  for (int i = 0; i < NUMERO_EMPLEADOS; i++) {
    cout << "\nINGRESE EL NRO DE LEGAJO: " ;
    cin >> legajo;
    
    cout << "INGRESE LA CANTIDAD DE HS TEORICAS A TRABAJAR: " ;
    cin >> qHorasTeoricas;

    qHorasEfectivas = 0;
    ausente = 0;

    for (int j = 1; j <= DIAS_TRAJABADOS  ; j++) {
      cout << "\n\t-HORA DE ENTRADA DIA " << j << ": " ;
      cin >> horaEntrada;
      
      cout << "\t-HORA DE SALIDA DIA " << j << ": " ;
      cin >> horaSalida;

      if (horaEntrada == 0 && horaSalida == 0) {
        ausente = 1;
      }
      
      qHorasEfectivas += horaSalida-horaEntrada;
    }
    

    // A)
      if (ausente) {
        cout << "\n\nA) EL EMPLEADO " << legajo << " FALTO AL MENOS UN DIA" << endl;
      } else {
        cout << "\n\nA) EL EMPLEADO " << legajo << " NO FALTO NUNCA" << endl;

      }

    // B)
    if (qHorasEfectivas > qHorasTeoricas) {
      cout << "B) EL EMPLEADO " << legajo << " TRABAJO MAS QUE LAS HS TEORICAS" << endl;
    } else {
      if (qHorasEfectivas < qHorasTeoricas) {
        cout << "B) EL EMPLEADO " << legajo << " TRABAJO MENOS QUE LAS HS TEORICAS" << endl;
      } else {
        cout <<"B) EL EMPLEADO " << legajo << " TRABAJO IGUAL A LAS HS TEORICAS" << endl;
      }
    }

  }

  return 0;
}
