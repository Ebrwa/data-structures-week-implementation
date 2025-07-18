#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Graph class for BFS and DFS traversal
class Graph {
private:
    int V; 
    int** adj; // adjacency matrix 

public:
    Graph(int V) {
        this->V = V;
        adj = new int* [V];
        for (int i = 0; i < V; ++i) {
            adj[i] = new int[V]();
        }
    }
    ~Graph() {
        for (int i = 0; i < V; ++i)
            delete[] adj[i];
        delete[] adj;
    }

    // Add undirected edge
    void addEdge(int u, int v) {
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // Breadth-First Search using array for visited
    void BFS(int start) {
        bool visited[100] = { false };
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int i = 0; i < V; ++i) {
                if (adj[node][i] && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }

    // Depth-First Search using stack and array for visited
    void DFS(int start) {
        bool visited[100] = { false };
        stack<int> s;

        s.push(start);

        while (!s.empty()) {
            int node = s.top();
            s.pop();

            if (!visited[node]) {
                visited[node] = true;
                cout << node << " ";

               // Push neighbors in reverse order
                for (int i = V - 1; i >= 0; --i) {
                    if (adj[node][i] && !visited[i]) {
                        s.push(i);
        }
        }
        }
        }
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    cout << "BFS starting from node 0: ";
    g.BFS(0);
    cout << endl;
    cout << "DFS starting from node 0: ";
    g.DFS(0);
    cout << endl;

    return 0;
}
