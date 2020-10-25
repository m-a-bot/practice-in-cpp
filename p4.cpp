#include <iostream>
#include <cmath>
using namespace std;

/*
2. 
a1*x+b1*y - c1 = 0
a2*x+b2*y - c2 = 0
*/
int main() {
    int a1,b1,c1,a2,b2,c2;
    cin >> a1>>b1>>c1>>a2>>b2>>c2;
    double d, dx, dy;
    d = a1*b2-a2*b1;
	dx = c1*b2 - c2*b1;
	dy = c2*a1-c1*a2;
	if (d != 0) {
    	cout << dx/d <<" " <<  dy/d;
	} else {
		if (dx == 0 )
			cout << "many";
		else cout << "no";
	}
}
