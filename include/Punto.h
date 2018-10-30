#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        Punto();
        Punto(Punto &o);
        Punto(int,int);
        void offset(int,int);
        void print();
        void inter(Punto,Punto);
        double x,y;

};

#endif // PUNTO_H
