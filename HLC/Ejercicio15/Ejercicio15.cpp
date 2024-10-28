#include <iostream>
#include <string>

bool serPalindromo(std::string *ptrCadena);

int main() {
    std::string cadena = "ososd";
    std::string *ptrCadena = &cadena;;

    if (serPalindromo(ptrCadena)) {
        std::cout << "Es palindromo" << std::endl;
    } else {
        std::cout << "No lo es" << std::endl;
    }
    std::cout << "Pulse cualquier tecla para continuar... ";
    std::cin.get();

    return 0;
}

bool serPalindromo(std::string *ptrCadena) {
    // Punteros al inicio y al final de la cadena
    const char *inicio = ptrCadena->c_str();
    const char *final = ptrCadena->c_str() + ptrCadena->size() - 1;

    while (inicio < final) {
        if (*inicio != *final) {
            return false;  // No es palíndromo
        }
        inicio++;
        final--;
    }

    return true;  // Es palíndromo
}
