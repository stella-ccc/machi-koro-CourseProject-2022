#pragma once

#include "Card.h"

using namespace machi;
//��ɫ���Կ��ƣ����������ң�������
class BlueCard: public Card {
public:
	virtual void action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val);
private:
};
//����Ϊ�麯�������������ľ��彨���￨�ƽ������ز���
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