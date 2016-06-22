#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int min, max;
	cin >> min >> max;
	
	bool* check = new bool[max - min + 1];

	for (int i = 2; i <= sqrt(max); i++)
	{
		long long int s = i*i;
		for (int j = 1; s <= max; j++)
		{
			if (s >= min)
				check[s - min] = false;
			
			s = i*i*j;
		}
	}

	int cnt = 0;
	for (int i = 0; i < max - min + 1; i++)
	{
		if (check[i])
			cnt++;
	}
	cout << cnt << endl;

	delete[] check;

	return 0;
}