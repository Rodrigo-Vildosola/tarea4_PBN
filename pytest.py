
import libgrafo as lg


vec = lg.Grafo(4)

vec.add_nodo()
vec.add_nodo()
vec.add_nodo()

vec.add_arco(0, 3)
vec.add_arco(0, 2)
vec.add_arco(4, 1)
vec.add_arco(3, 4)
vec.add_arco(5, 6)
vec.printGraph()


