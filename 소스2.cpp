#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string* s = new string[n];

	for (int i = 0; i<n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i<n; i++)
	{
		cout << "Hello, " << s[i] << "!" << endl;
	}
	return 0;
}