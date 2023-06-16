/* Actividad Ejercicio examen final Larapalooza UTN

El festival musical Larapalooza se realizó este año en el mes de Marzo y desea
registrar la información de todos los artistas que participaron. Por cada
artista y día registra:

- Número de día (1 a 3)
- Número de artista (100 a 130)
- Género musical del artista (1 a 25)
- Cantidad de minutos de show (entero)
- Cantidad de canciones a tocar (entero)

Aclaraciones:
- Un mismo artista puede tocar en varios días.
- Un artista pertenece a un género y sólo uno.

El fin de los datos se indica con un número de día igual a 0. Los datos no están
agrupados ni ordenados.

Calcular e informar:
El género musical que más minutos tocó el día 3.
La cantidad de artistas que hayan participado en los tres días del recital.
Los números de artistas que hayan tocado más de 15 temas en el recital (teniendo
en cuenta todos los días en los que hayan participado). Los géneros que no hay
participado en absoluto del recital.


!GETLINE - Ver

*/

#include <iostream>
using namespace std;

int main() {
  int votosEstaciones[4] = {}; // 1 Verano, 2otonio, 3invierno, 4primavera;
  int i, nroEstacion;

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese la estaciond del anio favorita: 1 Verano, 2 tonio, 3 invierno, 4 primavera ";
    cin >> nroEstacion;

    votosEstaciones[nroEstacion - 1]++;
  }

  for (int j = 0; j < 4; j++) {
    cout << "La estacion " << j + 1 << " tiene " << votosEstaciones[j]
         << " votos" << endl;
  }

  cout << endl;
  cout << endl;
  return 0;
}