/* 
* Player.h
*
* Created: 21.04.2015 15:05:56
* Author: user
*/


#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Money.h"

class Player
{
//variables
public:
protected:
private:

//functions
public:
	Player();
	~Player();
	
	Money GetMoney();
	void SetMoney(Money money);
protected:
private:
	Money money;
	Player( const Player &c );
	Player& operator=( const Player &c );

}; //Player

#endif //__PLAYER_H__
