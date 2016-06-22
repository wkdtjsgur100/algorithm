#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	string s;
	cin >> s;
	int R = 0, G = 0, B = 0;

	for (int i = 0; i < s.length(); i++)
	{
		//count RGB
		if (s[i] == 'R') 
			R++;
		else if (s[i] == 'G') 
			G++;
		else 
			B++;
		
		int left = (i == 0) ? s[s.length()-1] : s[i - 1];
		int right = (i == s.length() - 1) ? s[0] : s[i + 1];

		if (left == right && s[i] == left && s[i] == right)
		{
			if (s[i] == 'R')
				R--;
			else if (s[i] == 'G')
				G--;
			else
				B--;

			B++;
		}
		else
		{

		}
	}

	return 0;
}