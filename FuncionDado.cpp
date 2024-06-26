#include <iostream>
#include <locale>
#include <cstdlib>
#include "FuncionDado.h"
using namespace std;

void CaraDado(int valor){
switch (valor) {
        case 1:
            cout << "+-----+\n";
            cout << "|     |\n";
            cout << "|  X  |\n";
            cout << "|     |\n";
            cout << "+-----+\n";
            break;
        case 2:
            cout << "+-----+\n";
            cout << "|X    |\n";
            cout << "|     |\n";
            cout << "|    X|\n";
            cout << "+-----+\n";
            break;
        case 3:
            cout << "+-----+\n";
            cout << "|X    |\n";
            cout << "|  X  |\n";
            cout << "|    X|\n";
            cout << "+-----+\n";
            break;
        case 4:
            cout << "+-----+\n";
            cout << "|X   X|\n";
            cout << "|     |\n";
            cout << "|X   X|\n";
            cout << "+-----+\n";
            break;
        case 5:
            cout << "+-----+\n";
            cout << "|X   X|\n";
            cout << "|  X  |\n";
            cout << "|X   X|\n";
            cout << "+-----+\n";
            break;
        case 6:
            cout << "+-----+\n";
            cout << "|X   X|\n";
            cout << "|X   X|\n";
            cout << "|X   X|\n";
            cout << "+-----+\n";
            break;
    }
}

bool ConsultaLanzarDados(string nombre){

char respuesta;
cout << nombre << "¿Deseas lanzar los dados? (S/N): ";
cin >> respuesta;
 if (respuesta == 's' || respuesta == 'S'){
  return true;
 }else if (respuesta == 'n' || respuesta == 'N') {
   cout << "toque cualquier tecla para volver al menu principal"  << endl;
  return false;
 }
}

