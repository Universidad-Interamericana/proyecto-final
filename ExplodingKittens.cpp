// ExplodingKittens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameLogic.h"
#include <list>
#include <vector>

using namespace std;

int main()
{
	//cout << "Testing" << endl;
	GameLogic startGame = GameLogic();
	return 0;

}
/*
void MainMenu() {

	cin >> numberOfPlayers;
}

void BundleCards() {
	string name = "";
	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			name = "desactivacion";
			Card playerDeck = Card(name);
			deck.push_back(playerDeck);
		}
		if (i == 1) {
			name = "ataque";
			Card playerDeck = Card(name);
			deck.push_back(playerDeck);
		}
		if (i == 2) {
			name = "pasar";
			Card playerDeck = Card(name);
			deck.push_back(playerDeck);
		}
		if (i == 3) {
			name = "ver";
			Card playerDeck = Card(name);
			deck.push_back(playerDeck);
		}
		if (i == 4) {
			name = "barajar";
			Card playerDeck = Card(name);
			deck.push_back(playerDeck);
		}

	}



}

void NumberOfPlayers() {

}

void MixCards() {
	Card tempCard;
	int deckSize = deck.size();
	srand(5);

	for (int i = 0; i < deckSize; i++) {
		int temp = i + rand() % (deckSize - i);
		tempCard = deck[i];
		deck[i] = deck[temp];
		deck[temp] = tempCard;
	}

}

void DealCards() {
	for (int i = 0; i < basicCards; i++) {
		for (int j = 0; j < numberOfPlayers; j++) {
			actualPlayer[i].AddCards(deck[0]);
			deck.erase(deck.begin());
		}
	}
}

int AddExplodingKittens() {
	string name="Explode";

	for (int i = 0; i < numberOfPlayers; i++) {
		Card cardToAdd = Card(name);
		deck.push_back(cardToAdd);
	}
	return 0;
}

*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
