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
    cout << R"(
                           __    ___    __    _          __    ____  ___   ___   ___
                          / /`_ | |_)  / /\  | |\ |     / /`  | |_  | |_) | | \ / / \
                          \_\_/ |_| \ /_/--\ |_| \|     \_\_, |_|__ |_| \ |_|_/ \_\_/
      -------------------------------------------------------------------------------------------------------)" << endl<< endl;
    cout << "                      Antes de comenzar a jugar debe registar los nombres de los jugadores: " << endl << endl;
    cout << "                                      Ingrese el nombre del jugador 1:    ";
    cin.ignore();
    getline(cin, nombre1);
    cout << "                                      Ingrese el nombre del jugador 2:    ";
    getline(cin, nombre2);
    cout << endl << "                                         ¿Empezar la partida(S/N)?" ;
    cin >> confirmacion;
    if (confirmacion == 'S' || confirmacion == 's')
    {
        return true;
    }
    if (cin.fail() || confirmacion == 'n' || confirmacion == 'N')
    {
        return false;

    }
}

// QUIEN INICIA EL JUEGO
string QuienInicia (string nombre1, string nombre2)
{
    srand(time(0));
    int puntaje1, puntaje2, dadoMayor1, dadoMayor2;
    int vecDado[2] = {};
    bool empate = true;
    cout << "                   Vamos a lanzar los dados para saber quien inicia la partida, suerte !!!" << endl;

    while (empate)
    {

        empate = false;

        TirarDados(vecDado);

        SiguienteTurno(nombre1);


        puntaje1 = vecDado[0] + vecDado[1];

        if (vecDado[0] > vecDado[1])
        {
            dadoMayor1 = vecDado[0];
        }
        else
        {
            dadoMayor1 = vecDado[1];
        }

        cout << nombre1 << "Saco " << vecDado[0] << " y " << vecDado[1] << " sumando " << puntaje1 << " puntos" << endl;
        CaraDado(vecDado[0]);
        CaraDado(vecDado[1]);

        TirarDados(vecDado);
        SiguienteTurno(nombre2);
        if (vecDado[0] > vecDado[1])
        {
            dadoMayor2 = vecDado[0];
        }
        else
        {
            dadoMayor2 = vecDado[1];
        }
        puntaje2 = vecDado[0] + vecDado[1];
        cout << nombre2 << "Saco " << vecDado[0] << " y " << vecDado[1] << " sumando " << puntaje2 << " puntos " << endl;
        CaraDado(vecDado[0]);
        CaraDado(vecDado[1]);

        if (puntaje1 > puntaje2)
        {
            cout <<nombre1 << "Comienza el juego !!!" << endl;
            system("pause");
            return nombre1;

        }
        else if (puntaje2 > puntaje1)
        {
            cout <<nombre2 << " Comienza el juego !!!" << endl;
            system("pause");
            return nombre2;

        }
        else
        {
            cout << "Hay un empate de puntos, verificando dado mas alto ... " << endl;
            if (dadoMayor1 == dadoMayor2)
            {
                cout << "se volvio a empatar, se volveran a tirar los dados" << endl;
                empate = true;
            }
            else if (dadoMayor1 > dadoMayor2)
            {
                cout <<nombre1 << " Comienza el juego !!!" << endl;
                return nombre1;
            }
            else
            {
                cout <<nombre2 << " Comienza el juego !!!" << endl;
                return nombre2;
            }
        }
    }
}
// ORDENA NOMBRES
void OrdenarJugadores(string &jugador1, string &jugador2, string jugadorInicial)
{
    string guardarNombre ;
    if (jugadorInicial == jugador2)
    {
        guardarNombre = jugador1;
        jugador1 = jugadorInicial;
        jugador2 = guardarNombre;
    }

}

bool PlantarOSeguir (string nombre)
{
    char confirmar;
    cout << nombre << " ¿ Deseas plantarte con estos puntos ?\n";
    cout << " Si presionas 'S' te plantas, pero si presionas 'N' seguiras tirando cerdo codicioso " << endl;
    cin >> confirmar;
    if (confirmar == 's' || confirmar == 'S')
    {
        cout << "Fin de la ronda para "<< nombre << endl;
        system("pause");
        return false;
    }
    else
    {
        cout << nombre << " sigues tirando ... cuidado con la codicia" << endl;
        system("pause");
        return true;
    }
}



/*void RondaDeJuego(string nombre, int &puntosJug1, int &puntosJug2, bool &hundimiento, int &oinkJug1)
{

    while (true)
    {
        if (!PlantarOSeguir (nombre)) break;
        int vecDado[3] = {};
        int puntosRonda = 0;

        TirarDados(vecDado);
        if (puntosJug1 < 50 && puntosJug2 < 50)
        {
            if (vecDado[0] =! vecDado[1] && vecDado[0] =! 0 && vecDado[1] =! 0 )
            {
                puntosRonda = vecDado[0] + vecDado[1];
                puntosJug1 += puntosRonda;
                cout << "¡Sumaste" << puntosRonda << " trufas!" ;
                system("pause");
                continue;
            }else if (vecDado[0] == vecDado [1] && vecDado[0] =! 0 && vecDado[1] =! 0 )
            {
             oinkJug1 += 1;


            }
            if (puntosJug1 > 50 && puntosJug2 > 50 || hundimiento)
            {
             if (vecDado[0])

            }

        }








    }


}*/














