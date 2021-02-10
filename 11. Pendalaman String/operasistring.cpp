#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char buff1[101], buff2[101], buff3[101], buff4[101];

	//memasukkan input data
	scanf("%s", buff1);
	scanf("%s", buff2);
	scanf("%s", buff3);
	scanf("%s", buff4);
	string S1 = buff1;
	string S2 = buff2;
	string S3 = buff3;
	string S4 = buff4;

	//menghapus S2 yang ada di S1
	int pos = S1.find(S2);
	int len = S2.length();
	S1.erase(pos, len);

	//menyisipkan S4 ke belakang S3 pada S1
	pos = S1.find(S3);
	len = S3.length();
	S1.insert(pos + len, S4);

	printf("%s\n", S1.c_str()); //cetak S1
}