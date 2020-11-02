#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	/* Сортировка пузырьком. Обменная */
//	int n;
//	cin >> n;
//	int * ar = new int[n];
//	for (int i=0; i<n; i++) cin >> ar[i];
//	for (int i=0; i<n; i++){
//		for (int j=0; j<n-i-1; j++)
//		{
//			if (ar[j] > ar[j+1]){
//				swap(ar[j], ar[j+1]);
//			}
//		}
//	}
//	for (int i=0; i<n; i++) cout << ar[i] << " ";
//	delete [] ar;

	/*  Сортировка последовательным поиском минимума*/
//	int n;
//	cin >> n;
//	int * ar = new int[n];
//	int min, k;
//	for (int i=0; i<n; i++) cin >> ar[i];
//	for (int i=0; i<n; i++){
//		min = 100000000001;
//		for (int j=i; j<n; j++)
//		{
//			if (ar[j] < min) {
//			min = ar[j];
//			k = j;
//			}
//		}
//		swap(ar[i], ar[k]);
//	}
//	for (int i=0; i<n; i++) cout << ar[i] << " ";
//	delete [] ar;

	//int n;
//	cin >> n;
//	int * ar = new int[n];
//	for (int i=0; i<n; i++) cin >> ar[i];
//	for (int i=0; i<n; i++){
//		for (int j=0; j<n-i-1; j++)
//		{
//			if (ar[j] > ar[j+1]){
//				swap(ar[j], ar[j+1]);
//			}
//		}
//	}
//	for (int i=0; i<n; i++) cout << ar[i] << " ";
//	delete [] ar;

	/*  Сортировка вставками*/
	// 5 4 3 2 1
	int n, t, k;
	cin >> n;
	int * ar = new int[n];
	for (int i=0; i<n; i++) cin >> ar[i];
	for (int i=0; i<n; i++){
		for (int j=0; j<i+1; j++)
		{
			if (ar[i] < ar[j]) swap(ar[i], ar[j]);
			for (int i=0; i<n; i++) cout << ar[i] << " "; cout << endl;
 		}
	}
	for (int i=0; i<n; i++) cout << ar[i] << " ";
	delete [] ar;
	return 0;



//	int n,f[2]={0, 0};
//	cin >> n;
//	int * ar = new int[n];
//	for (int i=0; i<n; i++){
//	cin >> ar[i];
//	if (ar[i]<0) f[0]++;
//	if (ar[i]>0) f[1]++;
//	}
//	int m, t[2]={0,0};
//	
//	for (int i=n-1; i>=0; i--)
//	{
//		if (ar[i] < 0){
//			if (t[0] == f[0]){
//				break;
//			}
//			m=ar[i];
//			for (int k=i; k>0; k--)
//			{
//				ar[k] = ar[k-1];
//			}
//			ar[0] = m;
//			t[0]++;
//			i++;
//		}
//	}
//	for (int i=0; i<n; i++)
//	{
//		if (ar[i]>0){
//			if (t[1] == f[1]) break;
//			m = ar[i];
//			for (int k=i; k < n-1; k++) ar[k] = ar[k+1];
//			ar[n-1] = m;
//			t[1]++;
//			i--;
//		}
//	}
//	
//	
//	for (int i=0; i<n; i++) cout << ar[i] << " ";
//	delete [] ar;
	/* Сортировка подсчетом */
	// -1000 - 1000
	
//	int N = 2000000;
//	int x, n;
//	int *a = new int[N];
//	for (int i=0; i<N; i++) a[i] = 0;
//	cin >> n;
//	for (int i=0; i<n; i++)
//	{
//		cin >> x;
//		a[x+1000]++;
//	}
//	for (int i=0; i<N; i++)
//	{
//		while (a[i] > 0)
//		{
//			cout << i-1000 <<" ";
//			a[i]--;
//		}
//	}
//	delete [] a;
	
	// 5. Найти минальное кол-во конфет, чтобы победить.
}
