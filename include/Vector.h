#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
    public:
        Vector();
        Vector(Vector &o);
        Vector(Punto,Punto);
        void offset(Punto,Punto);
        void print();
        void inter(Vector,Vector);
        void modulo();
    private:
        Punto ini,fin;
};

#endif // VECTOR_H
