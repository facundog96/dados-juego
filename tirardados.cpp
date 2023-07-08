#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>

void tirarDados(int* dados) {
    srand(static_cast<unsigned>(time(0)));

    for(int i = 0; i < 6; i++) {
        dados[i] = (rand() % 6) + 1;
    }
}
