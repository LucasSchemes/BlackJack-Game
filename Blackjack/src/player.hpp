#pragma once
#include "deck.hpp"

class Player {
private:
	vector<int>hand;

public:
	void Hit();
	void Stand();
	void Double();
	void Split();
	int CheckHand();
	char choice();

};