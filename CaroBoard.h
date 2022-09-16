#ifndef CAROBOARD_H
#define CAROBOARD_H
#include "Player.h"



class CaroBoard
{
private:
    char caroBoard[50][50];
    // bool checkBlank;
    int numberBlank;

public:
    CaroBoard();
    void setCaroBoard(int, int, _player);

    void showCaroBoard();
    void setNumberBlank();
    int getNumberBlank();
    bool checkBlank(int, int);
    int result();
};

#endif