#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int arr[1000];
int N;

int maximum(int i, int bSum)
{
	if (i >= N)
		return bSum;

	int j = i;
	int sum = 0; 

	while (arr[++i] > 0)
		sum += arr[i];

	if (sum > 0)
	{
		int m = max(bSum + sum + arr[j], sum);

		m = max(m, bSum);

		bSum = m;
	}
	maximum(i, bSum);
}
int main()
{
	int T;
	cin >> T;
	
	while (T--)
	{
		cin >> N;

		for (int i = 0; i < N; i++)
			cin >> arr[i];
		
		int m = arr[0];
		for (int i = 0; i < N;i++)
				m = ( m < arr[i]) ? arr[i] : m;

		if (m < 0)
			cout << m << endl;
		else
			cout<<maximum(0, 0)<<endl;
	}
	return 0;
}