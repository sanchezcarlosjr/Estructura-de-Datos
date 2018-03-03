#ifndef APLICATIONCONTROLLER_H
#define APLICATIONCONTROLLER_H

#include "Aplication.h"
#include "AplicationView.h"

class AplicationController
{
	private: Aplication *aplication;
	
	public:
		AplicationController();
		start();		
};

#endif
