#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt=0;
    string print;
    getline(cin, print);
    for(int i = 0; i < print.length(); i++)
    {
        if( ((print[i] >= 97 && print[i] <= 122) || (print[i] >= 65 && print[i] <= 90)) && print[i-1] < 65 ||
            ((print[i] >= 97 && print[i] <= 122) && (print[i+1] >= 65 && print[i+1] <= 90))
          )
            cnt ++;

    }
    cout << cnt;
}
