/* 
* Street.h
*
* Created: 21.04.2015 15:37:04
* Author: user
*/


#ifndef __STREET_H__
#define __STREET_H__

#include "Realty.h"

class Block;

#define MAX_HOUSE_COUNT 5

class Street: public Realty
{
//functions
public:
	Street(Money cost, Money houseCost, Money rent[MAX_HOUSE_COUNT]);
	virtual ~Street();
	Money GetHouseCost();
	uint8_t GetHouseCount();
	void AddHouse();
	void RemoveHouse();
	void SetBlock(Block* block);

	virtual Money GetCost();
	virtual Money GetRent();

private:
	Block* block;
	uint8_t houseCount;
	
	Money cost;
	Money houseCost;
	Money rent[MAX_HOUSE_COUNT];
}; //Street

#endif //__STREET_H__
