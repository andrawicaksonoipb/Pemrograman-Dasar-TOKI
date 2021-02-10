#include <cstdio>

int fungsi (int A, int B, int x)
{
	int fx = A*x + B;
	if (fx < 0)
	{
		fx *= -1;
	}
	return fx;
}

int main()
{
	int A, B, K, x, res;
	scanf("%d %d %d %d", &A, &B, &K, &x);
	res = fungsi(A, B, x);
	K--;
	while (K--)
	{
		res = fungsi(A, B, res);
	}
	printf("%d\n", res);
}