#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void qsort(int *arr, const int left, const int right)
{
	if (left >= right)
		return;

	int l = left+1;
	int r = right;

	int pivot = arr[left];

	do
	{
		while (pivot > arr[l])
			l++;

		while (pivot < arr[r])
			r--;

		if(l < r) 
			swap(arr[l], arr[r]);
	} while (l < r);

	arr[left] = arr[r];
	arr[r] = pivot;

	qsort(arr, left, r-1);
	qsort(arr, r+1, right);
}
int main()
{
	int arr[10] = { 10,1,2,3,4,5,6,7,8,9 };

	qsort(arr, 0, 9);

	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	return 0;
}