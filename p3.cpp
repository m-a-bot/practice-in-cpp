#include <iostream>
#include <cmath>
using namespace std;

/*
1. a*x*x+b*x+c = 0
*/

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b != 0) {
            double r;
            r = (-c)/b;
            cout << r;
        }
        else if (c == 0) {
            cout << "all" << endl;
        } else cout << "none" << endl;
    }
    else {
        double d = b*b-4*a*c;
        if (d < 0) {
            cout << "none" << endl;
        }
        else if (d == 0) cout << (-b)/2*a << endl;
        else if (d>0){
            cout << (-b+pow(d, 0.5))/2*a << " " << (-b-pow(d, 0.5))/2*a;
        }
    }
    return 0;
}
