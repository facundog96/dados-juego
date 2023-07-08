#include <iostream>
#include <sstream>
#include "rlutil.h"
#include "funciones.h"

void interfaz(std::string nombre, int ronda, int& puntajeTotal, int lanzamiento, int& maxRonda, int* dados) {
    // Dibujar interfaz...
    rlutil::hidecursor();
    rlutil::locate(5,2);
    std::cout<<"x---------------------------------------------------------------------------------------------------------------x"<<std::endl;
    for(int i=0;i<20;i++){
        rlutil::locate(5,(i+3));
        std::cout<<"|"<<std::endl;
        rlutil::locate(117,(i+3));
        std::cout<<"|"<<std::endl;
    }
    rlutil::locate(5,23);
    std::cout<<"x---------------------------------------------------------------------------------------------------------------x"<<std::endl;
    rlutil::locate(6,5);
    std::cout<<"---------------------------------------------------------------------------------------------------------------"<<std::endl;
    rlutil::locate(8,4);
    std::cout<<"TURNO DE "<<nombre<<std::endl;
    rlutil::locate(28,4);
    std::cout<<"|"<<std::endl;
    rlutil::locate(35,4);
    std::cout<<"RONDA N"<<char(248)<<ronda<<std::endl;
    rlutil::locate(48,4);
    std::cout<<"|"<<std::endl;
    rlutil::locate(56,4);
    std::cout<<"PUNTAJE TOTAL: "<<puntajeTotal<<std::endl;
    rlutil::locate(8,6);
    std::cout<<"MAXIMO PUNTAJE DE LA RONDA: "<<maxRonda<<" PUNTOS   "<<std::endl;
    rlutil::locate(8,7);
    std::cout<<"LANZAMIENTO N"<<char(248)<<lanzamiento<<std::endl;
    rlutil::locate(6,8);
    std::cout<<"---------------------------------------------------------------------------------------------------------------"<<std::endl;
    if(dados[0] == 0) return;
    else {
        for(int i=0; i<6; i++){

                rlutil::locate(8,(10+i));
                std::cout<<"DADO N "<<char(248)<<i+1 <<" = "<<dados[i]<<std::endl;

        }
        PuntajeCombination puntajeComb = calcularPuntaje(dados);

        if (puntajeComb.puntaje > maxRonda) {
            maxRonda = puntajeComb.puntaje;
        }

        rlutil::locate(8, 20);
        std::cout << "Combinacion: " << puntajeComb.combinacion << std::endl;
        rlutil::locate(8, 21);
        std::cout << "Puntaje: " << puntajeComb.puntaje << std::endl;

    }
    }

