#include <iostream>
#include "Aplication.h"

using namespace std;

#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

class AplicationView
{
	private: string titleApp, exitApp;
	
	public:
		AplicationView();
		interact(Aplication* aplication);
	
};

#endif
