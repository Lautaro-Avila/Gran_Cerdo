#include <iostream>
#include <locale>
#include <cstdlib>
#include <limits>
#include "FuncionMenu.h"

using namespace std;

int MostrarMenu (int seleccion, bool menu)
{
  while (menu)
 {
  system("cls");
  cout << "                                                GRAN CERDO" << endl;
  cout << " -------------------------------------------------------------------------------------------------------" << endl;
  cout << "\t1- JUGAR" << endl;
  cout << "\t2- ESTADISTICAS" << endl;
  cout << "\t3- CREDITOS" << endl;
  cout << "\t4- COMO JUGAR" << endl;
  cout << " -------------------------------------------------------------------------------------------------------" << endl;
  cout << "0-SALIR" << endl;
  cin >> seleccion;
  while (cin.fail() || seleccion > 4 || seleccion < 0)
  {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "opcion incorrecta, por favor seleccione otra." << endl;
  cin >> seleccion;
  }
  return seleccion;
 }
}


void CerrarMenu(int seleccion, bool &menu)
{
  char respuesta ;
  cout << "¿seguro que quieres cerrar el juego? S/N" << endl;
  cin >> respuesta ;
  if (respuesta == 's' || respuesta == 'S')
  {
   menu = false;
  } else if (respuesta == 'N' || respuesta == 'n')
  {
    cout << "seleccione una opcion del menu" << endl;
  } else
  {
    cout << "opcion incorrecta, ingresa una opcion del menu" << endl ;
  }
}





