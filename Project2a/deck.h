#pragma once
#ifndef Deck_h
#define Deck_h

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "node.h"
using namespace std;

//head file for deck class
class Deck
{	
public:
	//Node* getfirst();
	Deck(); //deck constructor initiate the deck 
	~Deck();//deconstructor
	Deck(int m);
	void shuffle();//shuffle function
	Card deal();
	void replace(Card car);
	// Node* getfront();
	//void addCard(Card& card);
	friend ostream& operator << (ostream& ostr, Deck& de); //operator overloader for output
	Node* front;
private:
	
};
#endif