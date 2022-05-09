#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    int sz = 4, supp = 1000, firNum = 0, secNum = 0;
    int first[4], second[4];
    srand(time(NULL));
    for(int i = 0; i < sz; i++)
    {
        first[i] = rand()%10;
        second[i] = rand()%10;
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
