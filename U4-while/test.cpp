#include <iostream>
using namespace std;

int main(void) {
// DECLARACIONES
  int numeros;
  int contador_par = 0;

  cout << "Ingrese un numero: ";
  cin >> numeros;

  while(contador_par < 5) {
 
    if (numeros % 2 == 0)  {
      contador_par++;
    }
   
    cout << "Ingrese un numero: ";
    cin >> numeros;
      
    return 0;
}