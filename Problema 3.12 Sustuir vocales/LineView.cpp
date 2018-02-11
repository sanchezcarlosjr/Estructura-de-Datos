#include <iostream>

using std::string;
using std::cin;
using std::getline;


class LineView
{
	private: string text;
	
	public: string interact()
	{
		getline(cin, text);
		for(int i=0; i<text.size();i++)
		{
			text[i] = toupper(text[i]);
		}
		return text;
	}
	
};
