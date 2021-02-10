#include <cstdio>

int n, m;
int matriks[105][105];

int main()
{
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &matriks[i][j]);
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      printf("%d", matriks[j][i]);
      if (j != 0)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
      }
    }
  }
}