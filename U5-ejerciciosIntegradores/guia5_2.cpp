/* 2) Un banco tiene tres sucursales, ubicadas en las siguientes localidades:	
  -	Sucursal 1: Virreyes
  -	Sucursal 2: San Fernando 
  -	Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:					
  - Nro. de Cliente (100 al 1200)
  - Nro. de Sucursal (1, 2 ó 3)
  - Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones) 
  - Monto en pesos de la transacción

!El último registro se indica con nro. de cliente igual a cero. 

Se pide a partir de estos datos, determinar e informar:
  A.	Cantidad de depósitos por más de $1000.-.
  B.	El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
  C.	El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.				
  D.	Total de pesos depositados en cada una de las sucursales.
  E.	Cantidad de depósitos en la sucursal de Tigre.
  F.	El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).
*/


#include <iostream>
#include <cctype>
using namespace std;

int main (){
  int cliente, sucursal;
  float monto;
  char codigoTransaccion;
  
  // Variables para los puntos que se pide:
  int deposito, extraccion, contadorDepositos = 0;

  int maxExtraccion = 0, clienteMaxExtraccion = 0, sucursalMaxExtraccion = 0 ;
  bool primeraExtracion = true;

  float totalExtrac_suc1 = 0, totalExtrac_suc2 = 0, totalExtrac_suc3 = 0;
  float totalTransacciones;
  
  float totalDeposito_suc1 = 0, totalDeposito_suc2 = 0, totalDeposito_suc3 = 0;
  int contador_sucursal1 = 0 ,contador_sucursal2 = 0 , contador_sucursal3 = 0;
  int sucursalMaxDepositos;


  cout << "NUMERO DE CLIENTE: " ;
  cin >> cliente ;

  if (cliente != 0) {
    while (cliente < 100 || cliente > 1200) {
      cin >> cliente ;
    }
  }

  while ( cliente != 0) {
    deposito = 0;
    extraccion = 0;
    cout << "NUMERO DE SUCURSAL: " ;
    cin >> sucursal ;

    cout << "CODIGO DE TRANSACCION: ";
    cin >> codigoTransaccion;
    codigoTransaccion= toupper(codigoTransaccion);

    cout << "MONTO DE LA TRANSACCION ";
    cin >> monto;

    //  Punto A)
    if (codigoTransaccion == 'D') {
      deposito = monto;
      if (deposito > 1000) {
        contadorDepositos++;
      }
    } else { // punto B)
        if (primeraExtracion) {
          extraccion = monto;
          maxExtraccion = extraccion;
          primeraExtracion = false;

        } else {
            extraccion = monto;
            if (extraccion > maxExtraccion){
              maxExtraccion = extraccion;
              sucursalMaxExtraccion = sucursal;
              clienteMaxExtraccion = cliente;
            }
        }
    }

    // punto C y D)
    switch (sucursal) {
    case 1:
      totalExtrac_suc1 += extraccion;
      totalDeposito_suc1 += deposito;
      contador_sucursal1++;
      break;
    case 2:
      totalExtrac_suc2 += extraccion;
      totalDeposito_suc2 += deposito;
      contador_sucursal2++;
      break;
    case 3:
      totalExtrac_suc3 += extraccion;
      totalDeposito_suc3 += deposito;
      contador_sucursal3++;
      break;
    
    default:
      break;
    }

    if (contador_sucursal1 > contador_sucursal2 && contador_sucursal1 > contador_sucursal3) {
      sucursalMaxDepositos = 1;
    } else {
      if (contador_sucursal2 > contador_sucursal1 && contador_sucursal2 > contador_sucursal3) {
        sucursalMaxDepositos = 2;
      } else {
        sucursalMaxDepositos = 3;
      }
      
    }

    cout << "\nNUMERO DE CLIENTE: " ;
    cin >> cliente ;

    if (cliente !=0) {
      while (cliente < 100 || cliente > 1200) {
        cin >> cliente ;
      } 
    }
  }


  // A)
  cout << "\nA)";
  cout << "\n\t-Cantidad de depositos mayores a $1000: " << contadorDepositos << endl;
  // B)
  cout << "\nB)";
  cout << "\n\t-Nro CLIENTE max Extraccion: " << clienteMaxExtraccion << endl;
  cout << "\t-Nro SUCURSAL max Extraccion: " << sucursalMaxExtraccion << endl;
  //C)
  cout << "\nC)";
  cout << "\n\t-PORCENTAJES DE TRANSACCIONES SUCURSAL 1: " << endl;
  cout << "\t-PORCENTAJE DE DEPOSITOS: " << float(totalDeposito_suc1/(totalDeposito_suc1+totalExtrac_suc1)*100 )<<endl;
  cout << "\t-PORCENTAJE DE EXTRACCIONES: " << float(totalExtrac_suc1/(totalDeposito_suc1+totalExtrac_suc1)*100) <<endl;
 
  cout << "\n\t-PORCENTAJES DE TRANSACCIONES SUCURSAL 2: " << endl;
  cout << "\t-PORCENTAJE DE DEPOSITOS: " << float(totalDeposito_suc2/(totalDeposito_suc2+totalExtrac_suc2)*100) <<endl;
  cout << "\t-PORCENTAJE DE EXTRACCIONES: " << float(totalExtrac_suc2/(totalDeposito_suc2+totalExtrac_suc2)*100) <<endl;
 
  cout << "\n\t-PORCENTAJES DE TRANSACCIONES SUCURSAL 3: " << endl;
  cout << "\t-PORCENTAJE DE DEPOSITOS: " << float(totalDeposito_suc3/(totalDeposito_suc3+totalExtrac_suc3)*100) <<endl;
  cout << "\t-PORCENTAJE DE EXTRACCIONES: " << float(totalExtrac_suc3/(totalDeposito_suc3+totalExtrac_suc3)*100) <<endl;
 
  //D)
  cout << "\nD)";
  cout << "\n\t-TOTAL PESOS DEPOSITADOS EN SUCURSAL 1: " << totalDeposito_suc1;
  cout << "\n\t-TOTAL PESOS DEPOSITADOS EN SUCURSAL 2: " << totalDeposito_suc2;
  cout << "\n\t-TOTAL PESOS DEPOSITADOS EN SUCURSAL 3: " << totalDeposito_suc3;
  // E)
  cout << "\nE)";
  cout << "\n\t-CANTIDAD DE DEPOSITOS EN LA SUCURSAL DE TIGRE: " << contador_sucursal3;
  // F)
  cout << "\nF)";
  cout << "\n\t-SUCURSAL QUE MAS DEPOSITOS RECIBIO: " << sucursalMaxDepositos;

  cout << endl << endl;
  return 0;

}