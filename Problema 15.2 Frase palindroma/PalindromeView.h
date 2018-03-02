#ifndef PALINDROMEVIEW_H
#define PALINDROMEVIEW_H

#include "Aplication.h"
#include "ImprovedString.h"

class PalindromeView : public Aplication
{
	private: ImprovedString sentence;
	
	public:
		interact();
	private:
		string isPalindromeView();
};

#endif
