#include "grafo.h"


int main() {

    Grafo vec(6);

    vec.add_nodo();
    vec.add_arco(0, 3);
    vec.add_arco(0, 2);
    vec.add_arco(4, 1);
    vec.add_arco(3, 4);
    vec.add_arco(5, 6);
    vec.printGraph();

    if (vec.hay_camino(5, 6)) 
        std::cout << "Hay camino" << std::endl;
    else 
        std::cout << "No hay camino" << std::endl;
}
