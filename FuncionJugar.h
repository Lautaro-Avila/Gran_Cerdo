#pragma once
using namespace std;

bool InicioJuego(string &nombre1, string &nombre2);

string QuienInicia(string nombre1, string nombre2);

void OrdenarJugadores (string &nombre1, string &nombre2, string jugadorInicial);

bool PlantarOSeguir (string nombre);

void JuegoCompleto( string jugador1, string jugador2, string &ganador, int puntosGanadores );

void RondaDeJuego(string nombre, int puntaje);


