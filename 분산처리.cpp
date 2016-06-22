#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main()
{
	int T;

	cin >> T;
	while (T--)
	{
		vector<int> v;
		int a, b;

		cin >> a >> b;
		
		a %= 10;
		v.push_back(a);

		int i = 3;
		int n = (a*a)%10;

		while (v.front() != n)
		{
			v.push_back(n);
			n = ((int)pow(a, i)) % 10;
			i++;
		}
		if (a % 10 == 0)
			cout << "10" << endl;
		else
			cout << v.at((b - 1) % v.size()) << endl;
	}
}