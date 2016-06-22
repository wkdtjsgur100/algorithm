#include<iostream>
#include <string>

using namespace std;

int A[50][50];
int B[50][50];

int main()
{
	int N, M;

	cin >> N >> M;
	
	for (int i = 0; i < N*2; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < M; j++)
		{
			if (i < N)
				(s.at(j) == '0') ? A[i][j] = 0 : A[i][j] = 1;
			else
				(s.at(j) == '0') ? B[i][j] = 0 : B[i][j] = 1;
		}
	}

	return 0;
}