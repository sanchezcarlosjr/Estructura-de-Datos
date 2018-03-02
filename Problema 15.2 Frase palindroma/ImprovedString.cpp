#include "ImprovedString.h"

bool ImprovedString::isPalindrome()
{
	ImprovedString temp;
	temp = this->improvedString;
	temp.deleteSymbols();
	temp.toUpper();
	stack<char> reverse;
	queue<char> original;
	for(int i=0;i<temp.size();i++)
	{
		reverse.push(temp[i]);
		original.push(temp[i]);
 	}
	while(!reverse.empty())
	{
		if( reverse.top() != original.front()   )
		{
			return false;
		}
		reverse.pop();
		original.pop();
	}
	return true;
}

ImprovedString::deleteSymbols()
{
	enum {BACKSPACE=' '};
	string deleteSymbol="";
	int position;
	while( (position=improvedString.find(BACKSPACE)) != string::npos)
	{
		improvedString.replace(position,1, deleteSymbol);
	}
}

ImprovedString::toUpper()
{
	for(int i=0; i<this->improvedString.size(); i++)
	{
		this->improvedString[i] = toupper(this->improvedString[i]);
	}
}


ostream& operator << (ostream& stream, ImprovedString & temp)  
{  
	stream << temp.getString();  
	return stream;  
}  

string ImprovedString::getString()
{
	return improvedString;
}


ImprovedString::operator = (string temp)
{
	improvedString = temp;
}

ImprovedString::size()
{
	return improvedString.size();
}

ImprovedString::operator [] (int access)
{
	return improvedString[access];
}

