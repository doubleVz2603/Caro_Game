#ifndef CAROBOARDVIEW_H
#define CAROBOARDVIEW_H
#include <iostream>
#include <fstream>
#include "Player.h"
using namespace std;

class CaroBoardView
{

public:
    CaroBoardView();
    void showCaroBoard(char**);
    void save(Player*);
};

#endif