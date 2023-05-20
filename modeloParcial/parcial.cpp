#include <iostream>
using namespace std;  

int main () {
  
  int IDProtocolo;
  int nivelSodio;
  float nivelPlatino;
  float determinacionPH;
  float litrosMuestra;

  // Variables A)
  int counterProtocolos_puntoA = 0;
  bool flag_sodioAceptable = false;
  bool flag_platinoAceptable = false;
  bool flag_PHAceptable = false;

  cout << "INGRESAR ID POROTOCOLO: ";
  cin >> IDProtocolo;

  while (IDProtocolo != 0) {
    cout << "INGRESAR NIVEL DE SODIO: ";
    cin >> nivelSodio;

    cout << "INGRESAR NIVEL DE PLATINO: ";
    cin >> nivelPlatino;

    cout << "INGRESAR DETERMINACION DE PH: ";
    cin >> determinacionPH;

    cout << "INGRESAR LITROS DE MUESTRA: ";
    cin >> litrosMuestra;

    if (nivelSodio <= 150) {
      flag_sodioAceptable = true;
    }

    if (nivelPlatino >= 0.2 && nivelPlatino <= 12) {
      flag_platinoAceptable = true;
    }

    if (determinacionPH >= 6,5 && determinacionPH <= 8,5) {
      flag_PHAceptable = true;
    }

    if (flag_sodioAceptable && flag_platinoAceptable && flag_PHAceptable) {
      counterProtocolos_puntoA++;
    }
    
    // CORTE
    cout << "INGRESAR ID PROTOCOLO: ";
    cin >> IDProtocolo;
  }

  cout << "CANTIDAD DE PROTOCOLOS ACEPTABLES: " << counterProtocolos_puntoA << endl;



  


  return 0;
}