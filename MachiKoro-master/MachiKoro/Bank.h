#pragma once

#include <string>

using namespace std;

class Bank{
public:
	Bank();
	void deposit(int val);//��ȡ���
	int withdraw(int val);//�۳����
	int get_coins();
private:
	int coins;
};