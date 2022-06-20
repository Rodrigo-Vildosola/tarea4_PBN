#include "grafo.h"


int main() {

    Grafo vec;

    vec.add_nodo();
    vec.add_nodo();
    vec.add_nodo();
    vec.add_nodo();
    vec.add_nodo();
    vec.add_arco(0, 3);
    vec.add_arco(0, 2);
    vec.add_arco(4, 1);
    vec.add_arco(3, 4);
    vec.printGraph();
}
