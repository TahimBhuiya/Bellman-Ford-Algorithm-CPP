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
