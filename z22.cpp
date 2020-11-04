#include <iostream>
using namespace std;

int main()
{
	const int N = 10000;
	char s[N];
	gets(s);
	int maxlen=0, k=0, maxbeg;
	// иикл до конца текста
	for(int i=0; s[i];)
	{
		// пропустить пробелы
		for(;s[i]==' ';i++);
		if(s[i]==0) break;
		// запомнить начало слова
		int beg = i;
		for(;s[i]!=' '&&s[i]; i++);
		int end = i;
		int l = end-beg;
		if(l>0) k++;
		if (l>maxlen){
			maxlen=l;
			maxbeg=beg;
		}
	}
	cout << k << endl << maxlen<<endl;
	for (int i=maxbeg; i<maxbeg+maxlen; i++) cout << s[i];
	
}
