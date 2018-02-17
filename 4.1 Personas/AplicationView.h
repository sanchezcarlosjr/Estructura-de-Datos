#include <iostream>
#include <stdlib.h>
#include "FileView.h"

using namespace std;

#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

class AplicationView
{
	private: FileView fileView;
	private: string titleApp, exitApp;
	
	public:
		AplicationView();
		start();
		end();
};

#endif
