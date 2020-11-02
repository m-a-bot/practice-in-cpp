#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// #3
	/*
	double x, eps = 0.00001;
	cin >> x;
	double r=1, e=0;
	for (int i=1; abs(r)>= eps; i++)
		e+=r,r*=x/i;
	
	cout << e << endl;
	*/
	
	// #4
	/*
	double x, eps = 0.00001;
	cin >> x;
	double r=x, s=x;
	for (int i=1; abs(r)>= eps; i+=2)
	{
		r = -r*x*x/(i+1)/(i+2);
		s += r;
	}
	cout << s << endl;
	*/
	// #5
	double x, eps = 0.00001;
	cin >> x;
	double r=1, c=1;
	for (int i=0; abs(r)>= eps; i+=2)
	{
		r = -r*x*x/(i+2)/(i+1);
		c += r;
	}
	cout << c << endl;
	return 0;
}
