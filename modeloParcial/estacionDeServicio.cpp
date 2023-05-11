/* Una estación de servicio dispone de la información de los últimos 10 turnos realizados por sus empleados. 

Por cada venta de combustible dispone de la siguiente información:
- Número de turno (Desde 1 hasta 10)
- Legajo del empleado (entero)
- Tipo de combustible (Desde 1 hasta 3)
- Litros despachados (real)
- Importe de la venta (real)

La información se encuentra agrupada por número de turno (no necesariamente ordenada).

!Para indicar el fin de la carga de datos de un turno se ingresa un número de legajo de empleado igual a 0.

Se pide calcular e informar:
A) El porcentaje sobre el total de litros de combustibles despachados discriminado por tipo de combustible.
  Ejemplo:
  Combustible 1: 50%
  Combustible 2: 10.5%
  Combustible 3: 39.5%
B) Los tipos de combustibles que no se despacharon en el turno nro 3.
C) Por cada turno, el promedio de litros despachados por venta.
D) El número de turno que más haya facturado en total. Indicar también el total facturado.
E) La cantidad de ventas en las que no se hayan despachado más de 15 litros.
ACLARACIONES: No habrá más de un turno con la mayor facturación total.

*/

#include <iostream>
using namespace std;

int main () {
  // !Cambiar esto a 10 al final
  const int TURNOS = 10;
  int numeroDeTurno;
  int legajoEmpleado;
  int tipoDeCombustible;
  float litrosDespachados;
  float importeVenta;
  
  // Variables a)
  float accumulatorTotalLitrosDespachados = 0;
  float accumulatorLitros1 = 0;
  float accumulatorLitros2 = 0;
  float accumulatorLitros3 = 0;
  
  // Variables b)
  bool despachoTipo1 = 0;
  bool despachoTipo2 = 0;
  bool despachoTipo3 = 0;

  // Variables c)
  float accumulatorLitrosDespachados;
  int counterVentasPorTurno;
  float promedioLitrosPorVenta;

  // variables d)
  int numeroDeTurnoQueMasFacturo;
  float maximoTotalFacturadoXTurnos = 0;
  float accumulatorFacturacionXturno = -1;

  // Variables e)
  int counter_puntoE = 0;


  for (int i = 0; i < TURNOS; i++) {

    // Aca reinicializo las variables por sublote
    accumulatorFacturacionXturno = 0;
    accumulatorLitrosDespachados = 0;
    counterVentasPorTurno = 0;

    cout << "INGRESE EL LEGAJO DEL EMPLEADO: ";
    cin >> legajoEmpleado;

    while (legajoEmpleado != 0) {
      
      cout << "INGRESE EL NUMERO DE TURNO: ";
      cin >> numeroDeTurno;
      
      cout << "INGRESE EL TIPO DE COMBUSTIBLE: ";
      cin >> tipoDeCombustible;
      
      cout << "INGRESE LA CANTIDAD DE LITROS DESPACHADOS: ";
      cin >> litrosDespachados;
     
      cout << "INGRESE EL IMPORTE TOTAL DE LA VENTA: ";
      cin >> importeVenta;


      accumulatorTotalLitrosDespachados += litrosDespachados;

      switch (tipoDeCombustible) {
      case 1:
        accumulatorLitros1 += litrosDespachados;
        break;
      
      case 2:
        accumulatorLitros2 += litrosDespachados;
        break;
      
      case 3:
        accumulatorLitros3 += litrosDespachados;
        break;
      
      default:
        break;
      }

      accumulatorFacturacionXturno += importeVenta;

      accumulatorLitrosDespachados += litrosDespachados;
      counterVentasPorTurno ++;

      if (numeroDeTurno == 3) {
        switch (tipoDeCombustible) {
        case 1:
          despachoTipo1 = 1;
          break;
        
        case 2:
          despachoTipo2 = 1;
          break;
        
        case 3:
          despachoTipo3 = 1;
          break;
        
        default:
          break;
        }
      };
    

      

      if (litrosDespachados <= 15) {
        counter_puntoE++;
      }
      

      // punto de corte
      cout << "INGRESE EL LEGAJO DEL EMPLEADO: ";
      cin >> legajoEmpleado;
    }

    if (maximoTotalFacturadoXTurnos == -1 || maximoTotalFacturadoXTurnos < accumulatorFacturacionXturno) {
      maximoTotalFacturadoXTurnos = accumulatorFacturacionXturno;
      numeroDeTurnoQueMasFacturo = numeroDeTurno;
    }
    
    // Aca muestro los resultados procesados por sublote
    cout << "\n\nPunto C)" << endl;
    promedioLitrosPorVenta = accumulatorLitrosDespachados/float(counterVentasPorTurno);
    cout << "\t-Promedio de litros despachados por venta en el turno " << numeroDeTurno << " : " << promedioLitrosPorVenta << endl << endl;



  }
  
  // Aca muestro los totales generales
  cout << "\nPunto A) PORCENTAJES DISCRIMINADOS POR TIPO DE COMBUSTIBLE" << endl;
  

  cout << endl << endl << "------LITROS 1 " << accumulatorLitros1 << endl << endl;
  cout << endl << endl << "------LITROS 1 " << accumulatorLitros2 << endl << endl;
  cout << endl << endl << "------LITROS 1 " << accumulatorLitros3 << endl << endl;
  cout << endl << endl << "------TOTAL LITROS  " << accumulatorTotalLitrosDespachados<< endl << endl;

  cout << "\t- Combustible 1: " << accumulatorLitros1 / accumulatorTotalLitrosDespachados * 100<< "%" << endl;
  cout << "\t- Combustible 2: " << accumulatorLitros2 / accumulatorTotalLitrosDespachados * 100 << "%" << endl;
  cout << "\t- Combustible 3: " << accumulatorLitros3 / accumulatorTotalLitrosDespachados * 100 << "%" << endl;


  cout << "\nPunto B) COMBUSTIBLES NO DESPACHADOS EN TURNO 3" << endl;
  if (!despachoTipo1) {
    cout << "\t- No se despacho combustible tipo 1" << endl;
  }
  if (!despachoTipo2) {
    cout << "\t- No se despacho combustible tipo 2" << endl;
  }
  if (!despachoTipo3) {
    cout << "\t- No se despacho combustible tipo 3" << endl;
  }

  cout << "\nPunto D) MAXIMO TOTAL FACTURADO" << endl;
  cout << "\t- El turno que mas facturo fue el turno: " << numeroDeTurnoQueMasFacturo << endl;
  cout << "\t- El total facturado en ese turno fue de $ " << maximoTotalFacturadoXTurnos << endl;


  cout << "\nPunto E)" << endl;
  cout << "\t-CANTIDAD DE VENTAS EN LAS QUE NO SE DESPACHARON MAS DE 15 LTS: " <<  counter_puntoE << endl;


  cout << endl << endl;
  return 0;
}