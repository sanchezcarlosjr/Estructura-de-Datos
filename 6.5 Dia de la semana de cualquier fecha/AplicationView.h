#include <iostream>
#include "DateView.h"

using std::cout;
using std::string;

#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

class AplicationView
{
	private: DateView dateView;
	private: string titleApp, exitApp;
	public:
		AplicationView();
		start();
		end();
};

#endif
