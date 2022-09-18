#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;

enum _player{
    _player1, _player2
};
class Player
{
private:
    string name;
    int win = 0, lose = 0, draw = 0;
public:
    Player();
    Player(string);
    void setName(string);
    void setWin();
    void setLose();
    void setDraw();

    int getWin();
    int getLose();
    int getDraw();
    string getName();
    ~Player();
};


#endif

