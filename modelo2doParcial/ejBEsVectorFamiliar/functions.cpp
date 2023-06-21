#include <iostream>
using namespace std;

// function definition

bool EsVectorFamiliar(int array[], int arrayLength);

int main() {
  int longitudArray = 4;
  int arrayPrimos[longitudArray] = {7, 3, 5, 4};

  bool esArrayPrimo = EsVectorFamiliar(arrayPrimos, longitudArray);

  cout << "\n\t - El vector es primo : " << esArrayPrimo;

  cout << endl;
  return 0;
}

bool EsVectorFamiliar(int array[], int arrayLength) {
  int i, j, counterDivisores;
  bool esFamiliar = false;

  for (i = 0; i < arrayLength; i++) {
    counterDivisores = 0;

    for (j = 1; j <= array[i]; j++) {
      if (array[i] % j == 0) {
        counterDivisores++;
      }
    }

    if (counterDivisores == 2) {
      esFamiliar = true;
    } else {
      esFamiliar = false;
    }
  }

  return (esFamiliar);
}
