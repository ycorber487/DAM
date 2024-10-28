#include "Nodo.h"

// Constructor
Nodo::Nodo() : dato(0), sig(nullptr) {}

// Destructor
Nodo::~Nodo() {
    
}

// Get/Set
void Nodo::setDato(int d) {
    dato = d;
}

int Nodo::getDato() const {
    return dato;
}

void Nodo::setSig(Nodo *n) {
    sig = n;
}

Nodo* Nodo::getSig() const {
    return sig;
}
