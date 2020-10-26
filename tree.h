#ifndef TREE_H
#define TREE_H
#include "nodo.h"

class Tree {
private:
    Nodo* root;
    //Additive functions useful for the assignment, the hard copy and the hard destruction
    static Nodo* copia(Nodo*);
    static void distruggi(Nodo*);
public:
    //Default constructor that builds an empty Tree
    Tree(): root(0){}
    //Copy constructor that passes a parameter by constant reference
    Tree(const Tree&);
    //Redefinition of the destructor
    ~Tree();
    //Redefinition of the hard assignment operator
    Tree& operator=(const Tree&);
};

#endif
