#include <iostream>
#include <fstream>
#include "PersonView.h"

using namespace std;

#ifndef FILESVIEW_H
#define FILESVIEW_H

class FilesView
{
	private: 
		string content; 
	    string route;
		PersonView personsView;
		
	public:
		FilesView();
		~FilesView();
		interact();
		
	private:
		show();
		
	protected:
};

#endif
