#pragma once

#include <string>

using namespace std;

class Bank{
public:
	Bank();
	void deposit(int val);//获取金币
	int withdraw(int val);//扣除金币
	int get_coins();
private:
	int coins;
};