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
            cout << " ";

        }
        for(int cnt = 0; cnt < i*2+1; cnt++)
        {
            cout << "*";
        }
        supp--;
        cout << endl;
    }
    for(int i = 0; i < sz; i++)
    {
        cout << " ";
    }
    cout << "*";

    return 0;
}
