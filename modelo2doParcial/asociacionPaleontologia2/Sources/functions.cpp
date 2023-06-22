#include <iostream>
using namespace std;

#include "../Headers/funtions.h"

// Carga los datos por cada pieza de coleccion encontrada en un museo
void cargarDatos(int museoYMayorAntiguedad[2], int numerosDeMuseos_puntoB[570][2], int museos_puntoC[570]) {
  int numeroPieza, museo, donationYear, codigoTipoDePieza;
  bool enExposicion;

  // Variables
  int currentYear = 2023;
  int museo_puntoA = 0, antiguedad;
  int mayorAntiguedad_puntoA = -1;

  cout << "NUMERO DE PIEZA: ";
  cin >> numeroPieza;

  while (numeroPieza != 0) {
    cout << "NUMERO DE MUSEO: ";
    cin >> museo;

    cout << "DONATION's YEAR: ";
    cin >> donationYear;

    cout << "SE ENCUENTRA EN EXPOSICION (1 -Si, 0 - No): ";
    cin >> enExposicion;

    /* Tipos de piezas paleontológicas y sus códigos:
        1 - Dinosaurios terrestres
        2 - Dinosaurios acuáticos
        3 - Dinosaurios aéreos
        4 - Huevos de dinosaurio completos
        5 - Fragmentos de huevos de dinosaurios
        6 - Mamíferos gigantes
        7 - Insectos
    */

    cout << "CODIGO TIPO DE PIEZA: ";
    cin >> codigoTipoDePieza;

    cout << "\nNUMERO DE PIEZA: ";
    cin >> numeroPieza;

    // A
    if (enExposicion) {
      antiguedad = currentYear - donationYear;
    }
    if (mayorAntiguedad_puntoA == -1 || antiguedad > mayorAntiguedad_puntoA) {
      mayorAntiguedad_puntoA = antiguedad;
      museo_puntoA = museo;
    }

    // B
    if (codigoTipoDePieza == 1) {
      numerosDeMuseos_puntoB[museo][0] = 1;
    }
    if (codigoTipoDePieza == 4) {
      numerosDeMuseos_puntoB[museo][1] = 1;
    }

    // C -
    if (donationYear == 2023) {
      museos_puntoC[museo] = true;
    }
  }

  museoYMayorAntiguedad[0] = museo_puntoA;
  museoYMayorAntiguedad[1] = mayorAntiguedad_puntoA;
}

void puntoA(int museoYMayorAntiguedad[2]) {
  int antiguedadMaximaDonacion;

  cout << "\nPUNTO A)" << endl;
  cout << "\t-Museo con la pieza que registra mayor antiguedad: " << museoYMayorAntiguedad[0] << endl;
  cout << "\t-Antiguedad de la donacion: " << museoYMayorAntiguedad[1] << endl;
}

void puntoB(int numerosDeMuseos_puntoB[570][2]) {
  cout << "\nPUNTO B) NUMEROS DE MUSEOS QUE REGISTRARON cod1 y no cod4" << endl;
  for (int i = 0; i < 570; i++) {
    if (numerosDeMuseos_puntoB[i][0] == 1 && numerosDeMuseos_puntoB[i][1] == 0) {
      cout << "\t- Numero de museo: " << i << endl;
    }
  }
}

void puntoC(int museosPuntoC[570]) {
  int counterMuseos_puntoC = 0;
  for (int i = 0; i < 570; i++) {
    if (museosPuntoC[i] == 1) {
      counterMuseos_puntoC++;
    }
  }
  cout << "\nPUNTO C) CANTIDAD DE MUSEOS QUE RECIBIERON AL MENOS UNA PIEZA EN 2023" << endl;
  cout << "\t-La cantidad de museos diferentes es de: " << counterMuseos_puntoC << endl;
}
