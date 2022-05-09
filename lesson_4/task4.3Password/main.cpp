#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pass = "No, maey! Yu znoy zgyq oy g ykixkz gtj o gs mrgj, zngz eua yurbk oz. Vrkgyk, hk coykx gtj jut'z zkrr gteutk ghuaz znoy zgyq. Zu iusvrkzk oz eua tkkj zu avrugj zu euax moznah tkc zgyq cozn jkiovnkx gtj tgsk oz roqk *EuaxTgsk*_*EuaxLgbuaxozkIuruax*.";
    string truth = pass;
    for(int i = 0; i < pass.length(); i++)
    {
        if(pass[i] == 32)
            truth[i] = 32;
        if((pass[i] <= 122 && pass[i] >= 97) || (pass[i] <= 90 && pass[i] >= 65))
            truth[i] = pass[i]-6;
        if(pass[i] == 'a' ||
           pass[i] == 'b' ||
           pass[i] == 'c' ||
           pass[i] == 'd' ||
           pass[i] == 'e' ||
           pass[i] == 'f')
            truth[i] = 122 - (5-(pass[i]-97));
        if(pass[i] == 'A' ||
           pass[i] == 'B' ||
           pass[i] == 'C' ||
           pass[i] == 'D' ||
           pass[i] == 'E' ||
           pass[i] == 'F')
            truth[i] = 90 - (5-(pass[i]-65));

    }
    cout << truth;
}
