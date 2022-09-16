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
    int win, lose, draw;
public:
    Player();
    Player(string);
    ~Player();
};


#endif

