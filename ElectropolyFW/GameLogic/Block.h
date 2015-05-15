/* 
* Block.h
*
* Created: 21.04.2015 15:54:22
* Author: user
*/


#ifndef __BLOCK_H__
#define __BLOCK_H__

#include <stdint.h>
#include <stdbool.h>

class Player;
class Street;

class Block
{
//variables
public:
protected:
private:

//functions
public:
	Block(Street** streets, uint8_t streetsCount);
	~Block();
	uint8_t GetStreetsCount();
	Street* GetStreet(uint8_t i);
	bool TotalOwner(Player* player);
protected:
private:
	uint8_t streetsCount;
	Street** streets;
	Block( const Block &c );
	Block& operator=( const Block &c );

}; //Block

#endif //__BLOCK_H__
