#include <string>
#include <iostream>
#include "Deck.h"
using namespace std;

void playFlip(Deck d1)
{
	cout << "Welcome to the game, let start" << endl;
	Deck hand(0);
	Card temp;
	for (int i = 0; i < 24; i++)
	{
		temp = d1.deal();
		hand.replace(temp);
	}
	cout << "you have 24 cards in hand" << hand << endl;
	cout << "you have 28 cards left in deck" << d1 << endl;
	int size = 24;
	int place;
	int result = 1;
	int points = 0;
	while (result==1)
	{
		cout << "you have " << size << " cards in your hand, choose one and input order number from 1 to " << size << endl;
		cin >> place;
		Node* choose;
		choose = hand.front;
		for (int i = 1; i < place; i++)
		{
			choose = choose->next;
		}
		cout << "You chose " << choose->card << endl;
		if (choose->card.getValue() == 1)
		{	points = points + 10;
		}
		else if (choose->card.getValue()==11|| choose->card.getValue() == 12|| choose->card.getValue() == 13)
		{
			points = points + 5;
		}
		else if (choose->card.getValue() == 7)
		{
			points = ceil(points / 2);
		}
		else if (choose->card.getValue() == 2 || choose->card.getValue() == 3 || choose->card.getValue() == 4 || choose->card.getValue() == 5 || choose->card.getValue() == 6)
		{
			points = 0;
		}
		if (choose->card.getSuit() == 3)
		{
			points = points + 1;
		}
		cout << "Your point is " << points << endl;
		choose->card = Card(0, 0);
		cout << "Do you want to continue? Enter 1 to continue, enter 2 to end" << endl;
		cin >> result;
	}
	cout << "Your total points are" << points;
}

int main()
{

	Deck d1; //initial deck
	//cout<<d1;
	d1.shuffle(); //shuffle
	d1.shuffle();
	d1.shuffle();
	//cout << d1;
	playFlip(d1);
	return 0;
}

