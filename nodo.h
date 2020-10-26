#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo {
friend class Tree;
private:
    //Costruttore del nodo a 0,1,2,3 parametri, in tutti i casi i parametri passati per valore, verranno assegnati
    //richiamando la costruzione di copia o assegnando l'indirizzo al puntatore specifico
    Nodo(char c='*', Nodo* s=0, Nodo* d=0) : info(c), sx(s), dx(d) {}
    char info;
    Nodo* sx;
    Nodo* dx;
};

#endif
