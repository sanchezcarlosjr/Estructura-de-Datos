#include <iostream>
#include "TextController.cpp"

using std::cout;
using std::getline;
using std::cin;
using std::string;

class TextView
{
	char endline = '\n';
	string text;
	string password;
	
	public: TextView()
	{
		store();
		cout<<endline;
		show();
	}
	
	private: store()
	{
		cout<<"Ingrese la clave: "; 
		getline (cin, password);
		cout<<endline;
		getline(cin, text, '\t');
	}
	
	private: show()
	{
		TextController textController;
		text = textController.store(password, text);
		cout<<text;
	}
	
	
	
	
	
	
};
