#include <iostream>
using std::string;

class Text
{
	private: string text;
	private: int sizeString;
	private: int lineLimits=80;
	private: int limitMark;
	
	public: Text(string text)
	{
		this->text = text; 
		int sizeString = text.size();
		this->limitMark = calculateLimitMark();
	}

	public: delimitText()
	{
		for(int i=limitMark; i<sizeString; i++ )
		{
			text[i] = '\0';
		}
	}

	private: calculateLimitMark()
	{
		int lines;
		const char ENTERKEY = '\n';
		for(int i=0; i<sizeString; i++)
		{
			if(text[i] == ENTERKEY)
			{
				lines++;
			}
			if(lines > this->lineLimits)
			{
				return i;
			}
		}
		return lines;
	}
	
	public: string getText()
	{
		return text;
	}
	
};
