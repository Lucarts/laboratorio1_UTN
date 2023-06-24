#include <iostream>
using namespace std;

#include "../Headers/functions.h"

void cargarDatos(int IDSucursales_puntoA[4][2], int arrayAutores_punto2[500], int matrizGeneros_punto3[7][2], int idAutor_puntoD[500]) {

  int ventaID, autorID, generoID, precio, qPaginas, sucursalID;

  cout << "INGRESAR ID de Venta: ";
  cin >> ventaID;

  while (ventaID != 0) {
    cout << "INGRESAR ID de Autor (número entero entre 500 y 1499):  ";
    cin >> autorID;

    cout << "Ingresar ID de Género Literario (número entero entre 1 y 7): ";
    cin >> generoID;

    cout << "INGRESAR Precio (entero): ";
    cin >> precio;
    // C
    matrizGeneros_punto3[generoID - 1][0] += precio;
    matrizGeneros_punto3[generoID - 1][1]++;
    // D
    idAutor_puntoD[autorID - 500] += precio;

    cout << "INGRESAR Páginas del libro (entero): ";
    cin >> qPaginas;
    // B
    if (qPaginas > 1200) {
      arrayAutores_punto2[autorID - 500] = 1;
    }

    //  IDs == 1000, 2000, 3000 y 4000
    cout << "INGRESAR ID de Sucursal (entero): ";
    cin >> sucursalID;

    //A
    if (generoID == 1) {
      IDSucursales_puntoA[(sucursalID) / 1000 - 1][0] = 1;
    }
    if (generoID == 4) {
      IDSucursales_puntoA[(sucursalID) / 1000 - 1][1] = 1;
    }

    cout << "\nINGRESAR ID de Venta: ";
    cin >> ventaID;
  }
}

void puntoA(int IDSucursales_puntoA[4][2]) {
  cout << "\nPUNTO A) SUCURSALES QUE NO HAYAN VENDIDO TERROR NI CIENCIA FICCION:  ";
  for (int i = 0; i < 4; i++) {
    if (IDSucursales_puntoA[i][0] == 0 && IDSucursales_puntoA[i][1] == 0) {
      cout << "\n\t- " << ((i + 1) * 1000) << endl;
    }
  }
}

void punto2(int matriz[500]) {
  int counter_punto2 = 0;

  for (int i = 0; i < 500; i++) {
    if (matriz[i] == 1) {
      counter_punto2++;
    }
  }
  cout << "\nPUNTO B) CANTIDAD DE AUTORES DISTINTOS QUE VENDIERON LIBRO +1200 pags: ";
  cout << "\n\t- La cantidad de autores fue de: " << counter_punto2 << endl;
}

void punto3(int matriz[7][2]) {
  cout << "\nPUNTO 3) PROMEDIO DE PRECIO DE VENTA POR GENERO:" << endl;

  string generos[7] = {"Terror", "Biografia", "Novela", "Ciencia Ficcion", "Historia", "Ciencia", "Salud"};

  for (int i = 0; i < 7; i++) {
    if (matriz[i][1] == 0) {
      matriz[i][1] = 1;
    }

    float precioVentaPromedio = float(matriz[i][0]) / matriz[i][1];
    cout << "\n\t-NOMBRE DE GENERO: " << generos[i];
    cout << "\n\t-Promedio de precio de venta: " << precioVentaPromedio << endl;
  }
}

void punto4(int array[500]) {

  int recaudacionMayor = -1;
  int idVendedorGanador;

  for (int i = 0; i < 500; i++) {
    if (recaudacionMayor == -1 || array[i] > recaudacionMayor) {
      recaudacionMayor = array[i];
      idVendedorGanador = i + 500;
    }
  }
  cout << "\nPUNTO 4) IDE DEL AUTOR QUE MAS RECAUDO EN VENTA DE LIBROS: ";
  cout << "\n\t- El ID es: " << idVendedorGanador << endl;
}