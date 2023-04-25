/* 20) Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
-	Número de partido
-	Minutos jugados
-	Tarjetas amarillas
-	Tarjetas rojas
-	Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
-	La cantidad de partidos que no jugó (partidos con minutos igual a cero)
-	La cantidad de partidos que jugó por completo (minutos >= 90)
-	El promedio de tarjetas recibidas por partido.
-	El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
-	La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.	

*/

#include <iostream>
using namespace std;

int main () {
  int qPartidos = 3;
  int numero_partido, minutos_jugados, tarjeta_amarilla, tarjeta_roja, goles;
  int partidos_completos = 0, partidos_no_jugado = 0, tarjetas_recibidas = 0;

  for (int i = 1; i <= qPartidos; i++) {
    cout << endl;
    cout << "Partido Numero: " << i << endl << endl;
    cout << "Ingrese el numero de partido: " ;
    cin >> numero_partido;

    cout << "Ingrese la cantidad de minutos jugados: " ;
    cin >> minutos_jugados;

    if (minutos_jugados > 0) {
      cout << "Ingrese la cantidad de tarjetas amarillas: " ;
      cin >> tarjeta_amarilla;

      cout << "Ingrese la cantida1d de tarjetas rojas: " ;
      cin >> tarjeta_roja;

      cout << "Ingrese la cantidad de goles: " ;
      cin >> goles;
    }
    


    if (minutos_jugados == 0) {
      partidos_no_jugado++;
    }
    if (minutos_jugados >= 90) {
      partidos_completos++;
    }
    
    
   
  }

  cout << endl;
  cout << "ESTADISTICAS" << endl << endl;
  
  cout << "Partidos jugados por completo: " << partidos_completos << endl;
  cout << "Partidos no jugados: " << partidos_no_jugado<< endl;

  cout << endl << endl;
  return 0;
}