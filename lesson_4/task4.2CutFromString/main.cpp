#include <iostream>
#include <string>

using namespace std;

int main()
{
    string yessir;
    getline(cin, yessir);
    for(int i = 0; i < yessir.length(); i++)
    {
        if(yessir[i] == 'a' ||
           yessir[i] == 'o' ||
           yessir[i] == 'i' ||
           yessir[i] == 'u' ||
           yessir[i] == 'e' ||
           yessir[i] == 'y')
        {
            if(i%2 == 0)
            {
                cout << i << ": " << yessir[i] << endl;
            }
        }
    }
}
