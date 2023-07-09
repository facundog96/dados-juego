#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>

struct PuntajeCombination {
    int puntaje;
    std::string combinacion;
};

void juego();
int mainMenu();
void titulo();
int reglas();
void tirarDados(int* dados);
int ingresarRondas();
int unJugador();
int dosJugadores();
void proxTurno(int ronda, std::string proximoTurno, std::string nombre1, std::string nombre2, int puntaje1, int puntaje2);
void interfaz(std::string nombre, int ronda, int& puntajeTotal, int lanzamiento, int& maxRonda, int* dados);
PuntajeCombination calcularPuntaje(int* dados);

#endif
