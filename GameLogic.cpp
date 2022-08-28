#include <iostream>
#include "Card.h"
#include "Player.h"
#include <list>
#include <vector>
#include"GameLogic.h"



using namespace std;

int playeroneNumber = 0;
int playertwoNumber = 1;
int currentPlayer = playeroneNumber;

GameLogic::GameLogic() {
	MainMenu();
	//AddNumberOfPlayers(numberofPlayers);
	AddPlayersToGame();
	LoadDeck();
    MixCards();
    DealCards();
    string name2 = "desactivacion";
    Card playerDeck = Card(name2);
    deck.push_back(Card(playerDeck));
    AddExplodingKittens();
    MixCards();
    StartGame();


}
void GameLogic:: MainMenu() {
	cout << "Bienvenido a Exploding Kittens" << endl;
	//cout << "Ingrese numero de jugadores(maximo 5): " << endl;
}
void GameLogic::AddPlayersToGame() {
	string player_1 = "Jugador 1";
	string player_2 = "Jugador 2";

	playersList[0] = player_1;
	playersList[1] = player_2;
}
void GameLogic::LoadDeck() {
    string name = "";
    string name2 = "";
    for (int i = 0; i < 6; i++) {
        if (i == 0) {
            name = "desactivacion";
            Card playerDeck = Card(name);
            deck.push_back(Card (playerDeck));
        }
        if (i == 1) {
            name = "ataque";
            name2 = "ver";
            Card playerDeck = Card(name);
            deck.push_back(playerDeck);
            deck.push_back(name2);
        }
        if (i == 2) {
            name = "pasar";
            name2 = "barajar";
            Card playerDeck = Card(name);
            deck.push_back(playerDeck);
            
        }
        if (i == 3) {
            name = "ver";
            name2 = "pasar";
            Card playerDeck = Card(name);
            deck.push_back(playerDeck);
            deck.push_back(name2);
        }
        if (i == 4) {
            name = "barajar";
            Card playerDeck = Card(name);
            deck.push_back(playerDeck);
            
        }

    }
}
void GameLogic::MixCards() {
    Card tempCard;
    int deckSize = deck.size();
    srand(10);

    for (int i = 0; i < deckSize; i++) {
        int temp = i + rand() % (deckSize - i);
        tempCard = deck[i];
        deck[i] = deck[temp];
        deck[temp] = tempCard;
    }

}
void GameLogic::DealCards() {

    for (int j = 0; j < intialCards; j++) {

        for (int i = 0; i < deck.size() !=0; i++) {
            playersList[i].AddToHand(deck.at(0));
            playersList[i].AddToHand(deck.at(i));
            deck.erase(deck.begin());
        }
    }
    string name = "desactivacion";
    Card playerDeck = Card(name);
    deck.push_back(Card(playerDeck));
    playersList[0].AddToHand(playerDeck);
}
void GameLogic::AddExplodingKittens() {
    int numExplodingKittens;
    string name = "explode";
    Card explodingKittenCard = Card(name);
    deck.push_back(explodingKittenCard);


}
int GameLogic::HanldeCard() {
    Card usedCard = playersList[currentPlayer].PlayCard();

    string usedCardName = usedCard.GetName();
    int usedCardNumber = 0;

    if (usedCardName == "desactivacion") {
        usedCardNumber = 0;
    }  
    if (usedCardName == "ataque") {
        usedCardNumber = 1;
    }
    if (usedCardName == "pasar") {
        usedCardNumber = 2;
    }
    if (usedCardName == "ver") {
        usedCardNumber = 3;
    }
    if (usedCardName == "barajar") {
        usedCardNumber = 4;
    }

    switch (usedCardNumber) {
    case 0:
        cout << "La carta de desactivacion se utiliza cuando te toca un exploding kitten" << endl;
        break;
    case 1:
        cout << "Atacando a : "  << playersList[playertwoNumber].DisplayName();
        break;
    case 2:
        cout << "Pasando de turno...";
        break;
    case 3:
        cout << "Viendo el futuro...";
        Peek();
        break;

    case 4:
        cout << "Barajeando Cartas...";
        MixCards();
        break;
    default:
        break;


    }
    return 0;
}
void GameLogic::StartGame() {
    char choice;
    int currentPlayer = 0;

    do {

       // auto tempPlayer = playersList[currentPlayer].DisplayName();
       // auto activePlayer = playersList[currentPlayer - 1].DisplayName();
        
    cout << "\nTurno de Jugador: " << playersList[currentPlayer].DisplayName() << endl;
    cout << "Selecionar una opcion: " << endl;
    cout << "a. Ver cartas en su mano" << endl;
    cout << "b. Utilizar carta de su mano" << endl;
    cout << "c. Agarrar carta del maso" << endl;
    cout << "q. Cerrar juego" << endl;

    cin >> choice;
    auto cardTaken = playersList[currentPlayer].AddToHand(deck.at(0).GetName());
    switch (choice) {
    case 'a':
        playersList[currentPlayer].DisplayHand();
        if (currentPlayer == 0) {
            currentPlayer = 1;
        }
        else {
            currentPlayer = 0;
        }
        break;

    case 'b':
        if (playersList[currentPlayer].GetNumberOfCards() !=0) {
            HanldeCard();
            if (currentPlayer == 0) {
                currentPlayer = 1;
            }
            else currentPlayer = 0;
        }
        else
        {
            cout << "No tienes cartas, agarra una del maso";
        }
        break;
    case 'c':
        cardTaken = playersList[currentPlayer].AddToHand(deck.at(0).GetName());
      if (cardTaken == "explode") {
          cout << "La carta es exploding Kitten, perdistes...";
        }
      playersList[currentPlayer].Lost(true);
      break;
    default:
        break;
    }
    
        } while (!(choice == 'q'));
}
void GameLogic::Peek() {
    for (int i = 0; i < 3; i++) {
        cout << deck.at(i).GetName() << endl;
    }
}