#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i=0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		bool prime = true;
		int divisor = 2;
		int counter = 0;
		while (divisor < x)
		{
			if (x % divisor == 0)
			{
				counter++;
			}
			if (counter > 2)
			{
				prime = false;
				break;
			}
			divisor++;
		}
		if (prime)
		{
			printf("YA\n");
		}
		else
		{
			printf("BUKAN\n");
		}
	}
}