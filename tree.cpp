#include "tree.h"

 //Constructors
 /**
  * Copy constructor redefined by the user (ADT)
  * @param t Tree to copy hardly
  */
Tree::Tree(const Tree &t): root(copia(t.root)){}

/**
 * Destructor redefined in order to hardly destruct the ADT object from the root of the tree
 */
Tree::~Tree() {if(root) distruggi(root);}

//Hard copy function
/**
 * Function that allows the hard copy of a tree into another (recursively)
 * @param L List (passed as parameter recursively)
 * @return returned a new Node if a node in some point exists (even if it's a leaf), otherwise an empty node is returned
 */
Nodo* Tree::copia(Nodo* L) {
    //base case: empty tree
    if(!L) return nullptr;
    //inductive case: a copy of the tree is made with the hard copies returned from the calls: copia(r->sx) e copia(r->dx) as it follows:
    return new Nodo(L->info,copia(L->sx),copia(L->dx));
}

//Hard delete function
/**
 * Function that allows to hard delete a tree (recursively -> no returns required)
 * @param r root of the tree that needs to be deleted
 */
void Tree::distruggi(Nodo* r){
    //base case: empty tree
   if(r!=nullptr){
       //inductive case: tree not empty
       distruggi(r->sx);
       distruggi(r->dx);
       delete(r);
   }
}

//Hard assignment operator
/**
 * Redefinition of the assignment operator that allows to hard assign a tree.
 * It's used the additional function "copia" to achieve the result
 * @param tree root of the tree to assign.
 * @return the tree is returned in case we need it for a cascade assignment
 */
Tree& Tree::operator=(const Tree& tree) {
    //sanity check in order to avoid assignment like Tree x = x;
    //The object returned is in fact *this!
    if(this != &tree) {
        //remove garbage
        delete (root);
        //hard copy
        root = copia(tree.root);
    }
    //tree return in case of cascade assignment
    return *this;
}
