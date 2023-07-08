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
int unJugador();
void interfaz(std::string nombre, int ronda, int& puntajeTotal, int lanzamiento, int& maxRonda, int* dados);
PuntajeCombination calcularPuntaje(int* dados);

#endif
