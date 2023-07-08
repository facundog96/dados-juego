#include <iostream>
#include "rlutil.h"
#include "funciones.h"

void titulo(){
    rlutil::hidecursor();
    rlutil::locate(45,10);
    std::cout << "+-------------------------------+" << std::endl;
    rlutil::locate(45,11);
    std::cout << "|     QUINIENTOS O ESCALERA     |" << std::endl;
    rlutil::locate(45,12);
    std::cout << "+-------------------------------+" << std::endl;
    rlutil::locate(44,19);
    std::cout<<"PRESIONE UNA TECLA PARA CONTINUAR..."<<std::endl;
    rlutil::locate(25,25);
    std::cout << "Trabajo Integrador realizado por el alumno Gomez Moreno Facundo Ariel" << std::endl;

    rlutil::anykey();
}
