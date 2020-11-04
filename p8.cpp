#include <iostream>
using namespace std;

int main()
{
	# 6
	// s1 = (1+x)*(1+x+x*x)*(1+x+x*x+x*x*x) * ...
	/*
	int s = 1, p=1, sum=1;
	int x, n;
	cin >> x >> n;
	for (int i=0; i<n; i++)
	{
		s*=x;
		sum += s;
		p *= sum;
	}
	cout << p;*/
	
	# 7
	// s2 = (2+x)(3+2x+x*x)(4+3x+2x*x+x*x*x)*...
	/*
	int s = 2, p=1, sum=1, s1, p1=1;
	int x, n;
	cin >> x >> n;
	for (int i=0; i<n; i++)
	{
		p1*=x;
		s+=p1;
		p*=s;
		s1 =1;
		for (int j=0; j<i+2; j++)
		{
			s+=s1;
			s1*=x;
		}
	}
	cout << p << endl; */
	
	# 8
	// s = 1* 1! + 2*2! + 3*3! + ... + n*n!
	int s=1, p=1;
	int n;
	cin >> n;
	
	for (int i=2; i<=n; i++)
	{
		p*=i;
		s+=i*p;
	}
	cout << s;
	return 0;
}
