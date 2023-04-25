/* 15) La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado.
Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.*/

#include <iostream>
using namespace std;

int main () {
  int maxTemp, minTemp, amplitudTermica;

  cout << "Ingrese la temperatura maxima: " << endl ;
  cin >> maxTemp;

  cout << "Ingrese la temperatura minima :" << endl;
  cin >> minTemp;

  amplitudTermica = maxTemp - minTemp;

  cout << "La amplitud termica fue de " << amplitudTermica << " grados C." << endl << endl;

  return 0;
}
