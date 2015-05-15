/* 
* Player.cpp
*
* Created: 21.04.2015 15:05:56
* Author: user
*/


#include "Player.h"

// default constructor
Player::Player()
{
} //Player

// default destructor
Player::~Player()
{
} //~Player

Money Player::GetMoney()
{
	return money;
}

void Player::SetMoney( Money money )
{
	this->money = money;
}
