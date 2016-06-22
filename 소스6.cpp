#include <iostream>

using namespace std;

int main()
{
	int N, n1, n2;

	cin >> N >> n1 >> n2;

	int re = -1;

	while (n1 != n2 && N != 1)
	{
		n1 = (n1+1)/2;
		n2 = (n2+1)/2;

		re++;
		N = N/2 + 1;
	}
	re = (re == -1) ? -1 : ++re;
	cout << re << endl;
}