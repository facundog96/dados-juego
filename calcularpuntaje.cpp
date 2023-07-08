#include <iostream>
#include <vector>
#include "funciones.h"

PuntajeCombination calcularPuntaje(int* dados) {
    PuntajeCombination resultado;
    resultado.puntaje = 0;

    // Sexteto6
    bool esSexteto6 = true;
    for (int i = 0; i < 6; i++) {
        if (dados[i] != 6) {
            esSexteto6 = false;
            break;
        }
    }
    if (esSexteto6) {
        resultado.puntaje = 0;
        resultado.combinacion = "SEXTETO 6 ";
        return resultado;
    }

    // Escalera
    bool esEscalera = true;
    for (int i = 0; i < 6; i++) {
        if (dados[i] != i + 1) {
            esEscalera = false;
            break;
        }
    }
    if (esEscalera) {
        resultado.puntaje = 500;
        resultado.combinacion = "¡ESCALERA!  ";
        return resultado;
    }

    // Suma de dados
    int sumaDados = 0;
    for (int i = 0; i < 6; i++) {
        sumaDados += dados[i];
    }
    resultado.puntaje = sumaDados;
    resultado.combinacion = "SUMA DE DADOS";

    // Trío X++
    int maxTrio = 0;
    for (int i = 1; i <= 6; i++) {
        int count = 0;
        for (int j = 0; j < 6; j++) {
            if (dados[j] == i) {
                count++;
            }
        }
        if (count >= 3 && i > maxTrio) {
            maxTrio = i;
        }
    }
    if (maxTrio > 0) {
        resultado.puntaje = maxTrio * 10;
        resultado.combinacion = "TRIO " + std::to_string(maxTrio) + "++        ";
    }

    // Sexteto X
    bool esSextetoX = true;
    int primerDado = dados[0];
    for (int i = 1; i < 6; i++) {
        if (dados[i] != primerDado) {
            esSextetoX = false;
            break;
        }
    }
    if (esSextetoX && primerDado != 6) {
        resultado.puntaje = primerDado * 50;
        resultado.combinacion = "SEXTETO " + std::to_string(primerDado);
    }

    return resultado;
}
