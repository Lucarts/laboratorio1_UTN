/* 15) Hacer un programa para ingresar por teclado las cuatro notas 
de los exámenes obtenidas por un alumno y luego emitir uno solo 
de los cartel de acuerdo a las siguientes condiciones: 
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más. 
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/

#include <iostream>
using namespace std;

int main () {
  int nota1, nota2, nota3, nota4, aprobadosCounter;

  // Console in the califications
  cout << "Ingrese las 4 notas obtenidas" << endl;
  cin >> nota1;
  cin >> nota2;
  cin >> nota3;
  cin >> nota4;

  if (nota1 >= 4) {
    aprobadosCounter++;
  }
  if (nota2 >= 4) {
    aprobadosCounter++;
  }
  if (nota3 >= 4) {
    aprobadosCounter++;
  }
  if (nota4 >= 4) {
    aprobadosCounter++;
  }
  
  // Si aprobo al menos un examen:
  if (nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4) {
    
    if (nota1 >=7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7)  {
      cout << "PROMOCIONA";
    } else {
      if (aprobadosCounter >= 3) {
        cout << "RINDE EXAMEN FINAL" ;
      } else {
          cout << "Recupera parciales" ;
      }
    }
  } else {
      cout << "RECURSA";
  }

  cout << endl << endl;
  return 0;
}