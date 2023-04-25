/* 2) Durante la Edad Media existía un popular juego de dados llamado Nomis.
El juego consistía en tirar dos dados de seis caras durante cinco rondas. 
En cada ronda se debía anotar la diferencia absoluta entre las caras de los dados obtenidos en la tirada. 

Esta diferencia absoluta se utiliza para calcular el puntaje a partir de las siguientes reglas:

1) Si en una ronda se obtienen dos dados con la cara 1 o dos dados con la cara 6:
El puntaje de esa ronda es de 10 puntos.

2) Cualquier diferencia absoluta mayor a uno: El puntaje de esa ronda es igual a la diferencia absoluta.

3) Cualquier escalera: El puntaje de la ronda es cero y se pierde el total acumulado hasta el momento.

NOTA: Una escalera es cualquiera de las siguientes  combinaciones sin importar el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados y mostrar el puntaje de la ronda y 
el puntaje acumulado. Al finalizar las cinco rondas debe mostrar el puntaje acumulado.

*/

#include <iostream>
using namespace std;

int main () { 
  int dado_1, dado_2, puntaje_ronda = 0, puntaje_total = 0, diferencia_absoluta;

  for (int i = 1; i <= 5; i++) {
    cout << "Ronda " << i << endl;
    cout << "Ingrese el valor del dado 1: ";
    cin >> dado_1;

    cout << "Ingrese el valor del dado 2: ";
    cin >> dado_2;  

    diferencia_absoluta = dado_1 - dado_2;
    // Si es negativo lo paso a positivo;
    if (diferencia_absoluta < 0) {
      diferencia_absoluta = diferencia_absoluta * -1;
    }
    
    // 1) Si se obtienen dos dados con la cara 1 o 6;
    if ( dado_1 == 1 && dado_2 == 1 || dado_1 == 6 && dado_2 == 6 ) {
      puntaje_ronda = 10;
    } else {
        if (diferencia_absoluta > 1) {
          puntaje_ronda = diferencia_absoluta;
        } else {
          puntaje_ronda = 0;
          puntaje_total = 0;
        }
    }

    puntaje_total += puntaje_ronda;

    cout << "Puntaje de la ronda: " << puntaje_ronda << endl;
    cout << "Puntaje acumulado: " << puntaje_total << endl << endl;

  }
  return 0;
}
