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
        if(fir[i] != 0)
            cnt1++;
        else
            break;

    }
    for(int i = 0; i < 256; i++)
    {
        if(sec[i] != 0)
            cnt2++;
        else
            break;

    }
    if(cnt1 < cnt2)
        cout << "First" << " < " << "Second" << endl;
    else if(cnt1 > cnt2)
        cout << "First" << " > " << "Second" << endl;
    else
        cout << "First" << " = " << "Second" << endl;
    return 0;
}
