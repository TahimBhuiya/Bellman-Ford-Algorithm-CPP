# Bellman-Ford Algorithm in C++

## 📌 Overview

This C++ program demonstrates the **Bellman-Ford Algorithm**, a graph algorithm used to find the **shortest paths** from a single source node to all other nodes in a weighted graph.

Unlike Dijkstra’s algorithm, Bellman-Ford can handle **negative edge weights** and can also detect **negative weight cycles**.

Steps Bellman-Ford follows:

1. Initializes distances from the source to all vertices.
2. Relaxes all edges repeatedly (V − 1 times).
3. Checks for negative weight cycles.
