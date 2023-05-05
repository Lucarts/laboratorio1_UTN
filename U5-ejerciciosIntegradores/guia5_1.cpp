/* 1) En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen. Son 50 empleados y los sueldos son:
•	Categoría 1: $38000 
•	Categoría 2: $70000
•	Categoría 3: $105000			

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:

- Categoría (1 a 3)
- Antigüedad (entero)				

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:				
A.	¿Cuantos empleados hay para cada categoría? OK
B.	Total de sueldos (en $) pagados para cada categoría.
C.	Sueldo Promedio.
D.	¿Cual fue el sueldo máximo y a que categoría pertenece?

*/

#include <iostream>
#include <ctype.h>
using namespace std;

int main (){
  int cat, antiguedad;
  const int CANTIDAD_EMPLEADOS = 50;
  const int ADICIONAL_ANTIGUEDAD = 1200;
  int sueldoBase, sueldoAntiguedad, sueldoTotal;
  int i;

  // A) Creo las variables para contar las categorias
  int counter_1 = 0, counter_2 = 0, counter_3 = 0; 
  // B) Creo varibale acumuladora para los sueldos x categoria
  int acum_1 = 0 , acum_2 = 0 , acum_3 = 0;
  // C) Variable para calcular el sueldo promedio
  float sueldoPromedio;
  // D) Creo variable para guardar el sueldo maximo y cat del maximo.
  int sueldoMax = 0;
  int catMax;

  for (i = 0; i < CANTIDAD_EMPLEADOS; i++){
    cout << "CATEGORIA: " ;
    cin >> cat;
    
    cout << "ANTIGUEDAD: " ;
    cin >> antiguedad;

    sueldoAntiguedad = antiguedad * ADICIONAL_ANTIGUEDAD;

    switch (cat) {
      case 1:
        sueldoBase = 38000;
        counter_1++;

        sueldoTotal = sueldoBase + sueldoAntiguedad;
        acum_1 += sueldoTotal;
        break;
      case 2:
        sueldoBase = 70000;
        counter_2++;
        
        sueldoTotal = sueldoBase + sueldoAntiguedad;
        acum_2 += sueldoTotal;
        break;
      case 3:
        sueldoBase = 105000;
        counter_3++;

        sueldoTotal = sueldoBase + sueldoAntiguedad;
        acum_3 += sueldoTotal;
        break;

      default:
        break;
    }

    if (sueldoTotal > sueldoMax) {
      sueldoMax = sueldoTotal;
      catMax = cat;
    }

  }
  
  sueldoPromedio = float( acum_1 + acum_2 + acum_3 ) / CANTIDAD_EMPLEADOS;
  
  // A)
  cout << "\n\tA)TOTAL EMPLEADOS CAT 1: " << counter_1 << endl;
  cout << "\n\tA)TOTAL EMPLEADOS CAT 2: " << counter_2 << endl;
  cout << "\n\tA)TOTAL EMPLEADOS CAT 3: " << counter_3 << endl;

  // B) TOTAL DE SUELDOS PAGADOS POR CATEGORIA
  cout << "\n\tB)TOTAL SUELDOS PAGADOS CATEGORIA 1: $" << acum_1 << endl; 
  cout << "\n\tB)TOTAL SUELDOS PAGADOS CATEGORIA 2: $" << acum_2 << endl; 
  cout << "\n\tB)TOTAL SUELDOS PAGADOS CATEGORIA 3: $" << acum_3 << endl; 

  // C) SUELDO PROMEDIO
  cout << "\n\tC)SUELDO PROMEDIO POR EMPLEADO: $" << sueldoPromedio << endl; 

  // D) SUELDO MAXIMO Y CATEGORIA MAX
  cout << "\n\tD) SUELDO MAXIMO: $" << sueldoMax << endl; 
  cout << "\tD)PERTENECE A LA CATEGORIA: " << catMax<< endl; 


  cout << endl << endl;
  return 0;
}