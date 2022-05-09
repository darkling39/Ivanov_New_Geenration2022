#include <iostream>

using namespace std;

int main()
{
    int sz = 20, supp = 0, mx = 0;
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
        supp = i;
    }
    for(int i = 0; i < supp; i++)
    {
        if(pointer[i] > mx)
            mx = pointer[i];
    }


    for(int i = 0; i < mx; i++)
    {
        for(int t = 0; t < supp; t++)
        {
            if(i < pointer[t])
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
