#include <iostream>
using namespace std;


int len(char *str)
{
	int k=0;
	while(str[k++]!='\0');
	return --k;
}

int main()
{
	// 1. Проверить правильность расстоновки скобок ()
	// 2. Проверить правильность расстоновки скобок () [] {}
	// 3. строка палиндром?
	/*
	4. строка палиндром? если игнорировать пробелы
	5. текст состоит из строчных латинских букв
	можно ли переставить буквы, что получился палиндром?
	*/
	// #3
//	char a[10000];
//	gets(a);
//	int k=len(a);
//	int i=0;
//	bool v=true;
//	for (int i=0; i<k/2; i++) {
//		if(a[i] != a[k-1-i]) {
//			v=false;
//			break;
//		}
//	}
//	if (v) cout << "Yes" << endl;
//	else cout << "No" << endl;
	// --#4
//	char a[1000];
//	gets(a);
//	int i=0;
//	int k=0;
//	while(a[i]){
//		while(a[i]==' ') {
//			k++;
//			i++;
//		}
//		while(a[i]!=' '&& a[i]!='\0') {
//			a[i-k]=a[i]; i++;
//		}
//	}
//	a[i-k]='\0';
//	k=len(a);
//    i=0;
//	bool v=true;
//	for (int i=0; i<k/2; i++) {
//		if(a[i] != a[k-1-i]) {
//			v=false;
//			break;
//		}
//	}
//	if (v) cout << "Yes" << endl;
//	else cout << "No" << endl;

	// #1
//	char a[1000];
//	gets(a);
//	int l=0,r=0;
//	bool v=true;
//	for(int i=0; a[i]!='\0'; i++)
//	{
//		if (a[i] == '(') l++;
//		if (a[i] == ')') r++;
//		if (l<r) {
//			v=false;
//			break;
//		}
//	}
//	if (r-l!=0) v=false;
//	if(v) cout << "Yes";
//	else cout << "No";
	// #2
//	char a[1000];
//	gets(a);
//	int l1=0,r1=0,l2=0,r2=0,l3=0,r3=0;
//	bool v=true;
//	for(int i=0; a[i]!='\0'; i++)
//	{
//		if (a[i] == '(') l1++;
//		if (a[i] == ')') r1++;
//		if (a[i] == '[') l2++;
//		if (a[i] == ']') r2++;
//		if (a[i] == '{') l3++;
//		if (a[i] == '}') r3++;
//		if (l1<r1 || l2<r2 || l3<r3) {
//			v=false;
//			break;
//		}
//	}
//	if (r1-l1!=0 || r2-l2!=0 || r3-l3!=0) v=false;
//	if(v) cout << "Yes";
//	else cout << "No";
	// #5
	int *b=new int[256];
	for(int i=0; i<256;i++)b[i]=0;
	char a[1000];
	gets(a);
	int k=len(a);
	sort(a, a+k);
	for(int i=0; i<k;i++)
	{
		b[a[i]]++;
	}
	int n=0, m=0;
	for(int i=0; i<256; i++)
	{
		if(b[i]>0 && b[i]%2==0) n++;
		if(b[i]>0 && b[i]%2!=0) m++;
		//if (b[i]>0) cout << (char)i << endl;
	}
	bool v=true;
	if(k%2==0) if(m>0) v=false;
	else if(m>1) v=false;
	cout << v;//k<< " " << n << " " << m
	delete [] b;
}

