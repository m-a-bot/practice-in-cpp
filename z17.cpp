#include <iostream>
using namespace std;

// 1. ����������� 2. �������� 3. ��������� ��/���

int main()
{
	int n, m;
	cin >> n >> m;
	int * d = new int[n];
	int * b = new int[m];
//	int * a = new int[m+n];
	for (int i=0; i<n; i++) cin >> d[i];
	for (int i=0; i<m; i++) cin >> b[i];
//	for (int i=0; i<n+m; i++) a[i] = -1;
	
	// �����������
//	int i=0, j=0;
//	while (i<n && j<m)
//	{
//		if (d[i] == b[j]) {
//			a[i+j] = d[i];
//			i++;
//			j++;
//		}
//		else{
//			if (d[i] < b[j]) i++;
//			else j++;
//		}
//	}
	// �������� ������� ������� � ������� 
	// int i=0, j=0;
//	while (i<n && j<m)
//	{
//		if (d[i] != b[j])
//		{
//			a[i+j] = d[i];
//			i++;
//		}
//		i++;
//		j++;
//	}
//	while (i<n)
//	{
//		a[i+j] = d[i];
//		i++;
//	}
	
	int i=0, j=0;
	// ��������� ��/��� (������ ������ �� ������)
	setlocale(LC_ALL, "Russian");
	int k=0;
	while (i < n && j<m)
	{
		if (d[i] < b[j]) {
			i++;
		}
		else {
			if (b[j] < d[i]) {
				j++;
			}
				else {
					i++; j++;
					k++;
				}
			}
	}
	
	
	if (k == n) {
		cout << "��" << endl;
	} else cout << "���" << endl;
	
	delete [] b, d;
}
