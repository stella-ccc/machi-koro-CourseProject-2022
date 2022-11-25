#include "stdafx.h"
#include "PurpleCard.h"
//紫色卡牌的具体实现（此部分仅预留了接口，目前实现写在了Game.cpp中）
BusinessCenter::BusinessCenter() {
	this->set_card("BusinessCenter", 8, 0, 6, 6, Icon::establishment, Color::purple);
}

void BusinessCenter::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val) {
	// 实现卡牌交换功能，在game.cpp中实现，后续待优化封装
}

Stadium::Stadium() {
	this->set_card("Stadium", 6, 2, 6, 6, Icon::establishment, Color::purple);
}
void Stadium::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val) {
	p1->deposit(p2->withdraw(this->get_value()));
}

TVStation::TVStation() {
	this->set_card("TVStation", 7, 5, 6, 6, Icon::restaurant, Color::purple);
}
void TVStation::action(Bank *p1, Bank *p2, Card *c1, Card *c2, int val) {
	p1->deposit(p2->withdraw(this->get_value()));
}