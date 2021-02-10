#include <cstdio>

int main()
{
	int n, a = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d", a);
			a = (a + 1) % 10;
		}
		printf("\n");
	}
	return 0;
}