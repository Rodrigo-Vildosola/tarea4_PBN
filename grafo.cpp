

#include "grafo.h"

Grafo::Grafo() {}

Grafo::Grafo(int init) {
    for (int i = 0; i < init; i++) add_nodo();
}

void Grafo::add_nodo() {
    std::vector<int> aux;
    vec.push_back(aux);
}

void Grafo::add_arco(int u, int v) {
    if (vec.size() > (unsigned long) u && vec.size() > (unsigned long) v) {
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    else std::cout << "No existe el nodo " << ((u > v) ? u : v) << "\n";
}

void Grafo::printGraph() {
    for (int i = 0; (unsigned long) i < vec.size(); i++) {
        std::cout << "\n Adjacency list of vertex " << i
             << "\n head";
        for (auto x : vec[i])
            std::cout << " -> " << x;
        printf("\n");
    }
}
