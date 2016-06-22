#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

int Rev(int X)
{
	queue<int> q;
	while (X != 0)
	{
		q.push(X % 10);
		X /= 10;
	}

	int r = 0;

	for (int i = q.size() - 1; i >= 0; i--)
	{
		r += pow(10, i) * q.front();
		q.pop();
	}
	return r;
}
int main()
{
	int X, Y;

	cin >> X >> Y;

	cout << Rev(Rev(X) + Rev(Y)) << endl;

	return 0;
}