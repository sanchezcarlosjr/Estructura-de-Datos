#include <iostream>
#include "PotatoesController.cpp"

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
		PotatoesController potatoes;
		cout<<"El total de la suma es: ";
		cout<<potatoes.add(text);
	}
	
	
};
