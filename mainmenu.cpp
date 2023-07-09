#include <iostream>
#include "rlutil.h"
#include "funciones.h"

int mainMenu(){
    rlutil::setColor(rlutil::WHITE);
    int stgame = 0, y = 0;
    rlutil::hidecursor();

    do{

    rlutil::locate(55,10);
    std::cout<<"UN JUGADOR"<<std::endl;
    rlutil::locate(55,11);
    std::cout<<"DOS JUGADORES"<<std::endl;
    rlutil::locate(55,12);
    std::cout<<"REGLAS"<<std::endl;
    rlutil::locate(55,13);
    std::cout<<"SALIR"<<std::endl;

    rlutil::locate(45,10 + y);
    std::cout << "=>" <<std::endl;
    rlutil::locate(75,10 + y);
    std::cout << "<=" <<std::endl;

    int key = rlutil::getkey();

    switch(key){
    case rlutil::KEY_UP:
        rlutil::locate(45,10 + y);
        std::cout<<"  "<<std::endl;
        rlutil::locate(75,10 + y);
        std::cout<<"  "<<std::endl;
        y--;
        if(y<0){
            y=0;
        }
        break;
    case rlutil::KEY_DOWN:
        rlutil::locate(45,10 + y);
        std::cout<<"  "<<std::endl;
        rlutil::locate(75,10 + y);
        std::cout<<"  "<<std::endl;
        y++;
        if(y>3){
            y=3;
        }
        break;
    case 1:
        switch(y){
        case 0:
            stgame = unJugador();
            break;
        case 1:
            stgame = dosJugadores();
            break;
        case 2:
            stgame = 2;
            stgame = reglas();
            break;
        case 3:
            stgame = -1;
            break;
        }
        break;
    default:
        break;
    };
    }while(stgame != -1);
    return 0;
}
