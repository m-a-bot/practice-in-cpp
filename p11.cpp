/*


1. Перевернуть натуральное число цифрами. в обратном порядке и напечатать

*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	/*
	int n, s=0, d;
	cin >> n;
	for  (;n>0;){
		d = n%10;
		n/=10;
		s = s*10+d;
	}
	cout << s;
	
	NN x sin(x) cos(x)
	
	манипуляторы
	setw ()
	setprecision() установить точность дробной части
	*/
	
	int n=1, m=99;
	double A, B, h;
	cin >> A >> B >> h;
	cout << "---------------------------------------------------" << endl;
	cout << "| NN | -xx.xx | xx.xxxxx | xx.xxxxx |"<<endl;
	for (double x=A, i=1; x<=B; x+=h, i++)
	{
		cout << "| "<< setw(2)<< i << " | ";
		cout <<"| "<< setprecision(2) << setw(4) << x << " | ";
		cout <<"| "<< setprecision(5) << setw(8) << sin(x) << " | ";
		cout <<"| "<< setprecision(5) << setw(8) << cos(x)<<" | "<< endl;
	}
	cout << "---------------------------------------------------" << endl;
	
	/*
	2. Проверить, состоит ли число из одинаковых цифр?
	 */
	setlocale(LC_ALL, "Russian");
	/*
	int n, d;
	cin >> n;
	d = n%10;
	for (;n>0;){
		if (n%10!=d) {
			cout << "НЕТ";
			return 0;
		}
		n/=10;
	}
	cout << "ДА";*/
	/*double x,y, r;
	№4
	Сколько точек в круге?
	cin >> x >> y >> r;
	double x1, y1, l;
	int n, k=0;
	
	cin >> n;
	for (int i=0; i<n;i++)
	{
		cin >> x1 >> y1;
		l = pow(pow(x1-x, 2)+pow(y1-y, 2) ,0.5);
		if (l <= r)
			k++;
	}
	cout << k;
	*/
	#5
	// Сколько точек в в четырехугольнике
}
