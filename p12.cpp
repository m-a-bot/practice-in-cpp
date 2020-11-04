#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int x;
	for (int i=0; i< n; i++)
	{
		cin >> x;
		a[i] = x;
	}
	/*
	
	rand()%100;
	
	for (int i=0; i<n/2; i++)
	{
		x = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = x; 
	}*/
	/*
	int k;
	k = a[0];
	for (int i=1; i < n; i++)
	{
		a[i-1] = a[i];
	}
	a[n-1] = k;*/
	/*
	k = a[n-1];
	for (int i=n-1; i >=0; i--)
	{
		a[i+1] = a[i];
	}
	a[0] = k;*/
	
	int  k;
	cin >> k;
	for (int i=0; i<k; i++)
	{
		x = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = x; 
	}
	for (int i=k; i<n-k; i++)
	{
		x = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = x; 
	}
	for (int i=0; i<n/2; i++)
	{
		x = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = x; 
	}
//	for (int i=0; i<n/2; i++){
////		swap(a[i], a[n-1-i-k]);
//		swap(a[i], a[i+n/2]);
//	}
	
	for (int i=0; i< n; i++)
	{
		cout << a[i] << " ";
	}
}
