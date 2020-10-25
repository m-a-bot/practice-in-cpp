#include <iostream>
using namespace std;

bool isPrime(int n)
{
	int d=0;
	for (int i=2; i<n; i++)
	{
		if (n%i==0){
			d++;
			break;
		}
	}
	if (d>0) return false;
	return true;
}

bool isPerfect(int n)
{
	int s=0;
	for (int i=1; i<n;i++) {
		if (n%i==0) {
			s+=i;
		}
	}
	if (n==s) return true;
	return false;
}

int main()
{
	int n;
	cin >> n;
	/*
	���������� ����� ������� ��� ���������
	*/
	if (isPrime(n)) cout << "Prime number"<<endl;
	else cout << "Composite number"<<endl;
	// ������� ��� �������� �����
	cin >> n;
	for (int i=1; i<=n; i++) if (n%i==0) cout << i << " ";
	cout << endl;
	/*
	���������� ����� ����������� ��� ���
	*/
	cin >> n;
	if (isPerfect(n)) cout << "Perfect number"<<endl;
	else cout << "Imperfect number"<<endl;
	
	// ���������� ��� ������� ����� �� � �� �
	int A,B;
	cin >> A>>B;
	for (int i=A; i<=B; i++)
	{
		if (isPrime(i)) cout << i << " ";
	}
	cout << endl;
	cin >> A>>B;
	// ���������� ��� ����������� ����� �� � �� �
	for (int i=A; i<=B; i++)
	{
		if (isPerfect(i)) cout << i << " ";
	}
}
