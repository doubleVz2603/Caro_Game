#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include <iostream>
#include "Player.h"
#include <windows.h>
#include "CaroBoardView.h"
#include "CaroBoard.h"
#include <vector>
using namespace std;
struct Point{
    int x, y;
};

class Management
{
private:
    CaroBoardView caroBoardView;
    Player *listPlayer;
    CaroBoard caroBoard;
    Point point;
    vector<pair<Point, _player>> listMoving;

public:

    Management();
    Management(CaroBoard, Player*, CaroBoardView);
    void addMoving(pair<Point,_player>);
    void setWinPlayer(string);
    void setDrawPlayer();
    void setLosePlayer(string);
    void save(Player*);
    bool checkBlank(Point);
    int result();
    void showCaroBoard();
    void updateCaroBoard(Point , _player);
    CaroBoard getCaroBoard();
    Player* getListPlayer();
    void replayMode();
    ~Management();
};

#endif
