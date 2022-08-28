#ifndef PLAYER_H
#define PLAYER_H
#include "Card.h"
#include <vector>
#include <string>

using namespace std;

class Player {
public:
	Player();

	Player(string);

	Card UseCard();

	Card GiveCard(int);
	string AddToHand(Card);
	string DisplayName();
	void DisplayHand();
	int GetNumberOfCards();
	Card PlayCard();
	void Lost(bool);


private:
	bool playerLost = false;
	vector<Card> cardInHand;
	string name;

};
#endif