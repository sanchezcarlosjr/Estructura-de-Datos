#include <string>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
	private: string title, name, lastName;
	private: int age;
	
	public:
		Person(string title, string name, string lastName, int age);
		string getName();
		string getTitle();
		getAge();
		string getLastName();
		bool operator < (Person person);
};

#endif
