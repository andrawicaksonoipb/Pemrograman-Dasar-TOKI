#include <cstdio>
#include <cmath>

int main()
{
	int N, D, arrX[1001], arrY[1001], min, max;
	scanf("%d %d", &N, &D);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arrX[i], &arrY[i]);
	}
	min = max = pow(labs(arrX[0] - arrX[1]), D) + pow(labs(arrY[0] - arrY[1]), D);
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			int T = pow(labs(arrX[i] - arrX[j]), D) + pow(labs(arrY[i] - arrY[j]), D);
			if(T > max)
			{
				max = T;
			}
			if(T < min)
			{
				min = T;
			}
		}
	}
	
	printf("%d %d\n", min, max);
}