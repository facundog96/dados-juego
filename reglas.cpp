#include <iostream>
#include "rlutil.h"
#include "funciones.h"

int reglas(){
    rlutil::cls();
    rlutil::hidecursor();
    rlutil::locate(30,10);
    std::cout<<"REGLAS"<<std::endl;
    rlutil::locate(30,13);
    std::cout<<"El objetivo del juego es obtener al menos 500 puntos en la"<<std::endl;
    rlutil::locate(30,14);
    std::cout<<"menor cantidad posible de rondas, o sacar una escalera en un lanzamiento."<<std::endl;
    rlutil::locate(30,15);
    std::cout<<"Una ronda esta compuesta por tres lanzamientos."<<std::endl;
    rlutil::locate(30,16);
    std::cout<<"El puntaje de la ronda sera el valor maximo obtenido en los lanzamientos"<<std::endl;
    rlutil::locate(10,30);
    std::cout<<"PRESIONE UNA TECLA PARA CONTINUAR..."<<std::endl;
    rlutil::anykey();
    rlutil::cls();
    rlutil::locate(30,10);
    std::cout<<"REGLAS"<<std::endl;
    rlutil::locate(30,13);
    std::cout<<"Debera contemplar las siguientes excepciones:"<<std::endl;
    rlutil::locate(30,14);
    std::cout<<"Si en un lanzamiento se obtiene escalera el jugador GANA EL PARTIDO en ese momento."<<std::endl;
    rlutil::locate(30,15);
    std::cout<<"Si en un lanzamiento se obtiene una combinacion de 6 dados con valor 6, "<<std::endl;
    rlutil::locate(30,16);
    std::cout<<"el puntaje de la ronda entera sera 0."<<std::endl;
    rlutil::locate(10,30);
    std::cout<<"PRESIONE UNA TECLA PARA CONTINUAR..."<<std::endl;
    rlutil::anykey();
    rlutil::cls();
    rlutil::locate(30,7);
    std::cout<<"COMBINACIONES GANADORAS"<<std::endl;
    rlutil::locate(30,10);
    std::cout<<"SUMA DE DADOS(Menos de 3 dados iguales): Se suman todos los valores"<<std::endl;
    rlutil::locate(32,11);
    std::cout<<"Ej: 6, 5, 5, 2, 2, 1. Puntos por lanzamiento: 21."<<std::endl;
    rlutil::locate(30,12);
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    rlutil::locate(30,13);
    std::cout<<"TRIO X++(3 dados o mas iguales): Se multiplica por 10 el valor del dado"<<std::endl;
    rlutil::locate(32,14);
    std::cout<<"Ej: 5, 5, 5, 1 , 2 , 3. Puntos por lanzamiento: 5x10 = 50"<<std::endl;
    rlutil::locate(30,15);
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    rlutil::locate(30,16);
    std::cout<<"SEXTETO X(6 dados iguales, menos para el numero 6): 50 por valor de dado"<<std::endl;
    rlutil::locate(30,17);
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    rlutil::locate(30,18);
    std::cout<<"ESCALERA (1, 2, 3, 4, 5, 6): Gana la partida en esa ronda"<<std::endl;
    rlutil::locate(30,19);
    std::cout<<"------------------------------------------------------------------------"<<std::endl;
    rlutil::locate(30,20);
    std::cout<<"SEIS 6 (6, 6, 6, 6, 6, 6): Pierde todos los puntos de la ronda"<<std::endl;
    rlutil::locate(10,30);
    std::cout<<"PRESIONE UNA TECLA PARA VOLVER AL MENU..."<<std::endl;
    rlutil::anykey();
    rlutil::cls();

return 0;
}
