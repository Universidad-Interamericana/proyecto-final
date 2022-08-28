#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <string>
#include "Player.h"


using namespace std;

const int intialCards = 7;
const int verFuturo = 3;
const int randomCounter = 10;


class GameLogic {
public:
GameLogic();
void AddNumberOfPlayers(int players);


private:
	void Play();
	void LoadDeck();
	void MixCards();
	void Peek();
	int AddBombCard();
	int HanldeCard();
	Card DrawCard();
	void MainMenu();
	void DealCards();
	
	void AddExplodingKittens();
	void AddPlayersToGame();
	void StartGame();

	

	int numberofPlayers = 2;
	Player playersList[5];
	vector<Card> deck;
	vector<Card> usedCards;

};
#endif