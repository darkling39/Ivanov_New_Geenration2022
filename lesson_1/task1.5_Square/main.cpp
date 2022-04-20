#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short a, b, c;
    float x1, x2, D;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    D = pow(b, 2) - (4 * a * c);
    if(D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = -b - sqrt(D) / (2 * a);
        cout << "x1 = " << x1 << endl
             << "x2 = " << x2 << endl;
    }
    if (D == 0)
    {
        x1 = -b/2*a;
        cout << "x = " << x1 << endl;
    }
    if(D < 0)
        cout << "Null";
    return 0;
}
