#include "Person.h"
#include "EscapesSequences.h"

Person::setName(string name)
{
	this->name = name;
}

Person::setAge(int age)
{
	this->age = age;
}

Person::setTitle(string title)
{
	this->title = title;
}

Person::getAge()
{
	return this->age;
}

string Person::getName()
{
	return this->name;
}

string Person::getTitle()
{
	return title;
}
