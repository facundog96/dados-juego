#include <iostream>
#include "rlutil.h"
#include "funciones.h"

void proxTurno(int ronda, std::string proximoTurno, std::string nombre1, std::string nombre2, int puntaje1, int puntaje2) {
    rlutil::cls();
    rlutil::locate(10, 9);
    std::cout << "+----------------------------------------------------------+";
    rlutil::locate(10, 20);
    std::cout << "+----------------------------------------------------------+";
    for (int i = 0; i < 10; i++) {
        rlutil::locate(10, 10 + i);
        std::cout << "|";
        rlutil::locate(69, 10 + i);
        std::cout << "|";
    }
    rlutil::locate(12, 12);
    std::cout<<"RONDA N"<<char(248)<<ronda<<std::endl;
    rlutil::locate(12, 13);
    std::cout<<"PROXIMO TURNO: "<<proximoTurno<<std::endl;
    rlutil::locate(12, 15);
    std::cout<<"PUNTAJE "<<nombre1<<": "<<puntaje1<<std::endl;
    rlutil::locate(12, 16);
    std::cout<<"PUNTAJE "<<nombre2<<": "<<puntaje2<<std::endl;
    rlutil::locate(2, 30);
    std::cout<<"PRESIONA UNA TECLA PARA TIRAR!"<<std::endl;
    rlutil::anykey();
    rlutil::cls();
}
