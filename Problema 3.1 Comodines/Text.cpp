#include <iostream>
#include <string>

#include "Date.cpp"

using std::string;

class Text
{
	private: string text, name;

	public: set(string name, string text)
	{
		this->name = name;
		this->text = text;
		this->edit();
	}
	
	private: edit()
	{
		int namePosition;
		while ( ( namePosition = text.find('#') ) != string::npos)
		{
			text.replace(namePosition, 1 ,name);
		}
		Date date;
		while ( ( namePosition = text.find('?') ) != string::npos)
		{
			text.replace(namePosition, 1 ,date.getDate());
		}
	
	}
	
	
	
	
	
	public: string get()
	{
		return text;
	}
	

	
};
