#include <iostream>

using namespace std;

int main()
{
    short sz;
    cout << "Enter size of array: ";
    cin >> sz;
    int arr[sz];
    cout << "Now, fiil the array? (Size depended on you)) )" << endl;
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    while(1)
    {
        cout << "What number do you want to check?" << endl;
        bool flag = false;
        int number;
        cin >> number;
        if(number == 999)
            break;
        else
        {
            for(int t = 0; t < sz; t++)
            {
                if (number == arr[t])
                {
                    flag = true;
                }
            }
            if (flag == true)
                cout << "Yeah, I know this number" << endl;
            else
                cout << "No, I don`t know this number" << endl;
        }
    }
}
