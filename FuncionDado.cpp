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

void SiguienteTurno(string nombre)
{
cout << "                      Turno de " << nombre << " presiona una tecla para continuar" << endl;
system("pause>null");
}

void TirarDados ( int vecDados[] )
{
   for (int i=0; i<3; i++)
    {
        int azar=1+rand()%6;

        vecDados[i]= azar;
    }
}

