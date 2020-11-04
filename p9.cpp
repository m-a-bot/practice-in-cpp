#include <iostream>
#include <cmath>
using namespace std;


int nod(int a, int b)
{
	int t;
	while (b>0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << nod(a, b) << endl; // nod
	cout << a*b/nod(a,b) << endl; // nok
}
