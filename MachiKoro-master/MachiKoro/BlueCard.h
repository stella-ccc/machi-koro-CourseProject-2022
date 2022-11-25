#pragma once

#include "Card.h"

using namespace machi;
//蓝色属性卡牌（针对所有玩家）的声明
class BlueCard: public Card {
public:
	virtual void action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val);
private:
};
//定义为虚函数，方便下属的具体建筑物卡牌进行重载操作
class WheatField : public BlueCard {
public:
	WheatField();
};

class Ranch : public BlueCard {
public:
	Ranch();
};

class Forest : public BlueCard {
public:
	Forest();
};

class Mine : public BlueCard {
public:
	Mine();
};

class AppleOrchard : public BlueCard {
public:
	AppleOrchard();
};