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

				if (i + 1 >= n) //�Ʒ��� ������
				{
					flag = -1; //������ ����
					changeEnable = false;
					if (j + 1 >= m) //�Ѵ� ������
						flag = 0; //�� ����
				}
				else if (j + 1 >= m) //�������� ������
				{
					flag = 1;  //�Ʒ�����
					changeEnable = false;
				}
				else               //��������
					flag = (arr[i + 1][j] > arr[i][j + 1]) ? 1 : -1 ; //�� ū�� ����

				while (arr[i][j]>0)
				{
					if (flag == -1)
					{
						arr[i][j + 1]--;
						if (arr[i][j + 1] <= 0)
						{ //0���� �۰ų� �������� �¼���ȯ
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