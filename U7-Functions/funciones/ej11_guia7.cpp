/* Ejercicio 11) guia 7 
Hacer una función que reciba tres números enteros llamados dia, mes y hemisferio y una cadena de caracteres llamada estacion. 

Asignar el nombre de la estación del año de acuerdo al día y mes y dependiendo del hemisferio.

NOTA: Hemisferio será 0 → Sur y 1 → Norte.

*/

#include <iostream>
using namespace std;

void mostrarNombreEstacion(int dia, int mes, int hemisferio, string &estacion);

int main() {
  int dia, mes, hemisferio;
  string estacion;
  string hemisferios[2] = {"Sur", "Norte"};

  dia = 20;
  mes = 12;
  hemisferio = 1;

  mostrarNombreEstacion(dia, mes, hemisferio, estacion);

  cout << "\n NOMBRE DE LA ESTACION:" << endl;
  cout << "\t-Hemisferio: " << hemisferios[hemisferio];
  cout << "\t- FECHA: " << dia << "/" << mes << "/" << endl;
  cout << "\t- " << estacion << endl;

  return 0;
}

void mostrarNombreEstacion(int dia, int mes, int hemisferio, string &estacion) {
  string estaciones[4] = {"Verano", "Otonio", "Invierno", "Primavera"};

  if (hemisferio == 0) {
    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia < 21)) {
      estacion = estaciones[0];
      return;
    }
    if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21)) {
      estacion = estaciones[1];
      return;
    }
    if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 21)) {
      estacion = estaciones[2];
      return;
    } else {
      estacion = estaciones[3];
    }
  }

  if (hemisferio == 1) {
    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia < 21)) {
      estacion = estaciones[2];
      return;
    }
    if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21)) {
      estacion = estaciones[3];
      return;
    }
    if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 21)) {
      estacion = estaciones[0];
      return;
    } else {
      estacion = estaciones[1];
    }
  }
};
