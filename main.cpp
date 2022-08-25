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

void nuevoJuego()
{

}

int main()
{
    mensajeBienvenida();
    comprobarJugadores();
    nuevoJuego();
}
