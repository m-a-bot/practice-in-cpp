#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	int k, m=-1;
	
	for (int i=1; i<n; i++) {
		
		if (a[i] > m){
			m=a[i];
			k=i;
		}
		
		for (;a[0] <= m;)
		{
			m--;
			a[0]++;
			a[k]--;	
		}
	}
	cout << a[0] << " ";
}
