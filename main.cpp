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


	return 0;

}