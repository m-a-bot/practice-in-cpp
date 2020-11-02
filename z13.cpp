#include <iostream>
using namespace std;

//int main()
//{
//	int n, max1, k;
//	cin >> n;
//	int * ar = new int[n];
//	for (int i=0; i<n; i++) cin >> ar[i];
//	for (int i=0; i<2; i++){
//		max1=-1;
//		for (int j=0; j<n-i; j++)
//		{
//			if (ar[j] > max1){
//				k=j;
//				max1 = ar[j];
//			}
//		}
//		swap(ar[k], ar[n-1-i]);
//		cout << max1 << " ";
//	}
//	
//	delete [] ar;
//}


//int main()
//{
//	/* Сортировка пузырьком */
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
//}

int main()
{
	int n,f[2]={0, 0};
	cin >> n;
	int * ar = new int[n];
	for (int i=0; i<n; i++){
	cin >> ar[i];
	if (ar[i]<0) f[0]++;
	if (ar[i]>0) f[1]++;
	}
	int m, t[2]={0,0};
	
	for (int i=n-1; i>=0; i--)
	{
		if (ar[i] < 0){
			if (t[0] == f[0]){
				break;
			}
			m=ar[i];
			for (int k=i; k>0; k--)
			{
				ar[k] = ar[k-1];
			}
			ar[0] = m;
			t[0]++;
			i++;
		}
	}
	for (int i=0; i<n; i++)
	{
		if (ar[i]>0){
			if (t[1] == f[1]) break;
			m = ar[i];
			for (int k=i; k < n-1; k++) ar[k] = ar[k+1];
			ar[n-1] = m;
			t[1]++;
			i--;
		}
	}
	
	
	for (int i=0; i<n; i++) cout << ar[i] << " ";
	delete [] ar;
}
