#include <cstdio>

int main ()
{
	int n, b, sum=0;
	scanf ("%d", &n);
	for (int i=1; i<=n; i++)
	{
		scanf("%d", &b);
		sum += b;
	}
	printf("%d\n", sum);
	return 0;
}