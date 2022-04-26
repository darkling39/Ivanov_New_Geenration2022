#include <iostream>

using namespace std;

int main()
{
    int sz = 4, supp = 1000, firNum = 0, secNum = 0;
    int first[4], second[4];
    cout << "Fill first array" << endl;
    for(int i = 0; i < sz; i++)
    {
        cin >> first[i];
    }
    cout << "Fill second array" << endl;
    for(int i = 0; i < sz; i++)
    {
        cin >> second[i];
    }
    for(int i = 0; i < sz; i++)
    {
        firNum += (first[i]*supp);
        secNum += (second[i]*supp);
        supp = supp/10;
    }
    if(firNum > secNum)
        cout << firNum << " " << ">" << " " << secNum;
    else
        cout << secNum << " " << ">" << " " << firNum;
}
