#include "Racional.h"
#include <iostream>

int main() {
    Racional r1(3, 4);  // Crear un racional 3/4
    Racional r2(2, 5);  // Crear un racional 2/5

    Racional suma = r1.sumaRacional(r2);  // Sumar
    Racional resta = r1.restaRacional(r2); // Restar

    std::cout << "Suma: ";
    suma.imprimir(); // Imprimir la suma

    std::cout << "Resta: ";
    resta.imprimir(); // Imprimir la resta

    return 0;
}
