#include <iostream>
using namespace std;

int main () {
  float totalWeek1, totalWeek2, totalWeek3, totalWeek4, monthyTotal;
  float percentageWeek1, percentageWeek2, percentageWeek3, percentageWeek4;

  cout << "Ingrese la recaudacion de la semana 1" << endl;
  cin >> totalWeek1;

  cout << "Ingrese la recaudacion de la semana 2" << endl;
  cin >> totalWeek2;

  cout << "Ingrese la recaudacion de la semana 3" << endl;
  cin >> totalWeek3;

  cout << "Ingrese la recaudacion de la semana 4" << endl;
  cin >> totalWeek4;

  monthyTotal = totalWeek1 + totalWeek2 + totalWeek3 + totalWeek4;

  percentageWeek1 = (totalWeek1 / monthyTotal) * 100;
  percentageWeek2 = (totalWeek2 / monthyTotal) * 100;
  percentageWeek3 = (totalWeek3 / monthyTotal) * 100;
  percentageWeek4 = (totalWeek4 / monthyTotal) * 100;

  cout << "Porcentaje semana 1:" << percentageWeek1 << "%" << endl;
  cout << "Porcentaje semana 2:" << percentageWeek2 << "%" << endl;
  cout << "Porcentaje semana 3:" << percentageWeek3 << "%" << endl;
  cout << "Porcentaje semana 4:" << percentageWeek4 << "%" << endl;

  
  return 0;
}