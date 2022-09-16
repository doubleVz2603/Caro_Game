#include <iostream>
#include "CaroBoard.h"
#include "Player.h"
using namespace std;

int main()
{
    int x, y, count = 0;
    Player player1;
    Player player2;
    CaroBoard caroBoard;
    caroBoard.showCaroBoard();
    while (1)
    {
        if (count == 10)
        {
            break;
        }
    inputAgain:
        cout << endl
             << "player1: ";

        cin >> x >> y;
        system("CLS");
        if (caroBoard.checkBlank(x, y) == true)
        {
            caroBoard.setCaroBoard(x, y, _player1);
            caroBoard.setNumberBlank();
            caroBoard.showCaroBoard();
            if(caroBoard.result() == 1)
            {
                cout<<"x win";
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
        cin >> x >> y;
        system("CLS");
        if (caroBoard.checkBlank(x, y) == true)
        {
            caroBoard.setCaroBoard(x, y, _player2);
            caroBoard.setNumberBlank();
            caroBoard.showCaroBoard();
            if(caroBoard.result() == 0)
            {
                cout<<"o win";
                break;
            }
        
        }
        else
        {
            goto inputAgain2;
        }


        

        ++count;
    }
}