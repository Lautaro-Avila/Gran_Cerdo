#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include "FuncionJugar.h"
#include "FuncionDado.h"
using namespace std;

bool InicioJuego(string &nombre1, string &nombre2)
{

  char confirmacion;

  system("cls");
  cout << "                                                GRAN CERDO" << endl;
  cout << " -------------------------------------------------------------------------------------------------------" << endl;
  cout << " Antes de comenzar a jugar debe registar los nombres de los jugadores: " << endl << endl;
  cout << " Ingrese el nombre del jugador 1:    ";
  cin.ignore();
  getline(cin, nombre1);
  cout << " Ingrese el nombre del jugador 2:    ";
  getline(cin, nombre2);
  cout << "¿Empezar la partida(S/N)?" << endl;
  cin >> confirmacion;
  if (confirmacion == 'S' || confirmacion == 's')
   {
     return true;
   }
}

string QuienInicia (string nombre1, string nombre2)
{
 srand(time(0));
 int dado1, dado2, puntaje1, puntaje2;

  while(true)
  {
   cout << "Vamos a lanzar los dados para saber quien inicia la partida, suerte !!!" << endl;
  if (!ConsultaLanzarDados(nombre1))return "no inicia";
  dado1 = rand() % 6 + 1;
  dado2 = rand() % 6 + 1;
  puntaje1 = dado1 + dado2;
  cout << nombre1 << " Saco " << dado1 << " y " << dado2 << " sumando " << puntaje1 << " puntos" << endl;
  CaraDado(dado1);
  CaraDado(dado2);

  if (!ConsultaLanzarDados(nombre2))return "no inicia";
  dado1 = rand() % 6 + 1;
  dado2 = rand() % 6 + 1;
  puntaje2 = dado1 + dado2;
  cout << nombre2 << " Saco " << dado1 << " y " << dado2 << " sumando " << puntaje2 << " puntos " << endl;
  CaraDado(dado1);
  CaraDado(dado2);

  if (puntaje1 > puntaje2){
   cout << nombre1 << " Comienza el juego !!!" << endl;
   cout << "Presione cualquier tecla para continuar" << endl;
   system("pause > nul");
   return nombre1;
   break;
  } else if (puntaje2 > puntaje1){
  cout <<nombre2 << " Comienza el juego !!!" << endl;
  cout << "Presione cualquier tecla para continuar" << endl;
  system("pause > nul");
  return nombre2;
  break;
  } else {
  cout << "Empate! hay que lanzar los dados nuevamente" << endl;
  }
 }
}
