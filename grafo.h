

#include <iostream>
#include <vector>
#include <algorithm>


class Grafo {
    private:

    std::vector<std::vector<int> > vec;

    public:

    Grafo();
    Grafo(int);
    void add_arco(int, int);
    void add_nodo();
    bool hay_arco(int, int);
    void hay_camino(int, int);
    void printGraph();
};
