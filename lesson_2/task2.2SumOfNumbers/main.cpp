#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, sup;
    cin >> num;
    sup = num;
    while(sup != 0)
    {
        sum += sup%10;
        sup = sup/10;
    }
    cout << sum << endl;
    return 0;
}
