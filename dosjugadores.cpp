#include <iostream>
#include "rlutil.h"
#include "funciones.h"

int dosJugadores() {
    // PRIMER JUGADOR
    rlutil::cls();
    std::string nombre1;
    rlutil::hidecursor();
    rlutil::locate(30, 10);
    std::cout << "Nombre del jugador uno:" << std::endl;
    rlutil::locate(30, 12);
    rlutil::showcursor();
    std::cin >> nombre1;
    rlutil::cls();

    //SEGUNDO JUGADOR

    rlutil::cls();
    std::string nombre2;
    rlutil::hidecursor();
    rlutil::locate(30, 10);
    std::cout << "Nombre del jugador dos:" << std::endl;
    rlutil::locate(30, 12);
    rlutil::showcursor();
    std::cin >> nombre2;
    rlutil::cls();

    int numRondas = ingresarRondas();

    int ronda = 1;
    int puntajeTotal1 = 0;
    int puntajeTotal2 = 0;
    int dados[6] = {0};
    int maxRonda = 0;
    std::string nombre = "";
    bool primerLanzamiento = true;

while ((puntajeTotal1 < 500 && puntajeTotal2 < 500 ) && ronda <= numRondas) {
    maxRonda = 0;
        for(int i=0; i<2; i++){
            i==0 ? (nombre = nombre1) : (nombre = nombre2);
            proxTurno(ronda, nombre, nombre1, nombre2, puntajeTotal1, puntajeTotal2);
            for (int lanzamiento = 1; lanzamiento <= 3; lanzamiento++) {
            if (primerLanzamiento) {
                lanzamiento -= 1;
                primerLanzamiento = false;
            }
            interfaz(nombre, ronda, i == 0 ? puntajeTotal1 : puntajeTotal2, lanzamiento, maxRonda, dados);
            rlutil::locate(8, 22);
            std::cout << "PRESIONA CUALQUIER TECLA PARA TIRAR LOS DADOS";
            rlutil::anykey();
            tirarDados(dados);
            PuntajeCombination puntajeComb = calcularPuntaje(dados);
            if (puntajeComb.puntaje > maxRonda) {
                maxRonda = puntajeComb.puntaje;
            }
            if (i == 0) {
                puntajeTotal1 += puntajeComb.puntaje;
            } else {
                puntajeTotal2 += puntajeComb.puntaje;
            }
        }
    }
    if (puntajeTotal1 >= 500 || puntajeTotal2 >= 500){
        std::string ganador = puntajeTotal1 >= 500 ? nombre1 : nombre2;
        int puntajeGanador = puntajeTotal1 >= 500 ? puntajeTotal1 : puntajeTotal2;

        rlutil::locate(56,15);
        std::cout<<"FELICITACIONES "<<ganador<<"! GANASTE LA PARTIDA."<<std::endl;
        rlutil::locate(56,16);
        std::cout<<"CONSEGUISTE LOGRARLO EN "<<ronda<<" RONDAS CON " <<puntajeGanador <<" PUNTOS."<<std::endl;
        rlutil::locate(56,18);
        std::cout<<"PRESIONA UNA TECLA PARA IR AL MENU."<<std::endl;
        rlutil::anykey();
    }
    ronda++;
}
if (puntajeTotal1 < 500 && puntajeTotal2 < 500) {
        std::string ganador = puntajeTotal1 > puntajeTotal2 ? nombre1 : nombre2;
        int puntajeGanador = puntajeTotal1 > puntajeTotal2 ? puntajeTotal1 : puntajeTotal2;

        rlutil::locate(56,15);
        std::cout<<"FELICITACIONES "<<ganador<<"! GANASTE LA PARTIDA."<<std::endl;
        rlutil::locate(56,16);
        std::cout<<"CONSEGUISTE LOGRARLO EN "<<numRondas<<" RONDAS CON " <<puntajeGanador <<" PUNTOS."<<std::endl;
        rlutil::locate(56,18);
        std::cout<<"PRESIONA UNA TECLA PARA IR AL MENU."<<std::endl;
        rlutil::anykey();
}


rlutil::cls();

return 1;
}
