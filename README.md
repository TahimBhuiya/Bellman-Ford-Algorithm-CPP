# Bellman-Ford Algorithm in C++

## 📌 Overview

This C++ program demonstrates the **Bellman-Ford Algorithm**, a graph algorithm used to find the **shortest paths** from a single source node to all other nodes in a weighted graph.

Unlike Dijkstra’s algorithm, Bellman-Ford can handle **negative edge weights** and can also detect **negative weight cycles**.

Steps Bellman-Ford follows:

1. Initializes distances from the source to all vertices.
2. Relaxes all edges repeatedly (V − 1 times).
3. Checks for negative weight cycles.
4. Outputs the shortest distances if no negative cycle exists.

---

## 🔧 Features

- **Handles Negative Edge Weights**
- **Detects Negative Weight Cycles**
- **Single-Source Shortest Paths**
- **Edge List Representation**
- **Fully Commented Code** for learning and modification

---

## 📋 Example Run

**Graph Structure (edge list format):**

```
0 -> 1 (weight -1)
0 -> 2 (weight 4)
1 -> 2 (weight 3)
1 -> 3 (weight 2)
1 -> 4 (weight 2)



```
