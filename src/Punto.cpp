#include "Punto.h"
#include <iostream>
Punto::Punto(int xh,int yh){
    x=xh;
    y=yh;
}

Punto::Punto(){
    x=0;
    y=0;
}

Punto::Punto(Punto &o){
    x=o.x;
    y=o.y;
}

void Punto::print(){
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

void Punto::offset(int nx,int ny){
    x+=nx;
    y+=ny;
}


