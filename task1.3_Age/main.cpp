#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251 & cls");
    cout << "Привет, дружище, сколько тебе лет?" << endl;
    short age = 0;
    cin >> age;
    if (age < 10)
        cout << "Вау, ты уже такой большой!" << endl;
    else
    {
        cout << "Ты учишься?" << endl
             << "(y/Y - Да, n/N - Нет)" << endl;
            char ask = 0;
            cout << "И твой ответ: ";
            cin >> ask;
            if((ask == 'Y') || (ask == 'y'))
            {
                cout << "Ты крут!" << endl;
            }
            if((ask == 'N') || (ask == 'n'))
            {
                cout << "Почему же?" << endl;
            }
    }
    return 0;
}
