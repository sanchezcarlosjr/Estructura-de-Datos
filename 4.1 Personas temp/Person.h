#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
	private: string name, title; int age;
	private: vector <string> information;
	private: string route;
	
	public:
		Person();
		setName(string name);
		setAge(int age);
		string getName();
		setTitle(string title);
		getAge();
		string getTitle();
		vector<Person> find(string title);
		string read();
		vector<string> explode(string str, string seperator);
};

#endif
