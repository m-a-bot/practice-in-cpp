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
	Определить число простое или составное
	*/
	if (isPrime(n)) cout << "Prime number"<<endl;
	else cout << "Composite number"<<endl;
	// Вывести все делители числа
	cin >> n;
	for (int i=1; i<=n; i++) if (n%i==0) cout << i << " ";
	cout << endl;
	/*
	Определить число совершенное или нет
	*/
	cin >> n;
	if (isPerfect(n)) cout << "Perfect number"<<endl;
	else cout << "Imperfect number"<<endl;
	
	// Напечатать все простые числа от А до В
	int A,B;
	cin >> A>>B;
	for (int i=A; i<=B; i++)
	{
		if (isPrime(i)) cout << i << " ";
	}
	cout << endl;
	cin >> A>>B;
	// Напечатать все совершенные числа от А до В
	for (int i=A; i<=B; i++)
	{
		if (isPerfect(i)) cout << i << " ";
	}
}
