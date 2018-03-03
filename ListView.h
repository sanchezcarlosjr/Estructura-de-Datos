#ifndef LISTVIEW_H
#define LISTVIEW_H

#include "Aplication.h"
#include "List.h"
#include <stdlib.h>
#include <time.h>


class ListView : public  Aplication
{
	private: List list;
	
	public:
		interact();
};

#endif
