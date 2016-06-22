#include<iostream>
#include<stack>
#include<string>

using namespace std;


bool matchCheck(char left, char right) //left�� right�� (),{},[]���� �̷���� �˻�
{
	char charSet[3][2] = {
		{ '(',')' },
		{ '{','}' },
		{ '[',']' }
	};

	bool c = false;

	for (int i = 0; i < 3; i++)
	{
		if (left == charSet[i][0])
		{
			if (right == charSet[i][1])
				c = true;
		}
	}
	return c;
}
int main()
{
	int C;

	cin >> C;

	while (C--)
	{
		stack<char> stk;

		string s;
		
		cin >> s;
		
		int i;
		bool t = true;

		for (i = 0; i < s.length(); i++)
		{
			if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
				stk.push(s.at(i));
			else
			{
				if (!stk.empty())
				{
					t = matchCheck(stk.top(), s.at(i));
					if (t)
						stk.pop();
				}
				else
					t = false;
			}

			if (!t) //Ʋ�� ������ ���� �ǴܵǸ� �ٷ� for���� ���͵� �ȴ�.
				break;
		}

		if (!t || !stk.empty())
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}