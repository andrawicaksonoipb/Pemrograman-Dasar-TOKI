#include <cstdio>
#include <cmath>

int main ()
{
	float n;
	int f, c;
	scanf ("%f", &n);
	if (n == trunc(n))
	{
		f = c = n;
	}
	else if (n>0)
	{
		c = trunc (n) + 1;
		f = trunc (n);
	}
	else
	{
		c = trunc (n);
		f = trunc (n) - 1;
	}
	printf("%d %d\n", f, c);
	return 0;
}