#include <cstdio>
#include <string>

using namespace std;

char kalimat[1001];

int main()
{
	scanf("%[^\n]", kalimat);
	string s = kalimat;
	printf("%s\n", s.c_str());
	return 0;
}
