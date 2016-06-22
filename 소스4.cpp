#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while (T--)
	{
		int n, m;
		cin >> n >> m;

		int** arr = new int*[n];

		for (int i = 0; i < n;i++)
		{
			arr[i] = new int[m];
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int flag = 0;
				bool changeEnable = true;

				if (i + 1 >= n) //아래가 터지면
				{
					flag = -1; //오른쪽 선택
					changeEnable = false;
					if (j + 1 >= m) //둘다 터지면
						flag = 0; //안 선택
				}
				else if (j + 1 >= m) //오른쪽이 터지면
				{
					flag = 1;  //아래선택
					changeEnable = false;
				}
				else               //안터지면
					flag = (arr[i + 1][j] > arr[i][j + 1]) ? 1 : -1 ; //더 큰쪽 선택

				while (arr[i][j]>0)
				{
					if (flag == -1)
					{
						arr[i][j + 1]--;
						if (arr[i][j + 1] <= 0)
						{ //0보다 작거나 같아지면 태세전환
							if (changeEnable) {
								flag = 1;
								changeEnable = false;
							}
							else      
								flag = 0;
						}
					}
					else if (flag == 1)
					{
						arr[i + 1][j]--;
						if (arr[i + 1][j] <= 0) 
						{
							if (changeEnable)
							{
								flag = -1;
								changeEnable = false;
							}
							else
								flag = 0;
						}
					}
					arr[i][j]--;
					cnt++;
				}
							
			}
		}
		cout << cnt << endl;
	}
	return 0;
}