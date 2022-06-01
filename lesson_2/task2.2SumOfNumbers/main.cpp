#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, sup;
    cin >> num;
    while(num != 0)
    {
        int def = 0;
        def += num%10;
        if(def%2 == 0)
        {
            sum += def;
        }
        num = num/10;
    }
    cout << sum << endl;
    return 0;
}
