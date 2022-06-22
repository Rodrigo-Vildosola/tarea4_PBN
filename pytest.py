from grafo import *


def castellano(booleano):
    if not booleano: 
        return "no "
    return ""


g = Grafo(3) 
g.add_arco(1,2) 
g.add_nodo() 
g.add_arco(2,3)

print()

print(castellano(g.hay_arco(2,1)) + "hay arco entre los nodos 2 y 1")
print(castellano(g.hay_camino(1,3)) + "hay camino entre los nodos 1 y 3")
print(castellano(g.hay_camino(0,3)) + "hay camino entre los nodos 0 y 3")

print()


