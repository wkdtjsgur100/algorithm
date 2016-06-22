#include<iostream>

using namespace std;

char map[2*100+1][2*100+1];
int re = 0;
int N, M;
float K;

void removeBlock(int x, int y)
{
	if (map[y][x] != '.')
		return;

	if (y % 2 == 1)
	{
		map[y][x - 1] = 'O';
		map[y][x + 1] = 'O';
	}
	else
	{
		map[y - 1][x] = 'O';
		map[y + 1][x] = 'O';
	}
}
void block(int x, int y, int dx, int dy)
{
	if (map[y][x] == 'B')
	{
		map[y][x] = 'O';
		re++;
	}
	else if (map[y][x] == '.')
	{
		removeBlock(x, y);
	}
	if (x + dx < 0)
		dx = 1;
	block(x + dx, y + dy, dx, dy);
}
int main()
{
	cin >> N >> M >> K;

	for (int i = 0; i < 2 * M + 1; i++)
		cin >> map[i];

	block(K / 0.5f - 1, 2 * M, -1, -1);
	
	cout << re << endl;
}