#include <iostream>
#include "CaroBoard.h"
#include "Player.h"
#include "Management.h"
#include "CaroBoardView.h"
using namespace std;

int main()
{
    // int x, y;
    string name;
    Player *listPlayer = new Player[2];
    Point point;
    CaroBoardView caroBoardView;
    cout << "name player1: ";
    cin >> name;
    listPlayer[0].setName(name);
    cout << "name player2: ";
    cin >> name;
    listPlayer[1].setName(name);

    CaroBoard caroBoard;

    Management management(caroBoard, listPlayer, caroBoardView);

    management.showCaroBoard();
    while (1)
    {
        if (caroBoard.getNumberFill() == 100)
        {
            cout << "x drew o";
            management.setDrawPlayer();
            break;
        }
    inputAgain:
        cout << endl
             << "player1: ";

        cin >> point.x >> point.y;

        system("CLS");
        if (management.checkBlank(point) == true)
        {
            management.updateCaroBoard(point, _player1);
            caroBoard.setNumberFill();
            management.showCaroBoard();
            pair<Point, _player> moving(point, _player1);
            management.addMoving(moving);
            if (management.result() == 1)
            {
                management.setWinPlayer(listPlayer[0].getName());
                management.setLosePlayer(listPlayer[1].getName());
                cout << "x win";
                break;
            }
        }
        else
        {
            goto inputAgain;
        }
    inputAgain2:
        cout << endl
             << "player2: ";
        cin >> point.x >> point.y;

        system("CLS");
        if (management.checkBlank(point) == true)
        {
            management.updateCaroBoard(point, _player2);
            caroBoard.setNumberFill();
            pair<Point, _player> moving(point, _player2);
            management.addMoving(moving);
            management.showCaroBoard();
            if (management.result() == 0)
            {
                management.setWinPlayer(listPlayer[1].getName());
                management.setLosePlayer(listPlayer[0].getName());
                cout << "o win";
                break;
            }
        }
        else
        {
            goto inputAgain2;
        }
    }

    management.save(listPlayer);
    delete listPlayer;
    listPlayer = nullptr;
    system("ClS");
    management.replayMode();
}