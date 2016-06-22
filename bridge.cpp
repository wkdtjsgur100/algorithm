#include<stdio.h>

int main()
{
	int T;
	scanf_s("%d",&T);
	while (T--)
	{
		int N, M;
		scanf_s("%d %d", &N, &M);

		long long int re = 1;
		for (int i = 1; i <= N; i++)
		{
			re *= (M - i + 1);
			re /= i;
		}
		printf("%d\n", re);
	}
}