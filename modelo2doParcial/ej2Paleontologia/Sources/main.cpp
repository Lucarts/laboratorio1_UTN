/* Ej2) Asociacion de Paleontologia Argentina
La Asociación de Paleontología Argentina dispone de la información de las expediciones de sus 500 paleontólogos asociados durante el año 2022. Por cada expedición realizada se registró:

-	Legajo de/la paleontólogo/a líder (1000 a 1499)
-	Días de duración (número entero)
-	Código de provincia (1 a 6)
-	Cantidad de fósiles animales encontrados (número entero)
-	Cantidad de fósiles vegetales encontrados (número entero)
-	Costo total de la expedición (float)

La información no se encuentra agrupada ni ordenada. !Para indicar el fin de la carga de datos se ingresa un legajo igual a cero.

Se pide calcular e informar
A)	Los nombres de las provincias en las que no se hayan encontrado fósiles animales en ninguna de las expediciones (al menos debe haber registrado alguna expedición).

Las provincias registran los siguientes códigos y nombres:

Código | Nombres
1 Río Negro
2 Chubuts
3 Santa Cruz
4 Córdoba
5 Tierra del Fuego
6 Buenos Aires

B)	El legajo de/la paleontólogo/a que haya encontrado, en total, la mayor cantidad de fósiles.	

C)	El costo promedio de las expediciones realizadas en Córdoba.	20

Aclaraciones
-	Un/a paleontólogo/a puede haber participado de varias expediciones, de una o de ninguna.
-	Sólo habrá un/a paleontólogo/a que haya encontrado la mayor cantidad de fósiles en total.

*/

#include <iostream>
using namespace std;

#include "../Headers/functions.h"

int main() {

  // A

  // B
  int legajoPaleontologo_puntoB[500][2]{0};

  //C
  float costoPromedio_puntoC[2]{0};

  cargarDatos(legajoPaleontologo_puntoB, costoPromedio_puntoC);

  puntoB(legajoPaleontologo_puntoB);

  puntoC(costoPromedio_puntoC);

  return 0;
}