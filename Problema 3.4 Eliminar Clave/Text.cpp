#include <iostream>
using std::string;

class Text
{
	string password, text;
	
	public: Text(string password, string text)
	{
		this->password = password;
		this->text = text;
	}
	
	public: string deletePassword()
	{
		return "Hola";
	}
	
	
	
};
