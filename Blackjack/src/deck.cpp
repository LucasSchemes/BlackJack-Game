#include "dealer.hpp"

int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;
vector<int>deck;


void shuffler() {
	srand((unsigned)time(0));
	for (int i = 0; i < 52; i++)
		swap(deck[i], deck[rand() % 52]);
	cout << "******Deck Shuffled!******" << endl;
}

void print_deck() {
	cout << "deck:" << endl;
	int t = 0;
	for (auto i : deck) {
		cout << i << " ,";
		t++;
		if (t % 13 == 0) cout << endl;
	}
}

int getCard() {
	int card = deck.front();
	deck.erase(deck.begin());
	return card;
}

bool is_deck_empty() {
	return deck.empty();
}
