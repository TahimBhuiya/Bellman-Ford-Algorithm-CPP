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
            
            
        }
    }
