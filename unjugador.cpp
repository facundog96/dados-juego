#include <iostream>
#include "rlutil.h"
#include "funciones.h"

int unJugador() {
    rlutil::cls();
    std::string nombre;
    rlutil::hidecursor();
    rlutil::locate(30, 10);
    std::cout << "Escriba su nombre:" << std::endl;
    rlutil::locate(30, 12);
    rlutil::showcursor();
    std::cin >> nombre;
    rlutil::cls();

    int ronda = 1;
    int puntajeTotal = 0;
    int dados[6] = {0};
    int maxRonda = 0;
    bool primerLanzamiento = true;

while (puntajeTotal < 500) {
    maxRonda = 0;
    for (int lanzamiento = 1; lanzamiento <= 3; lanzamiento++) {
        if (primerLanzamiento) {
            lanzamiento -= 1;
            primerLanzamiento = false;
        }
        interfaz(nombre, ronda, puntajeTotal, lanzamiento, maxRonda, dados);
        rlutil::locate(8, 22);
        std::cout << "PRESIONA CUALQUIER TECLA PARA TIRAR LOS DADOS";
        rlutil::anykey();
        tirarDados(dados);
        PuntajeCombination puntajeComb = calcularPuntaje(dados);
        if (puntajeComb.puntaje > maxRonda) {
            maxRonda = puntajeComb.puntaje;
        }
        puntajeTotal += puntajeComb.puntaje;
    }
    if (puntajeTotal >= 500){
            rlutil::locate(56,15);
            std::cout<<"FELICITACIONES "<<nombre<<"! GANASTE LA PARTIDA."<<std::endl;
            rlutil::locate(56,16);
            std::cout<<"CONSEGUISTE LOGRARLO EN "<<ronda<<" RONDAS CON " <<puntajeTotal <<" PUNTOS."<<std::endl;
            rlutil::locate(56,18);
            std::cout<<"PRESIONA UNA TECLA PARA IR AL MENU."<<std::endl;
            rlutil::anykey();
        }
    ronda++;
}
rlutil::cls();

    return 1;
}
