#include "CaroBoard.h"
#include <vector>
#include <iostream>
using namespace std;
CaroBoard ::CaroBoard()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            this->caroBoard[i][j] = ' ';
        }
    }
}
void CaroBoard::setCaroBoard(int x, int y, _player player)
{
    if (player == _player1)
    {
        this->caroBoard[x][y] = 'x';
    }

    else
    {
        this->caroBoard[x][y] = 'o';
    }
}

void CaroBoard::showCaroBoard()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << caroBoard[i][j] << "|";
        }
        cout << endl
             << "----------------------" << endl;
    }
}

int CaroBoard::getNumberBlank()
{
    return numberBlank;
}

bool CaroBoard::checkBlank(int x, int y)
{
    if (caroBoard[x][y] != ' ')
    {
        return false;
    }
    return true;
}

void CaroBoard::setNumberBlank()
{
    ++this->numberBlank;
}

int CaroBoard::result()
{
    int countX = 0;
    int countO = 0;
    // check row
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column < 6; column++)
        {

            for (int i = 0; i < 5; i++)
            {

                if (caroBoard[row][column + i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard[row][column + i] == 'o')
                {
                    ++countO;
                }
            }
            if (countX != 5)
            {
                countX = 0;
            }
            if (countO != 5)
            {
                countO = 0;
            }
            if (countO == 5 || countX == 5)
            {
                break;
            }
        }

        if (countX == 5)
        {
            return 1;
            break;
        }

        else if (countO == 5)
        {
            return 0;
            break;
        }
    }

    // check column
    for (int column = 0; column < 10; column++)
    {
        for (int row = 0; row < 6; row++)
        {
            for (int i = 0; i < 5; i++)
            {

                if (caroBoard[row + i][column] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard[row + i][column] == 'o')
                {
                    ++countO;
                }
            }
            if (countX != 5)
            {
                countX = 0;
            }
            if (countO != 5)
            {
                countO = 0;
            }
            if (countO == 5 || countX == 5)
            {
                break;
            }
        }

        if (countX == 5)
        {
            return 1;
            break;
        }

        else if (countO == 5)
        {
            return 0;
            break;
        }
    }

    // check cross from right to left
    for (int row = 0; row < 6; row++)
    {
        for (int column = 0; column < 6; column++)
        {
            for (int i = 0; i < 5; i++)
            {
                if (caroBoard[row + i][column + i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard[row + i][column + i] == 'o')
                {
                    ++countO;
                }
            }
            if (countX != 5)
            {
                countX = 0;
            }
            if (countO != 5)
            {
                countO = 0;
            }
            if (countO == 5 || countX == 5)
            {
                break;
            }
        }

        if (countX == 5)
        {
            return 1;
            break;
        }

        else if (countO == 5)
        {
            return 0;
            break;
        }
    }

    // check cross from left to right
    for (int row = 0; row < 6; row++)
    {
        for (int column = 9; column > 3; column--)
        {
            for (int i = 0; i < 5; i++)
            {
                if (caroBoard[row + i][column - i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard[row + i][column - i] == 'o')
                {
                    ++countO;
                }
            }
            if (countX != 5)
            {
                countX = 0;
            }
            if (countO != 5)
            {
                countO = 0;
            }
            if (countO == 5 || countX == 5)
            {
                break;
            }
        }

        if (countX == 5)
        {
            return 1;
            break;
        }

        else if (countO == 5)
        {
            return 0;
            break;
        }
    }
    return 2;
}
