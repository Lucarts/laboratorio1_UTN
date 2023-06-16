/*1) 
Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

#include <iostream>
using namespace std;

int main() {

  return 0;
}

/* OTROS EJERCICIOS RESUELTOS 

2	Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.	
3	Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.	
4	Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
-	Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
-	El número de día que más se recaudó en total y cuál fue la recaudación máxima.	
5	Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega. Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores. Sólo deben utilizarse dos vectores en el programa: pos y nega.	
6	Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.
Ejemplo:	 
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.	
7	Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor. Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.
               	 
Ejemplo:               	 
Vector → {1 3 4 5 6 7 10 12 16} 
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16} 	
8	El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
-	Numero de Entrenamiento (1 - 9999)
-	Cliente (101- 150)
-	Tipo de Entrenamiento ( 1 - 10 )
-	Tiempo del Entrenamiento (minutos)
Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada. El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
-	Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
-	Por cada cliente, los tipos de entrenamiento que realizó.
-	Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
-	El número de cliente que más tiempo haya entrenado.
-	Los tipos de entrenamiento que no se realizaron por ningún cliente.	
9	Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:               	 
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo           	 
A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de registros con la siguiente información:    
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día
               	 
Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes. Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.	
10	LaraRaffle es el sorteo más importante de Argentina. Se dispone de 100 números entre el 0 y el 99 que los participantes pueden elegir para su compra. Cada número tiene un costo de $500. Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
Nos solicitan un programa que permita cargar los números comprados por los participantes. El programa no debe permitir comprar más de una vez un número ya vendido. El fin de carga de información se indica con número igual a -1.

Luego, sortear dos números al azar entre 0 y 99 e informar:
-	Total recaudado en concepto de compra de números.
-	Ganancia neta o pérdida del Sr Lara.
-	El porcentaje de números no vendidos con respecto al total.
-	Número ganador del primer premio y número ganador del segundo premio (no pueden ser el mismo número). E indicar si esos números se vendieron o no.	
11	Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con referencia a la predilección de color de los pantalones ('N'=negro, 'A'=azul, 'B'=blanco, 'O'=otros).               	 
Para ello se ingresan los siguiente datos para cada encuesta efectuada:   	 
- Edad del encuestado (entre 1 y 99)
- Color elegido (N, A, B, O)
- Sexo(M o F)
               	 
El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
-	El color más votado entre las mujeres.
-	Por cada década de edad, la cantidad de encuestados.
Década     Edad
0       	     1-9
1     	     10-19
2    	     20-29
…     	      …
9    	     90-99
	
12	Se ingresa un lote de 24 registros donde se informa para cada provincia el nro. de zona geográfica en donde la misma está ubicada.
Cada registro contiene:   	 
- Nro. de Provincia(1 a 24)
- Nro. de Zona de la provincia(1 a 9)
               	 
A partir de este lote se pide que se informe las zonas que abarquen más de 3 provincias distintas y cuales son esas provincias.
	
13	Una empresa comercializa 15 artículos y por cada venta realizada genera un registro con los siguientes datos:           	 
•	Nro. de Artículo (1 a 15)
•	Cantidad Vendida
•	Nro. de Sucursal (1 a 4)
A este lote se le precede otro lote ordenado por número de artículo con la siguiente información:
-	Nro de artículo
-	Stock               	 
Puede haber varios registros de venta para el mismo artículo y el fin de la carga de datos se indica con número de artículo igual a cero.
Se pide determinar e informar:   	 
-	Por cada artículo, la cantidad de unidades vendidas.
-	Por cada sucursal, los números de artículos que vendieron más de 10 unidades.
-	Por cada artículo, la sucursal donde más se comercializó.
-	Los artículos cuyo stock quedaron en cero.
-	Los artículos cuyo stock disminuyó más de la mitad.	
14	Hacer un programa que permita cargar un vector de 5 números enteros y otro vector de 10 números. Luego de cargarlos, generar un tercer vector llamado v_union que contenga los datos del primer vector y a continuación los datos del segundo vector.	
15	Hacer un programa que permita cargar un vector de 5 números enteros todos distintos entre sí y otro vector de 10 números todos distintos entre sí. Luego de cargarlos, generar un tercer vector llamado v_interseccion que contenga los valores en común entre los dos vectores.	


*/