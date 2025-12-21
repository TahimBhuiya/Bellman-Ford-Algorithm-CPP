#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
using namespace std;

// Structure to represent an edge
struct Edge {
    int u;      // Source vertex
    int v;      // Destination vertex
    int weight; // Weight of the edge
};




// Bellman-Ford algorithm function
void bellmanFord(int V, int src, vector<Edge>& edges) {
    // Distance array: dist[i] will hold the shortest distance from src to i
    vector<int> dist(V, INT_MAX);

    // Distance to source is 0
    dist[src] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (auto edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int w = edge.weight;

            // Relaxation step
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative weight cycles
    for (auto edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int w = edge.weight;

        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "Graph contains a negative weight cycle\n";
            return;
        }
    }

    // Print shortest distances
    cout << "Shortest distances from source node " << src << ":\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX)
            cout << i << ": INF\n";
        else
            cout << i << ": " << dist[i] << "\n";
    }
}

// Main function
int main() {
    int V = 5;  // Number of vertices
    int src = 0; // Source vertex

    // List of edges
    vector<Edge> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        
        
        
    };

    
    

}