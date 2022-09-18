
#include "Management.h"
Management::Management() {
    listPlayer = new Player[2];
}

Management::Management(CaroBoard caroBoard, Player *listPlayer, CaroBoardView caroBoardView)
{
    this->caroBoard = caroBoard;
    this->listPlayer = listPlayer;
    this->caroBoardView = caroBoardView;
}

void Management::showCaroBoard()
{
    caroBoardView.showCaroBoard(caroBoard.getCaroBoard());
}

void Management::updateCaroBoard(Point point, _player player)
{

    if (player == _player1)
    {
        caroBoard.getCaroBoard()[point.x][point.y] = 'x';
    }

    else
    {
        caroBoard.getCaroBoard()[point.x][point.y] = 'o';
    }
}

bool Management::checkBlank(Point point)
{

    if (caroBoard.getCaroBoard()[point.x][point.y] != ' ')
    {
        return false;
    }
    return true;
}

void Management::save(Player *listPlayer)
{
    caroBoardView.save(listPlayer);
}

int Management::result()
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

                if (caroBoard.getCaroBoard()[row][column + i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard.getCaroBoard()[row][column + i] == 'o')
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

                if (caroBoard.getCaroBoard()[row + i][column] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard.getCaroBoard()[row + i][column] == 'o')
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
                if (caroBoard.getCaroBoard()[row + i][column + i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard.getCaroBoard()[row + i][column + i] == 'o')
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
                if (caroBoard.getCaroBoard()[row + i][column - i] == 'x')
                {
                    ++countX;
                }
                else if (caroBoard.getCaroBoard()[row + i][column - i] == 'o')
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

Player* Management::getPlayer()
{
    return listPlayer;
}
CaroBoard Management::getCaroBoard()
{
    return caroBoard;
}

void Management::setWinPlayer(string name)
{
    if (listPlayer[0].getName().compare(name) == 0)
    {
        listPlayer[0].setWin();
    }
    else
    {
        listPlayer[1].setWin();
    }
    
   
}

void Management::setDrawPlayer()
{
    listPlayer[0].setDraw();
    listPlayer[1].setDraw();
}

void Management::setLosePlayer(string name)
{
    if (listPlayer[0].getName().compare(name) == 0)
    {
        listPlayer[0].setLose();
    }
    else
    {
        listPlayer[1].setLose();
    }
    
}

Management::~Management()
{
    delete listPlayer;
    listPlayer = nullptr;
}