#include <iostream>
using namespace std;

int bin_search(int *a, int b)
{
	// 0 1 2 3 4 5 6 7 8 9
	int l=0, r= sizeof(a)-1;
	int d = (r-l)/2;
	for (; r-l > 0;){
		if (a[d] < b){
			l = d+1;
			d+=d/2;
		}
		if (a[d] > b)
			r = d-1, d/=2;
		if (a[d] == b)
			return a[d]; 
	}
	if (a[l] == b)
		return a[l];
	return -1;
}


int main()
{
	// слияние двух отсортированных массивов
	int n, m;
	cin >> n >> m;
	int * d = new int[n];
	int * b = new int[m];
	int * a = new int[m+n];
	for (int i=0; i<n; i++) cin >> d[i];
	for (int i=0; i<m; i++) cin >> b[i];
	
	int i=0, j=0;
	while (i<n && j<m)
	{
		if (d[i] < b[j]) {
			a[i+j] = d[i];
			i++;
		}
		else{
			a[i+j] = b[j];
			j++;
		}
	}
	while (i<n)
	{
		a[i+j] = d[i];
		i++;
	}
	while (j<m)
	{
		a[i+j] = b[j];
		j++;
	}
	
	
	for (int i=0; i<n+m; i++) cout << a[i] << " "; 
	//cout << bin_search(c, 3);
	
	delete [] a, b, d;
}
