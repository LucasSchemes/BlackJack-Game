#pragma once
#include "deck.hpp"
#include "player.hpp"

class Dealer {

private:
	vector<int>hand;
	vector<Player*>playerSet;

public:

	void setPlayerSet(vector<Player*>& playerSet);
	vector<Player*> getPlayerSet();
	void Distribute();
	void Hit();
	int CheckHand();

};