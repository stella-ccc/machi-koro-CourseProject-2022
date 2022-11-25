// MachiKoro.cpp 定义了控制台应用程序的入口点
//
#include "stdafx.h"
#include <iostream>

#include "Deck.h"
#include "Game.h"

using namespace std;

void view_slots(Game *g)
{
	vector<vector<Card*>> s = g->get_slot();
	for (int i = 0; i < s.size(); i++)
	{
		cout << i << ": " << s[i][0]->get_name() << ": " << s[i].size() << endl;
	}
}


int main()
{
	while (!Game::getInstance()->is_game_over)
	{
		Game::getInstance()->roll_dice();
		system("pause");
	}


	char t;
	cin >> t;
    return 0;
}

