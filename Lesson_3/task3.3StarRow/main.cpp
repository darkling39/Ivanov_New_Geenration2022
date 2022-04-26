#include <iostream>

using namespace std;

int main()
{
    int sz = 20, supp = 0;
    int pointer[sz];
    cout << "Fill the array" << endl
         << "(0 - end)"      << endl;
    for(int i = 0; i < sz; i++)
    {
        cin >> pointer[i];
        if(pointer[i] == 0)
        {
            supp = i;
            break;
        }
    }
    for(int i = 0; i < supp; i++)
    {
        for(int tmp = 0; tmp < pointer[i]; tmp++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
