/* 
* Street.cpp
*
* Created: 21.04.2015 15:37:04
* Author: user
*/


#include "Street.h"
#include "Block.h"
#include "Player.h"

#include <string.h>

// virtual destructor
Street::~Street()
{
	delete rent;
} //~Street

void Street::AddHouse()
{
	if(owner != 0)
	{
		if(owner->GetMoney() >= GetHouseCost() && houseCount < MAX_HOUSE_COUNT)
		{
			uint8_t minHouseCount = MAX_HOUSE_COUNT;
			for(int i = 0; i < block->GetStreetsCount(); i++)
			{
				Street* street = block->GetStreet(i);
				if(street->GetOwner() != owner)// если хотя-бы у одной улицы в блоке другой хозяин мы не можем строить дома
				{
					return;
				}
				uint8_t hc = street->GetHouseCount();
				if(hc < minHouseCount)
				{
					minHouseCount = hc;
				}
			}
			if(houseCount <= minHouseCount)// если количество домов долше минимального в блоке мы не можем строить дома
			{
				houseCount++;
				owner->SetMoney(owner->GetMoney() - GetHouseCost());
			}
		}
	}
}


 Street::Street( Money cost, Money houseCost, Money rent[MAX_HOUSE_COUNT] )
{
	houseCount = 0;
	this->cost = cost;
	this->houseCost = houseCost;
	memcpy(this->rent, rent, sizeof(Money) * MAX_HOUSE_COUNT);
}

void Street::RemoveHouse()
{
	if(houseCount == 0)
	{
		return;
	}
	if(owner != 0)
	{
		owner->SetMoney(owner->GetMoney() + GetHouseCost());
	}
	houseCount--;
}

void Street::SetBlock( Block* block )
{
	this->block = block;
}

uint8_t Street::GetHouseCount()
{
	return houseCount;
}

Money Street::GetHouseCost()
{
	return houseCost;
}

Money Street::GetCost()
{
	return cost;
}

Money Street::GetRent()
{
	if(owner == 0 && GetIsInMortage())
	{
		return 0;
	}
	if(block->TotalOwner(owner))
	{
		Money r = rent[houseCount];
		if(houseCount == 0)
		{
			r *= 2;
		}
		return r;
	}
	else
	{
		return rent[0];
	}

}
