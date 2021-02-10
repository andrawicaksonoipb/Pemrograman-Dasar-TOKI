#include <cstdio>

int a[105][105], b[105][105], n, m, p, result;

int main()
{
	scanf("%d%d%d", &n, &m, &p);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			result = 0;
			for (int k = 0; k < p; k++)
			{
				result += (a[i][k] * b[k][j]);
			}
			printf("%d", result);
			if (j < p - 1)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}