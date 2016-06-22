#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = { 2,7,8,3,1,12,6,22,3,12 };
	int N = 10;

	for (int i = 0; i < N - 1; i++)
		for (int j = 0; j < N - (i + 1); j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	return 0;
}