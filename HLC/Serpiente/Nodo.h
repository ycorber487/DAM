/*

    HLC
    Clase Nodo
*/

#ifndef _NODO_
#define _NODO_

struct nodo
{
    int dato;
    struct nodo *sig;
};

class Nodo
{
    private:
        int dato;
        Nodo *sig;
    
    public:
        // constructor
        Nodo();

        // destructor
        ~Nodo();

        //Get/Set
        void setDato(int d);
        int getDato();

        void setSig(Nodo *n);
        Nodo *getSig();

};


#endif
