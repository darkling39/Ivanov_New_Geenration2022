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
        while(1)
        {
            char ask = 0;
            cout << "И твой ответ: ";
            cin >> ask;
            if((ask == 'Y') || (ask == 'y'))
            {
                cout << "Ты крут!" << endl;
                break;
            }
            if((ask == 'N') || (ask == 'n'))
            {
                cout << "Почему же?" << endl;
                break;
            }
            else
            {
                ask = 0;
                cout << "Ошибка! Попробуй ещё раз..." << endl
                     << "Варианты выбора для кого написаны?" << endl;
            }

        }
    }
}
