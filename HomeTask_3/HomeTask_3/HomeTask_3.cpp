#include <iostream>
using namespace std;

int main()
{
    //1
    /*
    double y, x, x1, x2, x3, x4, x5;
    cout << "x = ";
    cin >> x;
    x1 = x * x; //x**2
    x2 = x1 * x1; //x**4
    x3 = x2 * x2; //x**8
    x4 = x3 * x3; //x**16
    x5 = x4 * x4; //x**32

    y = x5 * x4 * x3 * x * x * x; //x**59

    cout << "y = ";
    cout << y;
    */

    //2
    /*
    double y, v, v1, v2, v3, v4, v5, v6, w, w1, w2, w3, w4, w5, w6;
    cout << "v = ";
    cin >> v;
    cout << "w = ";
    cin >> w;

    v1 = v * v; //v**2
    v2 = v1 * v1; //v**4
    v3 = v2 * v2; //v**8
    v4 = v3 * v3; //v**16
    v5 = v4 * v4; //v**32
    v6 = v5 * v5; //v**64

    w1 = w * w; //w**2
    w2 = w1 * w1; //w**4
    w3 = w2 * w2; //w**8
    w4 = w3 * w3; //w**16
    w5 = w4 * w4; //w**32
    w6 = w5 * w5; //w**64

    y = v6 * v2 * v1 * v * w6 * w5 * w2 * w1 * w; //v**71 * w**103

    cout << "y = ";
    cout << y;
    */

    //3
    /*
    double x, y, a1, a2, b1, b2, c1, c2, temp_x1, temp_x2, temp_y1, temp_y2;

    cout << "a1 = ";
    cin >> a1;
    cout << "b1 = ";
    cin >> b1;
    cout << "c1 = ";
    cin >> c1;

    cout << "a2 = ";
    cin >> a2;
    cout << "b2 = ";
    cin >> b2;
    cout << "c2 = ";
    cin >> c2;

    temp_x1 = b1 * c2 - b2 * c1;
    temp_x2 = a1 * b2 - a2 * b1;

    temp_y1 = a2 * c1 - a1 * c2;
    temp_y2 = a1 * b2 - a2 * b1;

    x = temp_x1 / temp_x2;
    y = temp_y1 / temp_y2;

    cout << "x = ";
    cout << x;
    cout << ", ";
    cout << "y = ";
    cout << y;
    */

    //4
    /*
    double y, a, b, c, temp1, temp2, x1, x2, min1;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    x1 = (a + b + c) / 3;
    x2 = a * b * c;

    min1 = min(x1, x2);

    temp1 = min1;

    temp2 = 1 + min1 * min1;

    y = temp1 / temp2;

    cout << "y = ";
    cout << y;
    */
}


