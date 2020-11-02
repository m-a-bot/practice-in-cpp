#include <iostream>
#include <algorithm>
using namespace std;

int len(char *a)
{
	int k=0;
	while (a[k++]!='\0');
	return --k;
}


int main()
{
	char a[1000];
	gets(a);
	int l=len(a);
	sort(a, a+l);
	char b=a[0];
	int k=1;
	for (int i=1; i<l; i++) {
		if (a[i] == b) k++;
		else {
			cout << b << " " << k << endl;
			k=1;
			b=a[i];
		}
	}
}
