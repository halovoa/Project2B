#include <iostream>
#include <stdio.h>
#include <string.h>
#include "card.h"

using namespace std;
Card::Card() //construct with empty value
{
	csuit = ' ';
	cvalue = 0;
}
Card::Card(int suit, int value) //construct with correct suit and value
{
	csuit = suit;
	cvalue = value;
}
Card::Card(const Card &obj)
{
	csuit = obj.csuit;
	cvalue = obj.cvalue;
}
void Card::operator=(const Card& rhs)
{
	setValue(rhs.cvalue);
	setSuit(rhs.csuit);
}

void Card::setSuit(char suit) //set suit
{
	csuit = suit;
}
void Card::setValue(int value) //set value
{
	cvalue = value;
}
int Card::getSuit() //return suit
{
	return csuit;
}
int Card::getValue()  // return value
{
	return cvalue;
}
ostream& operator<<(ostream& ostr, Card& card) //overload operator
{
	int value = card.getValue();
	int suit = card.getSuit();
	string x, y;
	if (card.getSuit() == 3)
		x = "Hearts";
	else if (card.getSuit() == 2)
		x = "Diamonds";
	else if (card.getSuit() == 4)
		x = "Spades";
	else if (card.getSuit() == 1)
		x = "Clubs";
	else if (card.getSuit() == 0)
		x = "Your card has been selected!!!!!!";

		if (card.getValue() == 11)
			y = "Jack";
		else if (card.getValue() == 12)
			y = "Queen";
		else if (card.getValue() == 13)
			y = "King";
		else if (card.getValue() == 10)
			y = "10";
		else if (card.getValue() == 9)
			y = "9";
		else if (card.getValue() == 8)
			y = "8";
		else if (card.getValue() == 7)
			y = "7";
		else if (card.getValue() == 6)
			y = "6";
		else if (card.getValue() == 5)
			y = "5";
		else if (card.getValue() == 4)
			y = "4";
		else if (card.getValue() == 3)
			y = "3";
		else if (card.getValue() == 2)
			y = "2";
		else if (card.getValue() == 1)
			y = "ACE";
		else if (card.getValue() == 0)
			y = "Your card has been selected!!!!!";

	
	ostr << "the suit is " << x << " the number is " << y<<endl; //return suit and value
	return ostr;
}