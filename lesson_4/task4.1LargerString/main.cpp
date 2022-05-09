#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fir;
    string sec;
    cout << "Enter first string:" << endl;
    getline(cin, fir);
    cout << "Enter second string:" << endl;
    getline(cin, sec);
    if(fir.length() < sec.length())
        cout << "First" << " < " << "Second";
    if(fir.length() > sec.length())
        cout << "First" << " > " << "Second";
    else
        cout << "First" << " = " << "Second";
    return 0;
}
