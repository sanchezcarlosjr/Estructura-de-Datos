#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

#include "Aplication.h"
#include "listView.h"

class AplicationView : public Aplication
{
	private: ListView listView;
	private: string titleApp, exitApp;
	
	public:
		AplicationView();
		interact();
};

#endif
