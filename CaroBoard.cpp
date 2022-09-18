#include "CaroBoard.h"
#include <vector>
#include <iostream>
using namespace std;
CaroBoard ::CaroBoard()
{
    caroBoard = (char **)malloc(sizeof(char *) * 10);

    for (int i = 0; i < 10; i++)
    {
        caroBoard[i] = (char *)malloc(sizeof(char) * 10);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            this->caroBoard[i][j] = ' ';
        }
    }
}

char **CaroBoard::getCaroBoard()
{
    return caroBoard;
}

void CaroBoard::resetCaroBoard()
{
    for (int i = 0; i < 10; i++)
    {
        delete caroBoard[i];
        caroBoard[i] = nullptr;
    }

    delete caroBoard;
    caroBoard = nullptr;
}

void CaroBoard::setCaroBoard()
{
    caroBoard = (char **)malloc(sizeof(char *) * 10);

    for (int i = 0; i < 10; i++)
    {
        caroBoard[i] = (char *)malloc(sizeof(char) * 10);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            this->caroBoard[i][j] = ' ';
        }
    }
}

// CaroBoard::~CaroBoard()
// {
//
// }

// void CaroBoard::showCaroBoard()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             cout << caroBoard[i][j] << "|";
//         }
//         cout << endl
//              << "----------------------" << endl;
//     }
// }

int CaroBoard::getNumberFill()
{
    return numberFill;
}

void CaroBoard::setNumberFill()
{
    ++this->numberFill;
}
