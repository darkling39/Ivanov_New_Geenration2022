#include <iostream>
#include <string>

using namespace std;

int main()
{
    char yessir[256];
    cin.getline(yessir, 256);
    for(int i = 0; i < 256; i++)
    {
        if(yessir[i] == 'a' ||
           yessir[i] == 'o' ||
           yessir[i] == 'i' ||
           yessir[i] == 'u' ||
           yessir[i] == 'e' ||
           yessir[i] == 'y')
        {
            if((i)%2 == 0)
            {
                cout << i << ": " << yessir[i] << endl;
            }
        }
        if(yessir[i] == 0)
            break;
    }
}
