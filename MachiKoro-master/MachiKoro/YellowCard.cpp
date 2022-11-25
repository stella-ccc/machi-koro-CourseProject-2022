#include "stdafx.h"
#include "YellowCard.h"
//黄卡（标志性建筑物卡牌）实现
void YellowCard::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val)
{
	// 不进行覆写，因为每一张黄卡的功能都不一样，不具有共同点
    //黄卡具体带来的效果在Game.cpp中体现
}

TrainStation::TrainStation() {
	this->active = false;
	this->set_card("TrainStation", 4, 0, 0, 0, Icon::establishment, Color::yellow);
}

ShoppingMall::ShoppingMall() {
	this->active = false;
	this->set_card("ShoppingMall", 10, 0, 0, 0, Icon::establishment, Color::yellow);
}

AmusementPark::AmusementPark() {
	this->active = false;
	this->set_card("AmusementPark", 16, 0, 0, 0, Icon::establishment, Color::yellow);
}

RadioTower::RadioTower() {
	this->active = false;
	this->set_card("RadioTower", 22, 0, 0, 0, Icon::establishment, Color::yellow);
}


