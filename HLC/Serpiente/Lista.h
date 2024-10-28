#ifndef _LISTA_
#define _LISTA_

#include "Nodo.h"

// Define la clase Lista dinámica simplemente enlazada

class Lista
{
    private:
        Nodo *head;
        int longitud;

    public:
        Lista();
        ~Lista();

        bool insertar(int dato);
        void print();
}



#endif