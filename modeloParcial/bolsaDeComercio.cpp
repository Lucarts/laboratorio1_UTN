/*  Parcial BOLSA DE COMERCIO
La Bolsa de Comercio de la Ciudad de Buenos Aires brinda la información de la cotización de algunas acciones de la semana pasada.

Por cada acción se tiene cinco registros de cotización. 

Cada cotización registra la siguiente información:
- Código de acción (entero)
- Precio apertura (float)
- Precio cierre (float)
- Volumen de venta (entero)

Los datos se encuentran agrupados por código de acción. 
Hay cinco cotizaciones por cada acción. 
El fin de los datos se indica con un código de acción igual a 0.


Se pide calcular e informar:
A) Por cada acción, el promedio de volumen de venta.
B) La cantidad de acciones que hayan registrado todas sus cotizaciones en alza. Es decir, el precio de cierre siempre sea mayor al precio de apertura.
C) La acción que más haya incrementado su valor en una cotización en particular. Es
decir, la diferencia entre el precio de apertura y precio de cierre más grande.
D) La cantidad de cotizaciones en las que el precio no varió. Es decir, el precio de
apertura es igual al precio de cierre.
*/

#include <iostream>
using namespace std;

int main () {
  const int CANTIDAD_COTIZACIONES = 5;

  int codigoAccion;
  float precioApertura;
  float precioCierre;
  int volumenVenta;

  // Variables A)
  float averageVolumenVenta;
  float accumulatorVolumenVenta;
  const int CANTIDAD_REGISTROS = 5;

  // Variables B)
  int counterAccionesEnAlta = 0;
  bool registroBaja;

  // Variables C)
  int accionQueMasIncremento;
  float diferenciaCotizacion;
  float maxDiferenciaCotizacion = -1;

  // Variables D)
  int counterCotizacionesQueNoVariaron = 0;

  cout << "INGRESE CODIGO DE ACCION: ";
  cin >> codigoAccion;

  while (codigoAccion != 0) {

    accumulatorVolumenVenta = 0;
    averageVolumenVenta = 0;
    registroBaja = false;
    diferenciaCotizacion = 0;

    for (int i = 0; i < CANTIDAD_COTIZACIONES; i++) {
      cout << "PRECIO DE APERTURA: ";
      cin >> precioApertura;

      cout << "PRECIO DE CIERRE: ";
      cin >> precioCierre;

      cout << "VOLUMEN DE VENTA: ";
      cin >> volumenVenta;

      accumulatorVolumenVenta += volumenVenta;

      if (precioCierre < precioApertura) {
        registroBaja = true;
      }
      
      diferenciaCotizacion = precioCierre - precioApertura;
      if (maxDiferenciaCotizacion == -1 || maxDiferenciaCotizacion < diferenciaCotizacion) {
        maxDiferenciaCotizacion = diferenciaCotizacion;
        accionQueMasIncremento = codigoAccion;
      }
      
      if (precioApertura == precioCierre) {
        counterCotizacionesQueNoVariaron ++;
      }
    }
    
    if (!registroBaja) {
      counterAccionesEnAlta++;
    }

    // Aca muestro los totales por sublote
    cout << "\n\nPUNTO A) PROMEDIO DEL VOLUMEN DE VENTA DE LA ACCION COD:" << codigoAccion << endl;
    averageVolumenVenta = accumulatorVolumenVenta / CANTIDAD_REGISTROS;
    cout << "\t-El promedio del volumen de venta fue de: " << averageVolumenVenta << endl;
    
    cout << "INGRESE CODIGO DE ACCION: ";
    cin >> codigoAccion;
  }
  
  cout << "\n\nPUNTO B) CANTIDAD DE ACIONES QUE REGISTRARON SOLO ALZA:" << endl;
  cout << "\t-Acciones que registraron todas sus cotizaciones en alza: " << counterAccionesEnAlta << endl;

  cout << "\nPUNTO C) ACCION QUE MAS INCREMENTO:" << endl;
  cout << "\t-La que mas incremento fue la accion COD:" << accionQueMasIncremento << endl;

  cout << "\nPUNTO D) CANTIDAD DE COTIZACIONES QUE NO VARIARON:" << endl;
  cout << "\t-Cotizaciones en las que el precio no vario: " << counterCotizacionesQueNoVariaron<< endl;

  cout << endl << endl;
  return 0;
}