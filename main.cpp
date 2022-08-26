#include <iostream>
#include <math.h>

using namespace std;

int max_jugadores = 2;
int min_jugadores = 5;
int cantJugadores;


void comprobarJugadores()
{
    do {
        cout << "Nota: el juego adminte jugadores en el rango de " << min_jugadores << " y " << max_jugadores << "." << endl;
        cout << "Ingrese cantidad de jugadores: ";
        cin >> cantJugadores;
        
        if (cantJugadores < min_jugadores || cantJugadores > max_jugadores) {
            cout << "Numero fuera del rango admitido" << endl;
        }
    }while (cantJugadores < min_jugadores || cantJugadores > max_jugadores);
}

void mensajeBienvenida()
{
    cout << "Bienvenido a Exploding Kittens\n\n";
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
oid GameLogic::MixCards() {
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
void GameLogic::StartGame() {
    char choice;
    int currentPlayer = 0;

    do {
void nuevoJuego()
{

}

int main()
{
    mensajeBienvenida();
    comprobarJugadores();
    nuevoJuego();
}
