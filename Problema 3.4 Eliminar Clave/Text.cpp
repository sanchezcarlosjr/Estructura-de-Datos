#include <iostream>
using std::string;

class Text
{
	string password, text;
	
	public: Text(string password, string temp)
	{
		this->password = password;
		this->text = delimitInput(temp);
	}
	
	private: string delimitInput(string temp)
	{
		string limitedText;
		int limitLineBreak = 10;
		int lineBreak=0;
		for(int i=0; i<temp.size(); i++)
		{
			if( temp[i] == '\n' )
			{
				lineBreak++;
			}
			if( lineBreak > limitLineBreak )
			{
				return limitedText;
			}
			limitedText += temp[i];
		}
		return limitedText;
	}
	
	
	public: string deletePassword()
	{
		
		return text;
	}
	
	
	
};
