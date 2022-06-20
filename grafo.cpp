

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

bool Grafo::hay_arco(int u, int v) {
    auto x = std::find(vec[u].begin(), vec[u].end(), v);
    auto y = std::find(vec[v].begin(), vec[v].end(), u);

    if ( x != vec[u].end() && y != vec[v].end()) 
        return true;
    else 
        return false;       
}
