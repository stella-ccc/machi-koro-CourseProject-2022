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
	//ͨ��std::random_shuffle��deck���洢������card������ң�����˳��������ƶѡ�


	vector<Card*> deck;

private:
	void CreateBlueCards();
	void CreateRedCards();
	void CreateGreenCards();
	void CreateYellowCards();
	void CreatePurpleCards();
	//Ԥ���˳�ȡ��ͬ���Ϳ��ƵĽӿ�
};