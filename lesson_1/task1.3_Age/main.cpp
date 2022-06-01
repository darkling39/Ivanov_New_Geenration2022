#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, mate, how old are you?" << endl;
    short age = 0;
    cin >> age;
    if (age < 10)
        cout << "Wow, you are so adult!" << endl;
    else
    {
        cout << "Do you study?" << endl
             << "(1 - Yes, 0 - No)" << endl;
        short ask;
        cin >> ask;
        if(ask == 1)
            cout << "You are awesome!" << endl;
        else
            cout << "Why?" << endl;
    }

}
