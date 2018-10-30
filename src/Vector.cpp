cd d#include "Vector.h"
#include "Punto.h"
#include <iostream>
#include "math.h"

Vector::Vector(Punto xh,Punto yh){
    ini=xh;
    fin=yh;
}

Vector::Vector(){
    ini.x=0;
    ini.y=0;
    fin.x=0;
    fin.y=0;
}

Vector::Vector(Vector &o){
    ini=o.ini;
    fin=o.fin;
}

void Vector::print(){
    std::cout<<"("<<ini.x<<","<<ini.y<<") -> ("<<fin.x<<","<<fin.y<<")"<<std::endl;
}

void Vector::offset(Punto nx,Punto ny){
    ini.x+=nx.x;
    ini.y+=nx.y;
    fin.x+=ny.x;
    fin.y+=ny.y;
}

void Vector::modulo(){
    std::cout<<sqrt((fin.y-ini.y)*(fin.y-ini.y)+(fin.x-ini.x)*(fin.x-ini.x))<<std::endl;
}


