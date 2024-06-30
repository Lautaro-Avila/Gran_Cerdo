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
cout << R"(
                                                                             __
                               ____ __________ _____     ________  _________/ /___
                              / __ `/ ___/ __ `/ __ \   / ___/ _ \/ ___/ __  / __ \
                             / /_/ / /  / /_/ / / / /  / /__/  __/ /  / /_/ / /_/ /
                             \__, /_/   \__,_/_/ /_/   \___/\___/_/   \__,_/\____/
                            /____/

    -------------------------------------------------------------------------------------------------------

                                             1- JUGAR
                                             2- ESTADISTICAS
                                             3- CREDITOS
                                             4- COMO JUGAR

     -------------------------------------------------------------------------------------------------------
                                             0- SALIR )" << endl;

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





