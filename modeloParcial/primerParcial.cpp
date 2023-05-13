/* PRIMER PARCIAL SECRETARIA DE AGRICULTURA - TEMA 1
La Secretaría de Agricultura de la Provincia de Buenos Aires dispone de los registros de cosecha de 10 de sus hortalizas producidas en sus numerosas localidades. Por cada hortaliza y localidad se registró:

- Código de hortaliza (entero entre 10 y 50)
- Código de localidad (entero entre 4000 y 9000)
- Cantidad total de toneladas previstas a cosechar (float)
- Cantidad total de toneladas cosechadas (float)
- Inversión total expresada en millones (float)

Todas las hortalizas registran información. 
La información se encuentra agrupada por Código de hortaliza. FOR 
!Para indicar el fin de la carga de registros de una hortaliza se ingresa un código de localidad igual a 0.

Se pide calcular e informar

A) Por cada hortaliza, la cantidad de localidades en las que se obtuvo una cosecha menor a la prevista.
B) El porcentaje de toneladas cosechadas con respecto al total de las toneladas previstas por cosechar entre todas las hortalizas.
C) La cantidad de hortalizas por las que se realizó una inversión totalizada de más de 100 millones.
D) La localidad que haya logrado la menor cantidad total de toneladas cosechadas de la hortaliza con código 20.

Aclaraciones : Solamente habrá una localidad que haya cosechado la menor cantidad de toneladas de la hortaliza con código 20.
*/

#include <iostream>
using namespace std;

int main () {
  const int CANTIDAD_HORTALIZAS = 10;

  int codigoHortaliza; //(entero entre 10 y 50)
  int codigoLocalidad; //(entero entre 4000 y 9000)
  float toneladasPrevistas;
  float toneladasCosechadas;
  float inversionTotal;

  // Variables A)
  int counterLocalidades_puntoA;

  // Variables B)
  float accumulatorTonPrevistas = 0;
  float accumulatorTonCosechadas = 0;
  float percentageTonCosechadas;

  // Variables C)
  int counterHortalizas_puntoC = 0;
  int accumulatorInversionTotalizada;

  // Variables D)
  int codigoLocalidadMenorCosecha_puntoD;
  float menorCosecha = -1;

  for (int i = 0; i < CANTIDAD_HORTALIZAS; i++) {
    
    cout << "\nCODIGO DE LOCALIDAD: ";
    cin >> codigoLocalidad;
    while (codigoLocalidad < 4000 || codigoLocalidad > 9000) {
      cin >> codigoLocalidad;
    }
   
    counterLocalidades_puntoA = 0;
    accumulatorInversionTotalizada = 0;

    while (codigoLocalidad != 0) {

      cout << "CODIGO DE HORTALIZA: ";
      cin >> codigoHortaliza;
      while (codigoHortaliza < 10 || codigoHortaliza > 50) {
        cin >> codigoHortaliza;
      }
      
      cout << "TONELADAS PREVISTAS: ";
      cin >> toneladasPrevistas;
      
      cout << "TONELADAS COSECHADAS: ";
      cin >> toneladasCosechadas;
      
      cout << "INVERSION TOTAL (expresada en M): ";
      cin >> inversionTotal;

      // A)
      if (toneladasCosechadas < toneladasPrevistas) {
        counterLocalidades_puntoA++;
      }

      // B)
      accumulatorTonPrevistas += toneladasPrevistas;
      accumulatorTonCosechadas += toneladasCosechadas;

      // C)
      accumulatorInversionTotalizada += inversionTotal;

      // D)
      if (codigoHortaliza == 20) {
        if (menorCosecha == -1 || toneladasCosechadas < menorCosecha) {
          menorCosecha = toneladasCosechadas;
          codigoLocalidadMenorCosecha_puntoD = codigoLocalidad;
        }
      }

      cout << "CODIGO DE LOCALIDAD: ";
      cin >> codigoLocalidad;
    }

    if (accumulatorInversionTotalizada > 100) {
      counterHortalizas_puntoC++ ;
    }
    
    cout << "\n\nPUNTO A) Hortaliza COD: " << codigoHortaliza << endl;
    cout << "\t-Cantidad de localidades con cosecha menor a la prevista: " << counterLocalidades_puntoA << endl;
  }

  cout << "\n\nPUNTO B) PORCENTAJE TON COSECHADAS RESPECTO A LAS PREVISTAS" << endl;
  percentageTonCosechadas = accumulatorTonCosechadas / accumulatorTonPrevistas * 100;
  cout << "\t-El porcentaje de TON cosechadas fue de: " << percentageTonCosechadas << " %"<< endl;
  
  cout << "\n\nPUNTO C) CANTIDAD DE HORTALIZAS CON INVERSION MAYOR A 100 M" << endl;
  cout << "\t-La cantidad fue de : " << counterHortalizas_puntoC << endl;
  
  cout << "\n\nPUNTO D) LOCALIDAD CON MENOR COSECHA DE HORTALIZA COD 20" << endl;
  cout << "\t-La localidad fue la COD: " << codigoLocalidadMenorCosecha_puntoD << endl;

  cout << endl << endl;
  return 0;
}

/*
PARA TESTEAR UTILICE 5 sublotes (VARIABLE CANTIDAD_HORTALIZAS = 5):
https://docs.google.com/spreadsheets/d/1X8jgMHKGfRIupXznVgfOZB__6jUTXh5kOLMLs6XyTe4/edit?usp=sharing
*/