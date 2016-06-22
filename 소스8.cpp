#include<iostream>
#include<algorithm>

using namespace std;

int sticker[2][100000];
int D[100000];

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void qsort(int* arr, const int left, const int right)
{
	if (left >= right)
		return;
	int l = left + 1;
	int r = right;

	int pivot = arr[left];

	while (l < r)
	{
		while (pivot > arr[l] && l < right) l++;
		while (pivot < arr[r] && r > left) r--;
		
		if (l < r)
			swap(arr[l], arr[r]);
	}
	swap(arr[left], arr[r]);

	qsort(arr, left, r - 1);
	qsort(arr, r + 1, right);
}
int main()
{
	int arr[9] = { 2,3,1,135,232,12,33,242,11 };

	qsort(arr, 0, 8);

	for (int i = 0; i < 9; i++)
		cout << arr[i] << " ";
	
	return 0;
}