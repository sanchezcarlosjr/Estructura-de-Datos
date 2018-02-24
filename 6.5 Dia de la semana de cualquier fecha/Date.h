#include <string>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

#ifndef DATE_H
#define DATE_H

class Date
{
	private: vector<string> dayOfWeek;
	private: string separator;
	private: enum{DAY, MONTH, YEAR};
	private: vector<string> date;
	
	private: toInt(string);
	
	public:
		Date();
		operator = (string date);
		string getDate();
		friend ostream & operator << (ostream &, Date &);
		string determineDayOfWeek();
		vector<string> explode(string str, string separator);
};

#endif
