#pragma once
#ifndef Node_h
#define Node_h
//node headfile with constructor 
#include <iostream>
#include <stdio.h>
#include "card.h"
#include <string.h>


class Node
{
public:
	Node(Card car);//constructor with card and null next pointer
	Node(Card car, Node* nxxt); //constructor with card and next pointer
	Node(); //empty constrcutor

	Node* next;
	Card card;

};


#endif