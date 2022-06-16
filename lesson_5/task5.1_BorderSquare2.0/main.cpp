#include <iostream>

using namespace std;

int setSize()
{
    int sz;
    cout << "Enter size of square: ";
    cin >> sz;
    return sz;
}

void printSpace()
{
    cout << " ";
}

void printStar()
{
    cout << "*";
}


void makeSquare(int sz)
{
    for(int y = 0; y < sz; y++)
    {
        for(int x = 0; x < sz; x++)
        {
            if(y != 0 && y != sz - 1 && x != 0 && x != sz - 1 )
            {
                printSpace();
            }
            else
                printStar();
        }
        cout << endl;
    }
}



int main()
{
    makeSquare(setSize());
}
