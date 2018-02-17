#include "Person.h"

Person::Person(string title, string name, string lastName, int age)
{
	this->name = name;
	this->title = title;
	this->lastName = lastName;
	this->age = age;
}

string Person::getName()
{
	return name;
}

string Person::getTitle()
{
	return title;
}

int Person::getAge()
{
	return age;
}

string Person::getLastName()
{
	return lastName;
}

bool Person:: operator < (Person person)
{
    return (lastName < person.getLastName() );
}

