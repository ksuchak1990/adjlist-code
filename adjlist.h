#pragma once
#ifndef __ADJLIST_H_INCLUDED__	// Prevents class from being redefined
#define __ADJLIST_H_INCLUDED__

#include <iostream>
#include <vector>
#include <list>

class graph
{
private:
    std::vector< std::list<int> > adjlist;

public:

    // CONSTRUCTORS

    // Constructor for V vertices
    graph(int V)
    {
        adjlist.resize(V);
    }

    // MODIFIERS

    // Add edge (u,v)
    void add_edge(int u, int v)
    {
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    // Make graph complete
    void make_complete()
    {
    	int N = adjlist.size();
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i != j)
				{
					adjlist[i].push_back(j);
				}
			}
		}
    }

    // ACCESSORS

    // Access method - list of vertices adjacent to vertex n
    std::list<int> adj_to(int n)
    {
		std::list<int> mylist = adjlist.at(n);
		return mylist;
    }

};
#endif	// ADJLIST_H

