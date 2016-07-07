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
    std::vector<int> states;

public:

    // CONSTRUCTORS

    // Constructor for V vertices
    graph(int V)
    {
        adjlist.resize(V);
        states.resize(V);
    }

    // MODIFIERS

    // Add edge (u,v)
    void add_edge(int u, int v)
    {
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    // Set state of vertex n to state s
    void set_state(int n, int s)
    {
        states.at(n) = s;
    }

    // Set state of all vertices to state s
    void set_state(int s)
    {
        int N = states.size();
        for (int j = 0; j < N; j++)
        {
            states.at(j) = s;
        }
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

    // Get list of vertices adjacent to vertex n
    std::list<int> adj_to(int n)
    {
		std::list<int> mylist = adjlist.at(n);
		return mylist;
    }

    // Get state of vertex n
    int get_state(int n)
    {
        int x = states.at(n);
        return x;
    }

    // Get list of states of vertices adjacent to vertex n
    std::list<int> get_adj_state(int n)
    {
        std::list<int> k = adj_to(n);
        std::list<int>::iterator listiter;
        std::list<int> mylist;
        int x;

        for (listiter = k.begin(); listiter != k.end(); listiter++)
        {
            x = get_state(*listiter);
            mylist.push_back(x);
        }
        return mylist;
    }



};
#endif	// ADJLIST_H

