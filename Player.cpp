#include "Player.h"
#include <string>
#include "Card.h"
#include <vector>
#include <list>
#include <iostream>



using namespace std;


Player::Player() {

}
	Player::Player(string fname) {
		name = fname;
		playerLost = false;
	}


	string Player::AddToHand(Card fcard) {
		
		cardInHand.push_back(fcard);

	auto card=	cardInHand.at(0).GetName();
		return card;//TODO-Check this

	}

	string Player::DisplayName(){
		return name;
	}

	void Player::DisplayHand() {
		for (int i = 0; i < cardInHand.size(); i++) {
		cout << "Card :" << cardInHand.at(i).GetName() << endl;
		}
	}

	int Player::GetNumberOfCards() {
		return cardInHand.size();
	}

	Card Player::PlayCard() {
		string card = "";

		cout << "Elegir que carta desea utilizar: " << endl;
		cin >> card;

		for (int i = 0; i < cardInHand.size(); i++) {
			if (card == cardInHand.at(i).GetName()) {

				cardInHand.erase(cardInHand.begin());
				
			}
		}
		Card tempCard = cardInHand.at(0);

		return tempCard;

	}

	void Player::Lost(bool fplayerLost) {
		if (fplayerLost == true) {
			playerLost = true;
		}
	}