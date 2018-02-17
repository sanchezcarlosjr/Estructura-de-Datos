#include <iostream>
#include <vector>


using namespace std;

#ifndef FILE_H
#define FILE_H

class File
{
	private: string route;
	public:
		File();
		vector<Person> find(string value);
	protected:
};

#endif
