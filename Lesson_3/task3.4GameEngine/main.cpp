#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    char player = '@';

    const int worldSizeY = 30;
    const int worldSizeX = 70;

    char action = -1;

    char map[worldSizeY][worldSizeX];
    char pMap[worldSizeY][worldSizeX];

    int playerPosX = worldSizeX/2;
    int playerPosY = worldSizeY/2;

    for(int y = 0; y < worldSizeY; y++)
    {
        for(int x = 0; x < worldSizeX; x++)
        {
            switch(rand()%30)
            {
                case 1: map[y][x] = 't'; break;
                case 2: map[y][x] = 's'; break;
                case 3: map[y][x] = 'e'; break;
                default: map[y][x] = '.';
            }
            pMap[y][x] = '*';
        }
    }

    while(true)
    {
        system("cls");
        for(int y = 0; y < worldSizeY; y++)
        {
            for(int x = 0; x < worldSizeX; x++)
            {
                if(y == playerPosY && x == playerPosX)
                    cout << player;
                else
                    cout << pMap[y][x];
            }
            cout << endl;
        }
        cout << ">";
        cin >> action;
        switch(action)
        {
            case 'w':
                if(map[playerPosY-1][playerPosX] == '.')
                    playerPosY--;
                    //front
                pMap[playerPosY-2][playerPosX] = map[playerPosY-2][playerPosX];
                pMap[playerPosY-2][playerPosX-1] = map[playerPosY-2][playerPosX-1];
                pMap[playerPosY-2][playerPosX+1] = map[playerPosY-2][playerPosX+1];
                pMap[playerPosY-3][playerPosX] = map[playerPosY-3][playerPosX];
                pMap[playerPosY-3][playerPosX-1] = map[playerPosY-3][playerPosX-1];
                pMap[playerPosY-3][playerPosX+1] = map[playerPosY-3][playerPosX+1];
                    //side
                pMap[playerPosY-2][playerPosX+2] = map[playerPosY-2][playerPosX+2];
                pMap[playerPosY-2][playerPosX-2] = map[playerPosY-2][playerPosX-2];
                pMap[playerPosY-3][playerPosX+3] = map[playerPosY-3][playerPosX+3];
                pMap[playerPosY-3][playerPosX-3] = map[playerPosY-3][playerPosX-3];
                pMap[playerPosY-3][playerPosX+2] = map[playerPosY-3][playerPosX+2];
                pMap[playerPosY-3][playerPosX-2] = map[playerPosY-3][playerPosX-2];
                    //up
                pMap[playerPosY-1][playerPosX] = map[playerPosY-1][playerPosX];
                pMap[playerPosY-1][playerPosX-1] = map[playerPosY-1][playerPosX-1];
                pMap[playerPosY-1][playerPosX+1] = map[playerPosY-1][playerPosX+1];
                player = '^';
                break;
            case 's':
                if(map[playerPosY+1][playerPosX] == '.')
                    playerPosY++;
                    //front
                pMap[playerPosY+2][playerPosX] = map[playerPosY+2][playerPosX];
                pMap[playerPosY+2][playerPosX-1] = map[playerPosY+2][playerPosX-1];
                pMap[playerPosY+2][playerPosX+1] = map[playerPosY+2][playerPosX+1];
                pMap[playerPosY+3][playerPosX] = map[playerPosY+3][playerPosX];
                pMap[playerPosY+3][playerPosX-1] = map[playerPosY+3][playerPosX-1];
                pMap[playerPosY+3][playerPosX+1] = map[playerPosY+3][playerPosX+1];
                    //side
                pMap[playerPosY+2][playerPosX+2] = map[playerPosY+2][playerPosX+2];
                pMap[playerPosY+2][playerPosX-2] = map[playerPosY+2][playerPosX-2];
                pMap[playerPosY+3][playerPosX+3] = map[playerPosY+3][playerPosX+3];
                pMap[playerPosY+3][playerPosX-3] = map[playerPosY+3][playerPosX-3];
                pMap[playerPosY+3][playerPosX+2] = map[playerPosY+3][playerPosX+2];
                pMap[playerPosY+3][playerPosX-2] = map[playerPosY+3][playerPosX-2];
                    //down
                pMap[playerPosY+1][playerPosX] = map[playerPosY+1][playerPosX];
                pMap[playerPosY+1][playerPosX-1] = map[playerPosY+1][playerPosX-1];
                pMap[playerPosY+1][playerPosX+1] = map[playerPosY+1][playerPosX+1];
                player = '@';
                break;
            case 'a':
                if(map[playerPosY][playerPosX-1] == '.')
                    playerPosX--;
                    //front
                pMap[playerPosY][playerPosX-2] = map[playerPosY][playerPosX-2];
                pMap[playerPosY-1][playerPosX-2] = map[playerPosY-1][playerPosX-2];
                pMap[playerPosY+1][playerPosX-2] = map[playerPosY+1][playerPosX-2];
                pMap[playerPosY][playerPosX-3] = map[playerPosY][playerPosX-3];
                pMap[playerPosY-1][playerPosX-3] = map[playerPosY-1][playerPosX-3];
                pMap[playerPosY+1][playerPosX-3] = map[playerPosY+1][playerPosX-3];
                    //side
                pMap[playerPosY+2][playerPosX-2] = map[playerPosY+2][playerPosX-2];
                pMap[playerPosY-2][playerPosX-2] = map[playerPosY-2][playerPosX-2];
                pMap[playerPosY+2][playerPosX-3] = map[playerPosY+2][playerPosX-3];
                pMap[playerPosY-2][playerPosX-3] = map[playerPosY-2][playerPosX-3];
                pMap[playerPosY+3][playerPosX-3] = map[playerPosY+3][playerPosX-3];
                pMap[playerPosY-3][playerPosX-3] = map[playerPosY-3][playerPosX-3];
                        //left
                pMap[playerPosY][playerPosX-1] = map[playerPosY][playerPosX-1];
                player = '<';
                break;

            case 'd':
                if(map[playerPosY][playerPosX+1] == '.')
                    playerPosX++;
                    //front
                pMap[playerPosY][playerPosX+2] = map[playerPosY][playerPosX+2];
                pMap[playerPosY-1][playerPosX+2] = map[playerPosY-1][playerPosX+2];
                pMap[playerPosY+1][playerPosX+2] = map[playerPosY+1][playerPosX+2];
                pMap[playerPosY][playerPosX+3] = map[playerPosY][playerPosX+3];
                pMap[playerPosY-1][playerPosX+3] = map[playerPosY-1][playerPosX+3];
                pMap[playerPosY+1][playerPosX+3] = map[playerPosY+1][playerPosX+3];
                    //side
                pMap[playerPosY+2][playerPosX+2] = map[playerPosY+2][playerPosX+2];
                pMap[playerPosY-2][playerPosX+2] = map[playerPosY-2][playerPosX+2];
                pMap[playerPosY+2][playerPosX+3] = map[playerPosY+2][playerPosX+3];
                pMap[playerPosY-2][playerPosX+3] = map[playerPosY-2][playerPosX+3];
                pMap[playerPosY+3][playerPosX+3] = map[playerPosY+3][playerPosX+3];
                pMap[playerPosY-3][playerPosX+3] = map[playerPosY-3][playerPosX+3];
                    //right
                pMap[playerPosY][playerPosX+1] = map[playerPosY][playerPosX+1];
                player = '>';
                break;
        }
        /*//up
        pMap[playerPosY-1][playerPosX] = map[playerPosY-1][playerPosX];
        pMap[playerPosY-1][playerPosX-1] = map[playerPosY-1][playerPosX-1];
        pMap[playerPosY-1][playerPosX+1] = map[playerPosY-1][playerPosX+1];
        //down
        pMap[playerPosY+1][playerPosX] = map[playerPosY+1][playerPosX];
        pMap[playerPosY+1][playerPosX-1] = map[playerPosY+1][playerPosX-1];
        pMap[playerPosY+1][playerPosX+1] = map[playerPosY+1][playerPosX+1];
        //left
        pMap[playerPosY][playerPosX-1] = map[playerPosY][playerPosX-1];
        //right
        pMap[playerPosY][playerPosX+1] = map[playerPosY][playerPosX+1];*/
    }
    return 0;
}
