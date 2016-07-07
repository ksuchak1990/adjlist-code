#include "adjlist.h"

using namespace std;
const int N = 4;

int main()
{

	graph g(N);
	g.make_complete();

	// Print out vertices adjacent to vertex 1
	list<int> k = g.adj_to(1);		// k - list of vertices adjacent to 1
	list<int>::iterator listiter;	// iterator for list
	cout << "Vertices connected to vertex 1 are ";
	for (listiter = k.begin(); listiter != k.end(); listiter++)
	{
		cout << *listiter << '\t';
	}
	cout << endl;

	g.set_state(1);
	int m = g.get_state(0);
	cout << m << endl;
	g.set_state(0,0);
	m = g.get_state(0);
	cout << m << endl;

	list<int> f = g.get_adj_state(2);
	cout << "States of vertices connected to vertex 2 are ";
	for (listiter = f.begin(); listiter != f.end(); listiter++)
	{
		cout << *listiter << '\t';
	}
	cout << endl;



	return 0;

}