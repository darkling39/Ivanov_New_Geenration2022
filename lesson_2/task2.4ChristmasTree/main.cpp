#include <iostream>

using namespace std;

int main()
{
    short sz, supp;
    cin >> sz;
    supp = sz;
    for(int i = 0; i < sz; i++)
    {
        for(int cnt = 0; cnt < supp; cnt++)
        {
            cout << "*";
        }
        supp--;
        cout << endl;
    }

    return 0;
}
