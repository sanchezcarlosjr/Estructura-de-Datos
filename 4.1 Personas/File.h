#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include <algorithm> 
#include "Person.h"



using namespace std;

#ifndef FILE_H
#define FILE_H

class File
{
	private: string title;
	private: vector<Person> persons;
	private: string route;
	public:
		File();
		vector<Person> find(string title, string order="");
		read();
		vector<string> explode(string str, string separator);
		int toInt(string str);
		bool comparation(Person temp1, Person temp2);
};

#endif
