#include <iostream>
#include "File.h"
#include "PersonView.h"

using namespace std;

#ifndef FILEVIEW_H
#define FILEVIEW_H

class FileView
{
	private: File file;
	private: PersonView personView;
	public:
		interact();
};

#endif
