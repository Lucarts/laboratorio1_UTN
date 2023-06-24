/* SEGUNDO PARCIAL LABORATORIO - VELEZ BOOK LAB

La editorial Velez Books Lab dispone de las ventas realizadas en el último semestre de 2023. 
Por cada venta realizada se registra:
-	ID de Venta (número entero)
-	ID de Autor (número entero entre 500 y 1499)
-	ID de Género Literario (número entero entre 1 y 7)
-	Precio (entero)
-	Páginas del libro (entero)
-	ID de Sucursal (entero)

El fin de la carga de datos se indica con un ID de venta igual a cero.

*/

#include <iostream>
using namespace std;

#include "../Headers/functions.h"

int main() {

  // A
  int IDSucursales_puntoA[4][2]{0};

  // B
  int arrayAutores_punto2[500]{0};

  // C
  int matrizGeneros_punto3[7][2]{0};

  // D
  int idAutor_puntoD[500]{0};

  cargarDatos(IDSucursales_puntoA, arrayAutores_punto2, matrizGeneros_punto3, idAutor_puntoD);

  puntoA(IDSucursales_puntoA);
  punto2(arrayAutores_punto2);
  punto3(matrizGeneros_punto3);
  punto4(idAutor_puntoD);

  return 0;
}

/*  lote utilizado para testear: https://docs.google.com/spreadsheets/d/1X8jgMHKGfRIupXznVgfOZB__6jUTXh5kOLMLs6XyTe4/edit#gid=312852511
 */