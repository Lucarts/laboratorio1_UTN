// Ejercicio 17. Laboratorio Gonzalez&Velez
#include <iostream>
using namespace std;

int main () {
  float frascos, qPildoras;
  float briancetamol, pintoxicilina, acidoSimonitico;

  // Cada pildora contiene (medido en mg): 
  briancetamol = 45;
  pintoxicilina = 2 * 1000;
  acidoSimonitico = 7;

  cout << "Ingrese la cantidad de frascos del pedido: " << endl;
  cin >> frascos;

  qPildoras = 75 * frascos;

  cout << "La cantidad de mg Briancetamol que son necesarios para elaborar " << frascos << " frascos es de : " << briancetamol * qPildoras << endl;
  cout << "La cantidad de mg Pintoxicilina que son necesarios para elaborar " << frascos << " frascos es de : " << pintoxicilina * qPildoras << endl;
  cout << "La cantidad de mg acidoSimonitico que son necesarios para elaborar " << frascos << " frascos es de : " << acidoSimonitico * qPildoras << endl;
  
  return 0;
}
