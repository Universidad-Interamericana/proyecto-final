#include <string>
#include "Card.h"

using namespace std;



Card::Card() {

}

Card::Card(string fname) {
	name = fname;
}

string Card::GetName() {
	return name;
}