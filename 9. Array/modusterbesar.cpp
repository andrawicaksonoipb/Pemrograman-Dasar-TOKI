#include <cstdio>

int main()
{
	int arr[1001] = {0}, n, m, x = -1, y = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		arr[m]++;
		if (x < m)
		{
			x = m;
		}
	}
	for (int i = 0; i <= x; i++)
	{
		if (y < arr[i])
		{
			y = arr[i];
		}
	}
	for (int i = x; i >= 0 ; i--)
	{
		if (arr[i] == y)
		{
			printf("%d\n", i);
			break;
		}
	}
}