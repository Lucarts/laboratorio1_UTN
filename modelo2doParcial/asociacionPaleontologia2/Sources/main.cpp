/* Problema 2 - Asociacion de Paleontologia Argentina.
La Asociación de Paleontología Argentina dispone de la información de las piezas de colección que se encuentran en los 570 museos de Argentina. Por cada pieza de colección que se encuentra en un museo se registró:
-	Número de pieza de colección (entero)
-	Número de museo (0 a 569)
-	Año de donación al museo (entero)
-	Exposición (1 -Se encuentra en exposición, 0 - No se encuentra en exposición)
-	Código de Tipo de pieza (1 a 7)

La información no se encuentra agrupada ni ordenada. 
Para indicar el fin de la carga de datos se ingresa un número de pieza igual a cero.
 
*/

#include <iostream>
using namespace std;

#include "../Headers/funtions.h"

int main() {

  // A
  int museoYMayorAntiguedad[2];

  // B
  int numerosDeMuseos_puntoB[570][2]{0};

  // C
  int museos_puntoC[570]{};

  cargarDatos(museoYMayorAntiguedad, numerosDeMuseos_puntoB, museos_puntoC);

  puntoA(museoYMayorAntiguedad);

  puntoB(numerosDeMuseos_puntoB);

  puntoC(museos_puntoC);

  return 0;
}