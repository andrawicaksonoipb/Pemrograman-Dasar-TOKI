#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char buff[101];

	scanf("%s", buff);
	string s = buff;
	int size = s.size();

	for  (int i = 0; i < size; i++)
	{
		int ASCII = s[i];
		if (ASCII < 91)
		{
			s[i] += 'a' - 'A';
		}
		else
		{
			s[i] -= 'a' - 'A';
		}
	}

	printf("%s\n", s.c_str());
}