
#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
public:
	Card();

	Card(string);

	string GetName();

private:
	string name;
};

#endif 