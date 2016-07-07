adjlist-code

This repository contains
    - adjlist.h
    - main.cpp

adjlist.h contains a class: graph, where a simple adjacency list graph implementation is coded.
This includes:
    - graph(int V) - a constructor for a graph with V vertices
    - void add_edge(int u, int v) - a modifier to add edge (u,v)
    - void set_state(int n, int s) - a modifier to set the state of vertex n to state s
    - void set_state(int s) - a modifier to set the state of all vertices to state s
    - void make_complete() - a modifier to make the graph make complete
    - std::list<int> adj_to(int n) - an access method for a list of vertices adjacent to vertex n
    - int get_state(int n) - an access method for the state of vertex n
    - std::list<int> get_adj_state(int n) - an access method for the states of vertices adjacent to vertex n

main.cpp is an example of this class's usage whereby a graph with 4 vertices is produced, made into a complete graph, and then the list of vertices adjacent to vertex 1 are output to the console.
