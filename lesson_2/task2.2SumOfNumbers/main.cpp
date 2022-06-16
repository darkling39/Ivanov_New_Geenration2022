#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0, supp;
    cout << "Enter the number: ";
    cin >> num;
    supp = num;
    while(supp != 0)
    {
        int def = 0;
        def += supp%10;
        if(def%2 == 0)
        {
            sum += def;
        }
        supp = supp/10;
    }
    cout << sum << endl;
    return 0;
}
