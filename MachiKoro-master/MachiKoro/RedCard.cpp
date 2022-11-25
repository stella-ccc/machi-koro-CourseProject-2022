#include "stdafx.h"
#include "RedCard.h"

// 红色卡牌（收钱）的实现
//函数传入的玩家1会从玩家2处收取金币
void RedCard::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val)
{
	int bonus = 0;
	if (c1 != NULL) bonus = 1;
	p1->deposit(p2->withdraw(this->get_value()+bonus));
}

Cafe::Cafe() {
	this->set_card("Cafe", 2, 1, 3, 3, Icon::restaurant, Color::red);
}

FamilyRestaurant::FamilyRestaurant() {
	this->set_card("FamilyRestaurant", 3, 2, 9, 10, Icon::restaurant, Color::red);
}
