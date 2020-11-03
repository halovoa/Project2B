#include <iostream>
#include <stdio.h>
#include <string.h>
#include "node.h"

Node::Node() //empty constructor
{
	next = NULL;
}
Node::Node(Card car) //constrcutor with card value and null next pointer
{
	card = car;
	next = NULL;
}
Node::Node(Card car, Node* nxxt) //constrcutor with card value and next pointer
{
	card = car;
	next = nxxt;
}