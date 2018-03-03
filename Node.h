#ifndef NODE_H
#define NODE_H

class Node
{
	private: Node *next, *previous;
	private: int fact;
	
	
	public:
		Node(int);
		setNext(Node *);
		setPrevious(Node*);
		getFact();
	
};

#endif
