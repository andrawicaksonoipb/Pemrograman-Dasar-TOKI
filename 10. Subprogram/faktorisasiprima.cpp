#include <cstdio>

int main()
{
	long long N;

	scanf("%ld", &N);
	for (long long i = 2; i <= N; i++)
	{
		long long counti = 0;

		while (N%i == 0)
		{
			N /= i;
			counti++;
		}
		if (counti < 1)
		{
			continue;
		}
		if (counti > 1)
		{
			printf("%ld^%ld", i, counti);
		}
		else
		{
			printf("%ld", i);
		}
		if (N != 1)
		{
			printf(" x ");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}