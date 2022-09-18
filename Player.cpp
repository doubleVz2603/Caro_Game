#include "Player.h"

Player::Player() {}
Player::Player(string name) {
    this->name = name;
}
Player::~Player() {}
void Player::setDraw()
{
    ++draw;
}
void Player::setWin()
{
    
    ++win;
}
void Player::setLose()
{
    ++lose;
}

int Player::getDraw()
{
    return draw;
}
int Player::getWin()
{
    
    return win;
}
int Player::getLose()
{
    return lose;
}

string Player::getName()
{
    return name;
}

void Player::setName(string name)
{
    this->name = name;
}