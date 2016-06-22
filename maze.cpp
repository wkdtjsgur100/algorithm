#include<iostream>

using namespace std;

bool* visit;


int main()
{
	int N, M;
	
	cin >> N >> M;

	bool** graph = new bool*[N];
	
	visit = new bool[N];

	for (int i = 0; i < N; i++)
		graph[i] = new bool[N];

	while (M--)
	{
		int i, j;

		cin >> i >> j;

		graph[i][j] = false;
		graph[j][i] = false;
	}

	for (int i = 0; i < N; i++)
		delete[] graph[i];

	delete[] graph;
	delete[] visit;

	return 0;
}