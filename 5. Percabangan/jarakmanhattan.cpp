#include <cstdio>

int main ()
{
	int x1, x2, y1, y2, s;
	scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x1 > x2)
	{
		if (y1 > y2)
		{
			s = (x1 - x2) + (y1 - y2);
		}
		else
		{
			s = (x1 - x2) + (y2 - y1);
		}
	}
	else
	{
		if (y1 > y2)
		{
			s = (x2 - x1) + (y1 - y2);
		}
		else
		{
			s = (x2 - x1) + (y2 - y1);
		}
	}
	printf("%d\n", s);
	return 0;
}