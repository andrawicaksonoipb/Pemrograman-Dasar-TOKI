#include <cstdio>

int main ()
{
	int i, sum=0;
	while (scanf("%d", &i) != EOF)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}