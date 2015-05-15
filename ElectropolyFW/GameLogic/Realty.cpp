/* 
* Realty.cpp
*
* Created: 21.04.2015 15:07:35
* Author: user
*/


#include "Realty.h"
#include "Player.h"

Realty::Realty()
{
	isInMortage = false;
	owner = 0;
}

// virtual destructor
Realty::~Realty()
{
} //~Realty

bool Realty::GetIsInMortage()
{
	return isInMortage;
}

void Realty::SetIsInMortage( bool mortage )
{
	if(owner != 0)// ���� ������������ ����������� ������
	{
		if(mortage)// �����������
		{
			owner->SetMoney(owner->GetMoney() + GetMortgageCost());
			isInMortage = mortage;
		}
		else
		{
			if(owner->GetMoney() >= GetUnmortgageCost()) // ���� � ������ ������� ����� �� ��������
			{
				owner->SetMoney(owner->GetMoney() - GetUnmortgageCost());
				isInMortage = mortage;
			}
		}
	}
	else
	{
		if(!mortage)// ���� ������������ ������ �� �����������, �� � ����� ����� ��������
		{
			isInMortage = mortage;
		}
	}
}

void Realty::SetOwner( Player* owner )
{
	this->owner = owner;
	if(owner == 0)
	{
		SetIsInMortage(false);
	}
}

Player* Realty::GetOwner()
{
	return owner;
}

Money Realty::GetMortgageCost()
{
	return GetCost() / 2;
}

Money Realty::GetUnmortgageCost()
{
	return (Money)(GetMortgageCost() * 1.1f);
}
