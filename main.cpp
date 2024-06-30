#include <iostream>
#include <cstdlib>
#include "FuncionMenu.h"
#include "FuncionJugar.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int seleccion = 0, puntosGanadores = 0;;
    bool menu = true;
    string nombre1, nombre2, jugadorInicial, ganador = " ";

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
            }
            jugadorInicial = QuienInicia(nombre1, nombre2);

            OrdenarJugadores(nombre1, nombre2, jugadorInicial);


            system("pause");
            break;


        }


    }
    return 0;
}
