#include<iostream>

using namespace std;

int **arr;

int dirtyRoute(int n, int x, int y, int sum, bool searching)
{
	int l = (x - 1 >= 0) ? arr[y][x - 1] : 100;
	int r = (x + 1 < n) ? arr[y][x + 1] : 100;
	int t = (y - 1 >= 0) ? arr[y - 1][x] : 100;
}
int main()
{
	int N;

	cin >> N;

	arr = new int*[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
	return 0;
}