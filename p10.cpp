#include <iostream>
using namespace std;

int main()
{
	// найти максимальную длину пилообразной последовательности 
	int n, x, y, p, maxlen=1, len;
	cin >> n;
	if (n==1){
		cin >> x;
		cout << 1;
		return 0;
	}else {
	cin >> x >> y;
	p = y-x;
	if (p==0) len=1;
	else len=2;
	for (int i=2; i<n; i++)
	{
		x = y;
		cin >> y;
		if ( (y-x > 0 && p < 0)|| (y-x < 0 && p > 0) ){
			len++;
		} else {
			
			if (len > maxlen) maxlen=len;
			if (y-x==0) len = 1;
			else len=2;
		}
		p = y-x;
	}
	if (len > maxlen) maxlen=len;
	cout << maxlen;
	}
}
