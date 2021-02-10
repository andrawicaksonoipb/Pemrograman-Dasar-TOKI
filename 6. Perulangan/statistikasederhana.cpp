#include <cstdio>

int main ()
{
	int n, c, a=-100001, b=100001;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf ("%d", &c);
		if (c>a)
		{
			a = c;
		}
		if (c<b)
		{
			b = c;
		}
	}
	printf("%d %d\n", a, b);
	return 0;
}