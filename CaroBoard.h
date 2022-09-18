#ifndef CAROBOARD_H
#define CAROBOARD_H
#include "Player.h"



class CaroBoard
{
private:
    //char caroBoard[50][50];
    // bool checkBlank;
    int numberFill = 0;
    char **caroBoard = NULL;

public:
    CaroBoard();
    //void setCaroBoard(int, int, _player);
    void resetCaroBoard();
    void setCaroBoard();
    void setNumberFill();
    int getNumberFill();
    char **getCaroBoard();
    // bool checkBlank(int, int);
    // int result();
    //~CaroBoard();
};

#endif