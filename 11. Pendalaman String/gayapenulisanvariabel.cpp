#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char buff[101];
	scanf("%s", buff);
	string s = buff;

	int uscr = s.find('_');

	if (uscr >= 0)
	{
		while (uscr >= 0)
		{
			s.erase(uscr, 1);
			s[uscr] -= 'a' - 'A';
			uscr = s.find('_');
		}
	}
	else
	{
		int len = s.length();
		for (int i = 0; i < len; i++)
		{
			int ASCII = s[i];
			if (ASCII < 91)
			{
				s[i] += 'a' - 'A';
				s.insert(i, "_");
			}
			len = s.length();
		}
	}

	printf("%s\n", s.c_str());
}