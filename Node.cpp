#include "Node.h"

Node::Node(int fact)
{
	this->fact = fact;
}

Node::getFact()
{
	return fact;
}

Node::setNext(Node *next)
{
	this->next = next;
}

Node::setPrevious(Node *previous)
{
	this->previous=previous;
}
