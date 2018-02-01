#include <iostream>
#include "KilogramPotatoes.cpp"

using std::cout;
using std::string;
using std::getline;
using std::cin;

class TextView
{
	string text;
	public: TextView()
	{
		char endline = '\n';
		store();
		cout<<endline;
		show();
	}
	
	private: store()
	{
		getline(cin, text, '\t');
	}
	
	private: show()
	{
		KilogramPotatores potatores;
		cout<<"El total de la suma es: ";
		cout<<potatores.add(text);
	}
	
	
};
