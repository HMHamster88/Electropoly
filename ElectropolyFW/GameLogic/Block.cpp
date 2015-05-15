/* 
* Block.cpp
*
* Created: 21.04.2015 15:54:22
* Author: user
*/


#include "Block.h"
#include "Street.h"
#include "Player.h"

 Block::Block( Street** streets, uint8_t streetsCount )
{
	this->streets = new Street*[streetsCount];
	this->streetsCount = streetsCount;
	for(int i = 0; i < streetsCount; i++)
	{
		this->streets[i] = streets[i];
		streets[i]->SetBlock(this);
	}
}

// default destructor
Block::~Block()
{
	delete streets;
} //~Block

Street* Block::GetStreet( uint8_t i )
{
	if(i < streetsCount)
	{
		return streets[i];
	}
	return 0;
}

bool Block::TotalOwner( Player* player )
{
	for(int i = 0; i < streetsCount; i++)
	{
		if(streets[i]->GetOwner() != player)
		{
			return false;
		}
	}
	return true;
}
