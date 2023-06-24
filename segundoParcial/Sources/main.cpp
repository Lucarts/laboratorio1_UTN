/* SEGUNDO PARCIAL LABORATORIO 24/6/2023 - TAPIA CAKES
La fábrica de tortas TapiaCakes dispone de la información de los pedidos realizados el último bimestre. Por cada pedido de una torta se registró:
-ID de Pedido (entero)
-ID de Torta (entero entre 1 y 7)
-Peso (float)
-Días de anticipación del pedido (entero)
-ID de Cliente (entero entre 800 y 1399)
-ID de Medio de Contacto (entero)

El fin de la carga de datos se indica con un ID de pedido negativo.
*/

#include <iostream>
using namespace std;

#include "../Headers/functions.h"

int main() {

  // Punto 1
  int arrayClientes_punto1[600]{0};

  // Punto 2
  int arrayClientes_punto2[600][8]{0};

  // Punto 3
  float tortas_punto3[7]{0};

  // Punto 4
  // La matriz propuesta tiene de 3 columnas, en la primera posicion [0] valido si efectuo un pedido o no, a los fines de evitar mostrar en consola todos aquellos que no realizaron pedidos. En la solucion propuesta, dentro del archivo functions.cpp al final, deje comentado el codigo alternativo en donde muestra todos los clientes, sin validar que haya pedido o no haya pedido alguna torta.
  int clientes_punto4[600][3]{0};

  cargarDatos(arrayClientes_punto1, arrayClientes_punto2, tortas_punto3, clientes_punto4);

  punto1(arrayClientes_punto1);

  punto2(arrayClientes_punto2);

  punto3(tortas_punto3);

  punto4(clientes_punto4);

  return 0;
}