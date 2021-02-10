#include <cstdio>

int n = 0, arr[101];

int main()
{
  while (scanf("%d", &arr[n]) != EOF)
  {
  	n++;
  }
  for (int i = n - 1; i >= 0; i--)
  {
  	printf("%d\n", arr[i]);
  }
}