#include <iostream>

using namespace std;

int main()
{
    short mother, videocard, CPU, discount;
    cout << "Motherboard price: ";
    cin >> mother;
    cout << "Videocard price: ";
    cin >> videocard;
    cout << "CPU price: ";
    cin >> CPU;
    cout << "Dicount: ";
    cin >> discount;
    cout << "Your PC will cost - " <<  (mother+videocard+CPU) - (((mother+videocard+CPU) *discount)/100) << "$" << endl;
    return 0;
}
