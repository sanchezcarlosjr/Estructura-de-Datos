#ifndef IMPROVEDSTRING_H
#define IMPROVEDSTRING_H

#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class ImprovedString
{
	private: string improvedString;
	
	public:
		bool isPalindrome();
		deleteSymbols();
		friend ostream & operator << (ostream &, ImprovedString&);
		operator = (string);
		string getString();
		toUpper();
		size();
		operator [] (int);
};

#endif
