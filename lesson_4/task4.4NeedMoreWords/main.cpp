#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt=0;
    char print[256] = "";
    cin.getline(print, 256);
    for(int i = 0; i < 256; i++)
    {
        if( ((print[i] >= 97 && print[i] <= 122) || (print[i] >= 65 && print[i] <= 90)) && print[i-1] < 65 ||
            ((print[i] >= 97 && print[i] <= 122) && (print[i+1] >= 65 && print[i+1] <= 90))
          )
            cnt ++;
        if(print[i] == 0)
            break;

    }
    cout << cnt;
}
