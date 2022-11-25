#pragma once
#include <vector>
#include <iostream>
#include "Card.h"
#include "BlueCard.h"
#include "GreenCard.h"
#include "RedCard.h"
#include "PurpleCard.h"
#include "YellowCard.h"

using namespace std;

class Deck {
public:
	Deck();
	
	void shuffle();
	//通过std::random_shuffle将deck所存储的所有card随机打乱，生成顺序随机的牌堆。


	vector<Card*> deck;

private:
	void CreateBlueCards();
	void CreateRedCards();
	void CreateGreenCards();
	void CreateYellowCards();
	void CreatePurpleCards();
	//预留了抽取不同类型卡牌的接口
};