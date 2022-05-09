#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, sup;
    cin >> num;
    sup = num;
    while(sup != 0)
    {
        int def = 0;
        def += sup%10;
        if(def%2 == 0)
        {
            sum += def;
        }
        sup = sup/10;
    }
    cout << sum << endl;
    return 0;
}
