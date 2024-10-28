#include<iostream>
#include<stdexcept>
#include "rectangulo.h"

Rectangulo::Rectangulo(int b , int a):base(b),altura(a){
    if ( a<=0 || a>20){
        throw std::invalid_argument("La altura debe estar en el rango (0,20]");
    }
    if ( b<=0 || b>20){
        throw std::invalid_argument("La base debe estar en el rango (0,20]");
    }
}

int Rectangulo::area() const{
    return altura * base;
}
int Rectangulo::perimetro() const {
    return 2*altura + 2*base;
}

void Rectangulo::imprime() const{
    std::cout << "Altura: " 
              << altura 
              << std::endl <<
               "Base: "<<
               base <<
                std::endl <<
               "Area: "<<
              area() <<
               std::endl <<
               "Perimetro: "
               << perimetro() << std::endl;

}




