// A simple representation of graph using STL
#include <iostream>
#include <vector>
using namespace std;



void print2DVector(vector<vector<int>> &vec){
	for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}



void addNode(vector<vector<int>> &adj) {
    vector<int> aux;
    adj.push_back(aux);
}

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<vector<int>> &adj, int u, int v) {
    if (adj.size() > u && adj.size() > v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    else cout << "No existe el nodo " << ((u > v) ? u : v) << "\n";
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<vector<int> > adj) {
    for (int v = 0; v < adj.size(); ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head";
        for (auto x : adj[v])
            cout << " -> " << x;
        printf("\n");
    }
}

// Driver code
int main() {
	int V = 5;
    
    vector<vector<int>> adj(6);
	//vector<int> adj[V];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
    addNode(adj);
    addNode(adj);
    addEdge(adj, 5, 6);
	printGraph(adj);


    print2DVector(adj);
	return 0;
}
