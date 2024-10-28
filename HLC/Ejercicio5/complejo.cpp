#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Complejo {
private:
    double real;
    double imaginaria;

public:
    Complejo(double r = 0.0, double ima = 0.0) : real(r), imaginaria(ima) {}

    void toString() {
        string cadena = "";
        cadena += to_string(real);

        if (imaginaria >= 0) {
            cadena += " + ";
        } else {
            cadena += " - ";
        }

        cadena += to_string(abs(imaginaria)) + "i";
        cout << cadena << endl; // Imprime el resultado con salto de línea
    }
};

int main() {
    Complejo c1(3, 4);
    c1.toString(); // Muestra el número complejo en la consola
    cin.get(); // Espera una entrada para que la consola no se cierre inmediatamente
    return 0;
}
