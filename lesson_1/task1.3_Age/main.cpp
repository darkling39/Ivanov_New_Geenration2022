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
        cout << "Are you studying?" << endl
             << "(y/Y - Yes, n/N - No)" << endl;
        while(1)
        {
            char ask = 0;
            cout << "Your answer: ";
            cin >> ask;
            if((ask == 'Y') || (ask == 'y'))
            {
                cout << "You are cool!" << endl;
                break;
            }
            if((ask == 'N') || (ask == 'n'))
            {
                cout << "Why?" << endl;
                break;
            }
            else
            {
                ask = 0;
                cout << "Error! Try one more time..." << endl;
            }

        }
    }
}
