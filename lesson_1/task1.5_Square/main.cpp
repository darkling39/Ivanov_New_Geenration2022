#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short a, b, c;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    if((pow(b, 2) - (4 * a * c)) > 0)
    {
        float x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
        float x2 = -b - sqrt(pow(b, 2) - (4 * a * c)) / (2 * a);
        cout << "x1 = " << x1 << endl
             << "x2 = " << x2 << endl;
    }
    if ((pow(b, 2) - (4 * a * c)) == 0)
    {
        float x1 = -b/2*a;
        cout << "x = " << x1 << endl;
    }
    if((pow(b, 2) - (4 * a * c)) < 0)
        cout << "Null";
    return 0;
}
