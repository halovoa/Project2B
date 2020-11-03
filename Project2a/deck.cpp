
#include <iostream>
#include <stdio.h>
#include "deck.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

using std::random_shuffle;

Deck::Deck()  //initial a deck class with 52 card classes
{
	front = NULL;
	Node* prev = NULL;
	Node* now = NULL;
	int suit[] = {1,2,3,4};
	int number[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	for (int i = 3; i >=0; i--) //use for loop gofrom back to begin
	{
		for (int j = 12; j >=0;j--)
		{
			now = new Node(Card(suit[i], number[j]));
			now->next = prev;
			prev = now;
	}
	}
	front = prev;
}
Deck::~Deck()
{
	delete front;
}
Deck::Deck(int m)
{
	front = NULL;
}
Card Deck::deal()
{
	Node* curr;
	curr = front;
	Card tem = curr->card;
	front = curr->next;
	curr=NULL;
	return tem;
}
void Deck::replace(Card car)
{
	Node* curr;
	Node* temp = new Node(car);
	Node* prev;
	prev = front;
	if (front == NULL)
	{
		front = temp;
		temp->next = NULL;
		prev= front;
	}
	else
	{
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		curr = temp;
		prev->next = curr;
	}

}
void Deck::shuffle() //shuffle function
{	
	/*vector <Card> temp;
	Node* h = front;
	while (h != NULL) //get deck class's card info and input into vector
	{
		temp.push_back(h->card);
		h = h->next;
	}
	random_shuffle(temp.begin(), temp.end()); //shuffle the vector
	Node* prev;
	Node* now;
	now = new Node(temp[0]);
	prev = now;
	front = now;
	for (int i = 1; i <temp.size(); i++) // put the shuffled vector back to linkedlist
	{
		now = new Node(temp[i]);
		prev->next = now;
		prev = now;

	}
	*/
	
	//srand(0);

	Node* curr = front;
	Node* p;
	Node* temp;
	for (int i = 0; i < 100; i++)
	{
		
		unsigned int rand1 = rand() % 52;
		for (unsigned int i = 0; i <= rand1; i++)
		{
			if (curr->next != NULL)
			{
				curr = curr->next;
			}
		}
		p =curr->next;
		curr->next = front;
		temp = front;
		front = front->next;
		temp->next = p;
		curr = front;
	
	} 
	
	
}


ostream& operator << (ostream& ostr, Deck& de) //overload operator that outputs the deck
{
	Node* curr = de.front;
	while (curr != NULL)
	{
		ostr << curr->card << endl;
		curr = curr->next;
	}
	return ostr;
}

/* void Deck::addCard(Card& card)
{
	node<string> *s;
	s = new node<string> (card);
	s->nodeValue = &card;

} */

/*
curr = front;
		back = front;
		p = NULL;
		int move = rand() % 52;
		if (move > 1)
		{
			for (int k = 0; k < move; k++)
			{
				curr = curr->next;
			}
			for (int coun = 0; coun < 51; coun++)
			{
				back = back->next;
			}
			if (curr->next != NULL)
			{
				p = curr->next;
				back->next = p;
				curr->next = p->next;
				p->next = NULL;
				delete p;
			}*/