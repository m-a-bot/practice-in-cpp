#include <iostream>
#include <algorithm>
using namespace std;

int len(char *str);
int len(char *str)
{
	int k=0;
	while(str[k++]!='\0');
	return --k;
}

// r-l+1 - длина
int join_digits(char *str, int l, int r)
{
	int d=0, t=1;
	for (int i=r; i>=l; i--)
	{
		d += (str[i]-'0')*t;
		t*=10;
	}
	return d;
}

void join(char *s, char *s1)
{
	int m=len(s);
	for (int i=0; s[m+i] = s1[i]; i++);
}

int main()
{
	/*
	стандартное соглашение
	'\0'-конец строки
	*/
	
//	char a[1000];
//	char t[1000];
//	gets(a);
	//gets(t);
//	int m=len(t);
//	for (int i=0; t[m+i] = a[i]; i++);
//	cout << t << endl;
//	join(t, a);
//	cout << t << endl;


	// #4
//	bool v=true;
	// int a1=len(a), a2=len(t);
//	if (a1!=a2) v=false;
//	else{
//		for (int i=0; i<a1; i++) if (a[i]!=t[i]) v=false;
//	}
//	if (v) cout << "Yes";
//	else cout << "No";
	
//	for (int i=0; i<len(a); i++) t[i] = a[i];
//	cout << t << endl <<len(t);
//	cout << join_digits(a, 0, 2) << endl;
//	char t[] = "jhasofiqwgifubasdkhfbasdoifbashdf";
//	cout << t;

	// #5 подсчитать сколько встречаются символы
//	char a[1000];
//	gets(a);
//	int l=len(a);
//	sort(a, a+l);
//	char b=a[0];
//	int k=1;
//	for (int i=1; i<l; i++) {
//		if (a[i] == b) k++;
//		else {
//			cout << b << " " << k << endl;
//			k=1;
//			b=a[i];
//		}
//	}
	// #6
	// Найти самое длиное слово в тексте и кол-во слов
	const int N=2000;
	char a[N];
	gets(a);
//	int i=0;
//	int max=0;
//	int k=0;
//	while(a[i]!='\0')
//	{
//		while(a[i]==' ')i++; // пропуск пробелов
//		int l=0;
//		while(a[i]!=' '&&a[i]!='\0') {
//			i++;
//			l++;
//		}
//		if (l>0) {
//			k++;
//			max=l>max?l:max;
//		}
//	}
//	cout << k << " " << max;
	// #7
	int i=0, k=0;
	while(a[i]!='\0')
	{
		while(a[i]==' ') {
			i++;
			k++;
		}
		while(a[i]!=' ' && a[i] != '\0')
		{
			a[i-k] = a[i];
			i++;
		}
		a[i-k]=a[i];
		if(a[i]!='\0') i++;
	}
	if(a[i-1]==' ')
        a[i-k-1]='\0';
	cout << endl << a<<endl;
}
