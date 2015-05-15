/* 
* Realty.h
*
* Created: 21.04.2015 15:07:35
* Author: user
*/


#ifndef __REALTY_H__
#define __REALTY_H__

#include <stdbool.h>
#include <stdint.h>

#include "Money.h"

class Player;

class Realty
{
//functions
public:
	Realty();
	virtual ~Realty();
	virtual Money GetCost() = 0;
	virtual Money GetMortgageCost();
	virtual Money GetUnmortgageCost();
	virtual Money GetRent() = 0;
	bool GetIsInMortage();
	void SetIsInMortage(bool mortage);
	Player* GetOwner();
	void SetOwner(Player* owner);
protected:
	Player* owner;
private:
	bool isInMortage;
}; //Realty

#endif //__REALTY_H__
