#include <iostream>
#include <string>
#include "VectorView.h"

using namespace std;

#ifndef APLICATIONVIEW_H
#define APLICATIONVIEW_H

class AplicationView
{
	private: VectorView vectorView;
	private: string titleApp, exitApp;
	public:
		AplicationView();
		start();
		end();
};

#endif
