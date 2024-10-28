#ifndef RACIONAL_H
#define RACIONAL_H

#include <numeric>
#include <stdexcept>

class Racional {
private:
    int numerador;
    int denominador;
    void simplifica();  // Método para simplificar la fracción

public:
    // Constructor que pide dos enteros
    Racional(int n = 0, int d = 1);

    // Métodos para operar con números racionales
    Racional sumaRacional(const Racional& otro) const; 
    Racional restaRacional(const Racional& otro) const; 
    Racional multiplicaRacional(const Racional& otro) const; 
    Racional divideRacional(const Racional& otro) const; 
    void imprimir() const;  // Método para imprimir la fracción
};

#endif
