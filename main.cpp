#include <iostream>
#include "Punto.h"
#include "Vector.h"

using namespace std;

void inter(Punto &a,Punto &b){
    Punto bas=a;
    a=b;
    b=bas;
}

void inter2(Punto *a,Punto *b){
    Punto bas=*a;
    *a=*b;
    *b=bas;
}

int main()
{
    Punto p(3,4);
    Punto q(0,0);
    //Punto q(1,4);
    Punto z=q;
    /*
    Punto *ptr1=&p;
    Punto *ptr2=&q;
    Puntp **ptr3 = &ptr1;
    Punto **ptr4 = &ptr2;
    (*ptr3)->print();//usa la flecha para no mostrar
    (*ptr1)print();
    (*ptr4)->print();//usa la flecha para no mostrar
    inter2(ptr1,ptr2);
    ptr1->print();
    (*ptr2).print(); //ptr2->print();
    z.print();*/

   /* p.print();
    q.print();
    //inter(p,q);
    inter2(&p,&q);
    p.print();
    q.print();

    Punto *easy = new Punto;
    easy->print();
    easy->offset(10,10);
    easy->print();
    delete easy;*/


    Vector b(p,q);
    b.print();

    cout << b.modulo()<<endl;
    Punto p(3,5);
    Punto q(14,34);
    Punto a(156,14);
    const Punto r[]={p,q,a};
    int size = sizeoff(r)/sizeoff[0];
    puntoarrsy pa(r,size);
    cout << pa.getsize()<<endl;
    puntoarray pa2 =pa;
    cout << pa2.getsize() << endl;

    return 0;
}
