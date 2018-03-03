#include "List.h"

#define NULL 0

List::List()
{
	this->size = 0;
	this->head = NULL;
	this->lastElement=NULL;
}
List::front()
{
	return head->getFact();
}

List::back()
{
	return lastElement->getFact();
}

List::push_front(int fact)
{
	Node *newNode;
	newNode = new Node(fact);
	newNode->setNext(head);
	bool isEmptyHead = (head == NULL);
	if(!isEmptyHead)
	{
		head->setPrevious(newNode);
	}	
	head = newNode;
	if(isEmptyHead)
	{
		lastElement = head;
	}
	size++;
}

List::push_back(int fact)
{
	Node *newNode;
	newNode = new Node(fact);
	newNode->setPrevious(lastElement);
	bool isEmptyLastElement = (lastElement == NULL);
	if(!isEmptyLastElement)
	{
		lastElement->setNext(newNode);
	}
	lastElement = newNode;
	if(isEmptyLastElement)
	{
		head = lastElement;
	}
	size++;
}

bool List::isEmpty()
{
	bool isEmptyLastElement = (lastElement == NULL);
	bool isEmptyHead = (head == NULL);
	return (isEmptyLastElement && isEmptyHead  ) ? true : false;
}

List::getSize()
{
	return size;
}

