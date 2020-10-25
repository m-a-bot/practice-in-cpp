#include <iostream>
#include <cmath>
using namespace std;


/*

Определяет тип геометрической фигуры.
Выпуклый или нет.
Вычисляет площадь 4, 5 и 7 угольника.

*/

int main()
{
    int x1,y1, x2,y2, x3,y3, x4,y4,x5,y5, x6,y6, x7,y7;
    double S;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    bool v=false;
    double a,b,c,d,d1,d2;
    a = pow(pow(x2-x1, 2)+pow(y2-y1, 2), 0.5);
    b = pow(pow(x3-x2, 2)+pow(y3-y2, 2), 0.5);
    c = pow(pow(x4-x3, 2)+pow(y4-y3, 2), 0.5);
    d = pow(pow(x4-x1, 2)+pow(y4-y1, 2), 0.5);
    d1 = pow(pow(x1-x3, 2)+pow(y1-y3, 2), 0.5);
    d2 = pow(pow(x4-x2, 2)+pow(y4-y2, 2), 0.5);
    double angle = acos((a*a+d*d-d2*d2)/(2*a*d))*180/3.14, angle1 = acos((b*b+a*a-d1*d1)/(2*a*b))*180/3.14,
    angle2 = acos((b*b+c*c-d2*d2)/(2*b*c))*180/3.14, angle3 = acos((c*c+d*d-d1*d1)/(2*c*d))*180/3.14;
    int angl = angle + angle1, angl2 = angle2 + angle3;



    if (a==c && b==d) {
        if (d1 == d2) {
            if (a==b) {
                cout << "sq" << endl;
                v = true;
            }
            else{
                cout << "pr" << endl;
                v = true;
            }
        }
        else if (d1!=d2 && a==b) {
            cout << "romb" << endl;
            v = true;
        }
        else {
            cout << "para" << endl;
            v = true;
        }
    }
    else if (angl == 180 || angl2 == 180){
        cout << "tr" << endl;
        v = true;
    }


    if (v) {
        cout << "convex" << endl;
    } else cout <<"other\n"<< "nonconvex" << endl;
	
    S = abs(0.5*((x1*y2+x2*y3+x3*y4+x4*y1)-(y1*x2+y2*x3+y3*x4+y4*x1)));
    cout << S << endl;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
    S = abs(0.5*((x1*y2+x2*y3+x3*y4+x4*y5+x5*y1)-(y1*x2+y2*x3+y3*x4+y4*x5+y5*x1)));
    cout << S << endl;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> x7 >> y7;
    S = abs(0.5*((x1*y2+x2*y3+x3*y4+x4*y5+x5*y6+x6*y7+x7*y1)-(y1*x2+y2*x3+y3*x4+y4*x5+y5*x6+y6*x7+y7*x1)));
    cout << S << endl;
    return 0;
}
