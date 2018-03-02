#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

#include "Aplication.h"
#include "PalindromeView.h"

class AplicationView : public Aplication
{
	private: PalindromeView palindrome;
	private: string titleApp, exitApp;
	
	public:
		AplicationView();
		interact();
};

#endif
