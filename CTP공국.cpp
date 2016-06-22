#include<iostream>

using namespace std;

int main()
{	
	int T,M;
	char C;
	int input[501];

	cin >> T;
	while (T--)
	{
		cin >> M >> C;

		for (int i = 0; i < M; i++)
		{
			if (C == 'C')
			{
				char c;
				cin >> c;
				input[i] = (int)c - (int)'A' + 1;
			}
			else
			{
				cin >> input[i];
				input[i] += ((int)'A'-1);
			}
		}
		for (int i = 0; i < M; i++)
		{
			if (C == 'N') cout << (char)input[i] << " ";
			else cout << input[i] << " ";
		}
		cout << endl;
	}
	return 0;
}