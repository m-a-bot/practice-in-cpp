#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// 5. Сколько различных чисел в массиве a?
	// 6. Сдвинуть все ненулевые элементы к налачу массива, а нули в конец
	// 1 0 2 --> 1 2 0
	// 7. Состоят ли 2 массива из одинакового набора элементов
//	int n; cin >> n; int x;
//	int * a = new int[1001000];
//	for (int i=0; i<1001000; i++) a[i] = 0;
//	for (int i=0; i<n; i++){
//		cin >> x;
//		a[x+1000] = 1; 
//	}
//	int k=0;
//	for (int i=0; i<1001000; i++) {
//		if (a[i]>0) k++;
//	}
//	cout << k;
//	delete [] a;
	// #6
//	int n; cin>>n;
//	int * a = new int[n];
//	for (int i=0; i<n; i++) {
//		cin >> a[i];
//	}
//	
//	for (int i=0; i<n; i++){
//		if (a[i] == 0){
//			int d = a[i];
//			for (int j=i+1; j<n; j++) a[j-1] = a[j];
//			a[n-1] = d;
//		}
//		else{
//			int d = a[i];
//			for (int j=i-1; j>=0; j--) a[j+1] = a[j];
//			a[0] = d;
//		}
//	}
//	for (int i=0; i<n; i++) cout << a[i] << " ";
	// #7
	int n,m; cin>>n>>m;
	int *a = new int[n];
	int *b = new int[m];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	bool v = true;
	sort(a, a+n);
	sort(b, b+m);
	if (n==m)
	{
		for (int i=0; i<n; i++)
		{
			if(a[i]!=b[i])	{
				v = false;
				break;
			}
		}	
	}
	else v=false;
	cout << v;
	delete [] a, b;
}
