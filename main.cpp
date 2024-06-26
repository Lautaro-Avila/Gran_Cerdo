#include <iostream>
#include <cstdlib>
#include "FuncionMenu.h"
#include "FuncionJugar.h"

using namespace std;

int main()
{
 setlocale(LC_ALL, "Spanish");

 int seleccion = 0;
 bool menu = true;
 string nombre1, nombre2, jugadorInicial;

  while (menu)
  {
   seleccion = MostrarMenu(seleccion, menu);

    switch (seleccion)
   {
    case 0:
    CerrarMenu(seleccion, menu);
    break;

    case 1:
    bool confirmacion = InicioJuego(nombre1, nombre2);
    if(!confirmacion)
    {
     continue;
    } else
    {
     jugadorInicial = QuienInicia(nombre1, nombre2);
     if (jugadorInicial == "no inicia")
     {
       system("pause > null");
       continue;
     }
    }


    break;


   }


  }





    return 0;
}
