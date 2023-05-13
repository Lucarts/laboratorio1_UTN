/* Una zapatería dispone de la información de los calzados vendidos en el primer cuatrimestre de 2023 en sus 10 sucursales. 
Por cada venta se registra:
-	Sucursal (número entero)
-	Mes (1 a 4)
-	Tipo de calzado ('Z' - Zapatos, 'X' - Zapatillas, 'P' - Pantuflas, 'O' - Ojotas)
-	Número de talle (entero)
-	Importe (float)

Todas las sucursales han registrado ventas. (CICLO FOR CON 10 vueltas)
La información se encuentra agrupada por sucursal (CICLO WHILE). 

!Para indicar el fin de la carga de datos de una sucursal se ingresa un código de sucursal igual a cero. 

Se pide calcular e informar
A)	Por cada sucursal, el promedio de importe de los calzados de talle 40.	
B)	La cantidad de sucursales que vendieron zapatos pero no pantuflas.	
C)	El tipo de calzado que haya totalizado más dinero en concepto de ventas	
D)	Los tipos de calzados que haya vendido la sucursal número 50. Se deben listar los nombres de los tipos de calzados vendidos sin repetir.	

Aclaraciones
-	Una venta solamente registra un tipo de calzado.
-	Solamente habrá un tipo de calzado que haya totalizado la mayor cantidad de dinero en total en concepto de ventas.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main () {
  const int NUMERO_SUCURSALES = 4;

  int sucursal, mes, talle;
  char tipoCalzado;
  float importe;

  // Variables A)
  float acumuladorImporte_puntoA, promedioImporte_puntoA;
  int counterImporte_puntoA;
  bool vendioTalle40;
  
  // B) 
  int counterSucursales_puntoB = 0;
  bool vendioPantuflas, vendioZapatos, vendioOjotas, vendioZapatillas;
  bool sucursal50 = 0;

  // C)
  float importeTotalZ = 0, importeTotalX = 0, importeTotalP = 0, importeTotalO = 0;
  float mayor_puntoB = -1;
  string calzado_puntoB;

  // D)


  for (int i = 0; i < NUMERO_SUCURSALES; i++){
    
    vendioPantuflas = 0;
    vendioZapatos = 0;
    vendioZapatillas = 0;
    vendioOjotas = 0;

    vendioTalle40 = 0;

    acumuladorImporte_puntoA = 0;    
    counterImporte_puntoA = 0;

    cout << "\nINGRESE EL NUMERO DE SUCURSAL: ";
    cin >> sucursal;

    while (sucursal != 0) {
      
      if (sucursal == 50) {
        sucursal50 = 1;
      } else {
        sucursal50 = 0;
      }

      cout << "INGRESE EL MES: ";
      cin >> mes;

      cout << "INGRESE EL TIPO DE CALZADO: ";
      cin >> tipoCalzado;
      tipoCalzado = toupper(tipoCalzado);

      cout << "INGRESE EL NUMERO DE TALLE: ";
      cin >> talle;

      cout << "INGRESE EL IMPORTE";
      cin >> importe;

      if (talle == 40) {
        vendioTalle40 = 1;
        acumuladorImporte_puntoA += importe;
        counterImporte_puntoA ++;
      }

      switch (tipoCalzado) {
        case 'Z':
        vendioZapatos = 1;
        importeTotalZ += importe;
        break;

        case 'X':
        vendioZapatillas = 1;
        importeTotalX += importe;
        break;

        case 'P':
        vendioPantuflas = 1;
        importeTotalP += importe;
        break;

        case 'O':
        vendioOjotas = 1;
        importeTotalO += importe;
        break;
      
      default:
        break;
      };

      // C)
      if (mayor_puntoB == -1 || mayor_puntoB < importeTotalZ) {
        calzado_puntoB = "ZAPATOS";
        mayor_puntoB = importeTotalZ;
      };

      if (mayor_puntoB == -1 || mayor_puntoB < importeTotalX) {
        calzado_puntoB = "ZAPATILLAS";
        mayor_puntoB = importeTotalX;
      };

      if (mayor_puntoB == -1 || mayor_puntoB < importeTotalP) {
        calzado_puntoB = "PANTUFLAS";
        mayor_puntoB = importeTotalP;
      } 

      if (mayor_puntoB == -1 || mayor_puntoB < importeTotalO) {
        calzado_puntoB = "OJOTAS";
        mayor_puntoB = importeTotalO;
      } 

      cout << "\nINGRESE EL NUMERO DE SUCURSAL";
      cin >> sucursal;
    }

    // A)
    cout << "\n\nPUNTO A)";
    if (vendioTalle40) {
      promedioImporte_puntoA = acumuladorImporte_puntoA/float(counterImporte_puntoA);
      cout << "\n\tEL PROMEDIO DE IMPORTE DE LOS CALZADOS TALLE 40 FUE DE: $ " << promedioImporte_puntoA << endl;
    }
    

    // B)
    if (!vendioPantuflas && vendioZapatos) {
      counterSucursales_puntoB ++;
    }

    // D)
    if (sucursal50) {
      cout << "\n\nPUNTO D) TIPOS DE CALZADOS VENDIDOS POR LA SUCURSAL 50";
      
      if (vendioZapatos) {
        cout << "\n\t-ZAPATOS";
      } 

      if (vendioZapatillas) {
          cout << "\n\t-ZAPATILLAS";
      } 

      if (vendioOjotas) {
        cout << "\n\t-OJOTAS";
      } 
      
      if (vendioPantuflas) {
        cout << "\n\t-PANTUFLAS" << endl << endl;  
      }
    }
  }

  // B)
  cout << "\nPUNTO B)";
  cout << "\n\tCANTIDAD SUC QUE VENDIERON ZAPATOS PERO NO PANTUFLAS: " << counterSucursales_puntoB << endl;
  // C)
  cout << "\nPUNTO C)";
  cout << "\n\tTIPO DE CALZADO QUE TOTALIZO MAS DINERO: " << calzado_puntoB << endl;

  cout << endl << endl;
  return 0;

};