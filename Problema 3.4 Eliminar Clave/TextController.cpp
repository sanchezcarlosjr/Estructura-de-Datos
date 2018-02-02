#include <iostream>
#include "Text.cpp"
using std::string;

class TextController
{
	
	public: string store( string password,string temp)
	{
		Text text(password, temp);
		return text.deletePassword();
	}
	
};
