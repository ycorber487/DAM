#include <iostream>
#include "rectangulo.h"

int main() {
    try {
        // Crear un rectángulo con base 5 y altura 10
        Rectangulo rect1(5, 10);
        std::cout << "Detalles del Rectángulo 1:" << std::endl;
        rect1.imprime();

        // Crear otro rectángulo con base 3 y altura 15
        Rectangulo rect2(3, 15);
        std::cout << "Detalles del Rectángulo 2:" << std::endl;
        rect2.imprime();

        // Crear un rectángulo con valores inválidos (esto lanzará una excepción)
        Rectangulo rect3(0, 25); // Esto debería lanzar una excepción
        std::cout << "Detalles del Rectángulo 3:" << std::endl;
        rect3.imprime();
        
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
