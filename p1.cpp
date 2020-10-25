#include <iostream>
#include <cmath>
using namespace std;

/*

определение кратчайшего расстояния от двух точек в квадрате

*/

int main()
{
    int a, xg, yg, xb, yb;
    cin >> a >> xg >> yg >> xb >> yb;
    int d;
    if (xg == xb && (xg == 0 || xg == a)) d = abs(yg-yb);
    else if (yg == yb && (yg == 0 || yg == a)) d = abs(xg-xb);
    else if ((xg == 0 && xb == a)||(xg == a && xb == 0)) d = min(2*a-yg-yb, yg+yb) + a;
    else if (yg==0 && yb==a) d = min(2*a-xg-xb, xg+xb)+a;
    else if (yg == 0 && xb == a) d = a-xg+yb;
    else if (yb == 0 && xg == a) d = a-xb+yg;
    else if (xb == a && yg == a) d = 2*a-yb-xg;
    else if (xg == a && yb == a) d = 2*a-yg-xb;
    else if (yb == a && xg == 0) d = xb+a-yg;
    else if (yg == a && xb == 0) d = xg+a-yb;
    else if (xb == 0 && yg == 0) d = yb+xg;
    else if (xg == 0 && yb == 0) d = yg+xb;
    cout << d;
    return 0;
}
