#pragma once
#ifndef Card_h
#define Card_h
using namespace std;
#include <iostream>
#include <stdio.h>
#include <string.h>


//card head file construct card 
class Card
{
public:
	Card(); //constructor 
	Card(int suite, int value); //constructor with suit and value input
	Card(const Card& obj);//copy constructor
	void operator=(const Card& rhs);
	void setValue(int value); 
	void setSuit(char suit);
	int getSuit();
	int getValue();
	friend ostream& operator<<(ostream& ostr, Card& C); //overload output operator 

private:
	char csuit;
	int cvalue;
};

#endif
