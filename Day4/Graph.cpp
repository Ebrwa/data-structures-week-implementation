#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Simple undirected graph using adjacency list
class Graph {
private:
    int vertices; // Total number of vertices in the graph
    vector<list<int>> adjList; // Adjacency list to store connections

public:
    // Constructor
    Graph(int v) : vertices(v), adjList(v) {}
    // Add an undirected edge between two vertices
    void addEdge(int u, int v) {
      adjList[u].push_back(v); 
       adjList[v].push_back(u); 
    }

    // Remove an undirected edge between two vertices
    void removeEdge(int u, int v) {
        adjList[u].remove(v); 
        adjList[v].remove(u); 
    }

    // Print the adjacency list of the graph
    void printGraph() const {
        for (int i = 0; i < vertices; ++i) {
            cout << "Node " << i << ": ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " "; 
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(6); // Create a graph with 6 nodes (0 to 5)

    // Add some connections (edges) between nodes
    g.addEdge(0, 1);
    g.addEdge(0, 5);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    cout << "Initial Graph:\n";
    g.printGraph(); // Show full graph before removing any edges
    g.removeEdge(3, 4);
    cout << "\nGraph after removing edge 3-4:\n";
    g.printGraph(); // Show updated graph

    return 0;
}