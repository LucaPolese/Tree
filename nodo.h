#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo {
friend class Tree;
private:
    //Node constructor wit 0,1,2,3 parameters. In all cases the parameters passed by value will be assigned
    //by calling the copy construction or assigning the address to the specific pointer
    Nodo(char c='*', Nodo* s=0, Nodo* d=0) : info(c), sx(s), dx(d) {}
    char info;
    Nodo* sx;
    Nodo* dx;
};

#endif
