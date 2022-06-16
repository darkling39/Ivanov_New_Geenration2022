#include <iostream>
#include <string>

using namespace std;

int main()
{
    char fir[256] = "";
    char sec[256] = "";
    short cnt1, cnt2;
    cout << "Enter first string:" << endl;
    cin.getline(fir, 256);
    cout << "Enter second string:" << endl;
    cin.getline(sec, 256);
    for(int i = 0; i < 256; i++)
    {
        if(fir[i] == 0)
        {
            cout << "First" << " < " << "Second" << endl;
            break;
        }
        if(sec[i] == 0)
        {
            cout << "First" << " > " << "Second" << endl;
            break;
        }
        if(fir[i+1] == 0 && sec[i+1] == 0)
        {
            cout << "First" << " = " << "Second" << endl;
            break;
        }

    }
    return 0;
}
