#include <iostream>
#include "Text.cpp"

using std::cin;
using std::string;
using std::getline;
using std::cout;

class TextView
{
	Text text;
	
	public: store()
	{
		string text;
		string name;
		cout<<"Ingrese su nombre: "; getline(cin, name);
		cout<<"\nIngrese el texto: \n";
		getline(cin, text, '|' );
		this->text.set(name, text);	
	}
	
	public: show()
	{
		cout<<this->text.get();
	}
	
	
	
	
	
	
};
