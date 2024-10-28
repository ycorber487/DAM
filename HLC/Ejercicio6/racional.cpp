#include "racional.h"
#include <iostream> // Para std::cout
#include <numeric>  // Para std::gcd
#include <stdexcept> // Para std::invalid_argument

// Constructor
Racional::Racional(int n, int d) : numerador(n), denominador(d) {
    if (denominador == 0) {
        throw std::invalid_argument("El denominador no puede ser 0");
    } else {
        simplifica();
    }
}

// Método que simplifica la fracción
void Racional::simplifica() {
    int mcd = std::gcd(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

// Método para sumar racionales
Racional Racional::sumaRacional(const Racional& otro) const {
    return Racional(numerador * otro.denominador + otro.numerador * denominador,
                    denominador * otro.denominador);
}

// Método para restar racionales
Racional Racional::restaRacional(const Racional& otro) const {
    return Racional(numerador * otro.denominador - otro.numerador * denominador,
                    denominador * otro.denominador);
}

// Método para multiplicar racionales
Racional Racional::multiplicaRacional(const Racional& otro) const {
    return Racional(numerador * otro.numerador, denominador * otro.denominador);
}

// Método para dividir racionales
Racional Racional::divideRacional(const Racional& otro) const {
    if (otro.numerador == 0) {
        throw std::invalid_argument("No se puede dividir por cero");
    }
    return Racional(numerador * otro.denominador, denominador * otro.numerador);
}

// Método para imprimir la fracción
void Racional::imprimir() const {
    std::cout << numerador << "/" << denominador << std::endl;
}
