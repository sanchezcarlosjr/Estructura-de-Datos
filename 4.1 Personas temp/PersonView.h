#include <iostream>
#include "Person.h"

using std::cout;
using std::string;

#ifndef PERSONVIEW_H
#define PERSONVIEW_H

class PersonView
{
	private: Person* person;
	
	public:
		PersonView();
		interact(vector<Person> persons);
	protected:
};

#endif
