

#include <iostream>
#include <vector>


class Grafo {
    private:

    std::vector<std::vector<int> > vec;

    public:

    Grafo();
    Grafo(int);
    void add_arco(int, int);
    void add_nodo();
    void hay_arco(int, int);
    void hay_camino(int, int);
    void printGraph();
};
