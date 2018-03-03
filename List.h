#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List
{
	private: int size; 
	private: Node *head, *lastElement;
	
	public:
		List();
		front();
		back();
		getSize();
		push_front(int);
		push_back(int);
		bool isEmpty();
	
};

#endif
