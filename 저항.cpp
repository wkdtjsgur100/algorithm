#include<iostream>
#include<string>
#include<math.h>

using namespace std;

string s[10] = {
	"black","brown","red","orange","yellow","green","blue","violet","grey","white"
};

int getIndex(string _s)
{
	for (int i = 0; i < 10; i++)
		if (s[i] == _s)
			return i;
}
int main()
{
	long long o = 0;

	string in;

	cin >> in;

	o += getIndex(in) * 10;

	cin >> in;
	
	o += getIndex(in);

	cin >> in;

	o *= pow(10, getIndex(in));

	cout << o << endl;

	return 0;
}