#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int N, M, S, E;

	cin >> N >> M >> S >> E;

	//define n*n array
	int** graph = new int*[N];
	for (int i = 0; i < N; i++)
	{
		graph[i] = new int[N];
		for (int j = 0; j < N; i++)
			graph[i][j] = -1;
	}

	while (M--) {
		int A, B, L;
		bool t1, t2;

		cin >> A >> B >> L >> t1 >> t2;
		graph[A - 1][B - 1] = (t1 == 1) ? L * 2 : L;
		graph[B - 1][A - 1] = (t2 == 1) ? L * 2 : L;
	}

	return 0;
}