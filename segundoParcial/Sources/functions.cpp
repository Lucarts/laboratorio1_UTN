#include <iostream>
using namespace std;

#include "../Headers/functions.h"

void cargarDatos(int arrayClientes_punto1[600], int arrayClientes_punto2[600][8], float tortas_punto3[7], int clientes_punto4[600][3]) {

  int idPedido, idTorta, diasAnticipacionPedido, idCliente, idMedioDeContacto;
  float peso;

  cout << "Ingresar el ID del pedido: ";
  cin >> idPedido;

  while (idPedido >= 0) {
    cout << "Ingresar el ID de la torta: ";
    cin >> idTorta;

    cout << "Ingresar el peso de la torta: ";
    cin >> peso;
    // punto3
    if (tortas_punto3[idTorta - 1] == 0 || peso > tortas_punto3[idTorta - 1]) {
      tortas_punto3[idTorta - 1] = peso;
    }

    cout << "Ingresar los dias de anticipacion del pedido: ";
    cin >> diasAnticipacionPedido;

    cout << "Ingresar el ID del cliente (entre 800 y 1399): ";
    cin >> idCliente;
    // punto1
    if (diasAnticipacionPedido > 90) {
      arrayClientes_punto1[idCliente - 800] = 1;
    }
    // punto2
    if (arrayClientes_punto2[idCliente - 800][idTorta] == 1) {
      arrayClientes_punto2[idCliente - 800][0] = 1;
    } else {
      arrayClientes_punto2[idCliente - 800][idTorta] = 1;
    }
    // punto4 --> almaceno en [0] si el cliente hizo al menos un pedido
    clientes_punto4[idCliente - 800][0] = 1;

    cout << "Ingresar el ID de Medio de contacto: ";
    cin >> idMedioDeContacto;
    // punto 4 --> almaceno en [1] y en [2] si pidio por persona o por wsp
    if (idMedioDeContacto == 1000) {
      clientes_punto4[idCliente - 800][1] = 1;
    }
    if (idMedioDeContacto == 3000) {
      clientes_punto4[idCliente - 800][2] = 1;
    }

    cout << "\nIngresar el ID del pedido: ";
    cin >> idPedido;
  }
}

void punto1(int arrayClientes_punto1[600]) {
  int counterClientes_punto1 = 0;

  for (int i = 0; i < 600; i++) {
    if (arrayClientes_punto1[i] == 1) {
      counterClientes_punto1++;
    }
  }

  cout << "\n\nPUNTO 1) CANTIDAD CLIENTES DIF. QUE PIDIERON CON MAS DE 90 DIAS : ";
  cout << "\n\t- La cantidad de clientes fueron: " << counterClientes_punto1 << endl;
}

void punto2(int arrayClientes_punto2[600][8]) {
  cout << "\nPUNTO 2) ID DE CLIENTES QUE HAYAN PEDIDO MAS DE UNA VEZ LA MISMA TORTA" << endl;

  for (int i = 0; i < 600; i++) {
    if (arrayClientes_punto2[i][0] == 1) {
      cout << "\t- ID: " << i + 800 << endl;
    }
  }
}

void punto3(float tortas_punto3[7]) {
  cout << "\nPUNTO 3) PESOS MAXIMOS DE LAS TORTAS: " << endl;

  string nombreTortas[7] = {"Rogel", "Selva Negra", "Cheescake", "Chocotorta", "Lemon Pie", "Balcarce", "Chaja"};

  for (int i = 0; i < 7; i++) {
    cout << "\n\t " << i + 1 << " " << nombreTortas[i] << endl;
    if (tortas_punto3[i] == 0) {
      cout << "\t No registro ventas" << endl;
    } else {
      cout << "\t PESO MAXIMO: " << tortas_punto3[i] << endl;
    }
  }
}

void punto4(int clientes_punto4[600][3]) {
  cout << "\nPUNTO 4) CLIENTES QUE NO PIDIERON EN PERSONA NI POR WSP:" << endl;

  // Solo muestro aquellos que cumplan con la condicion solicitada (no pidieron por wsp ni en persona) pero que realizaron al menos un pedido utilizando algun otro medio de contacto.
  for (int i = 0; i < 600; i++) {
    if (clientes_punto4[i][0] == 1 && clientes_punto4[i][1] == 0 && clientes_punto4[i][2] == 0) {
      cout << "\t- ID cliente: " << i + 800 << endl;
    }

    // ** Alternativa que muestra a todos los clientes, incluyendo a los que no pidieron tortas:
    // if (clientes_punto4[i][1] == 0 && clientes_punto4[i][2] == 0) {
    //   cout << "\t- ID cliente: " << i + 800 << endl;
    // }
  }
}