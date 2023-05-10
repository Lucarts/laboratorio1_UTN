/* 4) Una empresa transporta encomiendas entre Buenos Aires y Mendoza. 
Por cada encomienda se cobra un importe de acuerdo
al peso de la misma, con la siguiente escala: 

Kilos		      |  Importe
<= 10		      |    A
>10 y <=40	  |    B
>40		        |    C
					
Los camiones utilizados transportan un máximo de 200 kilos y son cargados a medida que llegan las encomiendas, partiendo en el momento en que una encomienda no puede ser cargada en el camión por exceder los 200 kilos y se procede a colocar en otro camión que así comienza a ser cargado. 
 
Los camiones a medida que se cargan se identifican con un número, partiendo del número uno (1). 

Confeccionar un programa para que:				
a)	Ingrese los valores de los tres importes A, B y C.
b)	Ingrese el peso de cada encomienda. 
!Para finalizar la carga de datos se ingresa una encomienda "ficticia", con peso negativo. (valor )
c)	Por cada encomienda despachada se informe la siguiente información:
  -Nro. de Camión,
  -Kg. Transportados e 
  -Importe Cobrado
d) Informar la cantidad total de camiones y el total facturado.
*/

#include <iostream>
using namespace std;

int main () {
  const int PESO_MAX= 200;
  const int DIAS_TRAJABADOS = 7;
  int peso, qHorasTeoricas, horaEntrada, horaSalida;

  // Variables
  // A)
  bool ausente;
  // B)
  int qHorasEfectivas;



  //   // A)
  //     if (ausente) {
  //       cout << "\n\nA) EL EMPLEADO " << legajo << " FALTO AL MENOS UN DIA" << endl;
  //     } else {
  //       cout << "\n\nA) EL EMPLEADO " << legajo << " NO FALTO NUNCA" << endl;

  //     }

  //   // B)
  //   if (qHorasEfectivas > qHorasTeoricas) {
  //     cout << "B) EL EMPLEADO " << legajo << " TRABAJO MAS QUE LAS HS TEORICAS" << endl;
  //   } else {
  //     if (qHorasEfectivas < qHorasTeoricas) {
  //       cout << "B) EL EMPLEADO " << legajo << " TRABAJO MENOS QUE LAS HS TEORICAS" << endl;
  //     } else {
  //       cout <<"B) EL EMPLEADO " << legajo << " TRABAJO IGUAL A LAS HS TEORICAS" << endl;
  //     }
  //   }

  // }

  return 0;
}
