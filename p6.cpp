#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
	int f=1;
	for (int i=2;i<=n;i++) f*=i;
	return f;
}

int main()
{
	// число сочетаний из п по к.
	int n,k;
	cin >> n >> k;
	double s=1;
	int km = max(k, n-k);
	for (int i=km+1, j=1; i<=n; i++, j++) s= s*i/j;
	cout << s << endl;
	return 0;
}
