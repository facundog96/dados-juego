#include <iostream>
#include "rlutil.h"
#include "funciones.h"

int ingresarRondas() {
    int numRondas;
    rlutil::cls();
    rlutil::hidecursor();
    rlutil::locate(30, 10);
    std::cout << "Ingrese el numero de rondas a jugar:" << std::endl;
    rlutil::locate(30, 12);
    rlutil::showcursor();
    std::cin >> numRondas;
    rlutil::cls();
    return numRondas;
}

