#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char ss[1001], tt[1001];
	int f, len;
	scanf("%s %s", ss, tt);
	string s = ss;
	string t = tt;

	f = s.find(t);
	len = t.length();
	while (f >= 0)
	{
		s.erase(f, len);
		f = s.find(t);
		len = t.length();
	}
	printf("%s\n", s.c_str());
}