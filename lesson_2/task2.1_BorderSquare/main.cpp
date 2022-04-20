#include <iostream>

using namespace std;

int main()
{
    int sz;
    cin >> sz;
    for(int y = 0; y < sz; y++)
    {
        for(int x = 0; x < sz; x++)
        {
            if(y != 0 && y != sz - 1 && x != 0 && x != sz - 1 )
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
