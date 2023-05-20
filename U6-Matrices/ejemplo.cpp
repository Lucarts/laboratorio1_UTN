/*
Crear un programa que permita ingresar el ahorro mensual de una persona durante los meses del año.
*/

#include <iostream>
using namespace std;

int main()
{
  string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

  float ahorro[12] = {};

  for (int i = 0; i < 12; i++)
  {
    cout << "Ingrese el ahorro del mes de " << meses[i] << "$ ";
    cin >> ahorro[i];
  }

  // MOSTRAR TOTALES POR SEMESTRES
  float totalSemestre1 = 0, totalSemestre2 = 0;

  // for (int i = 0; i < 12; i++) {
  //   if (i < 6) {
  //   totalSemestre1 += ahorro[i];
  //   } else {
  //     totalSemestre2 += ahorro[i];
  //   }
  // }

  float totalAhorroCuatrimestre[3] = {};

  for (int i = 0; i < 12; i++)
  {
    int mes = i;
    int cuatrimestre = mes / 3;
    totalAhorroCuatrimestre[cuatrimestre] += ahorro[i];
  }

  for (int i = 0; i < 3; i++)
  {
    cout << "Cuatrimestre " << i + 1 << " fue $ " << totalAhorroCuatrimestre[i] << endl;
  }

  return 0;
}
