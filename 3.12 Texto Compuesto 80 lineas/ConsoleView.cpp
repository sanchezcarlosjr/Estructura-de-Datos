#include <iostream>
#include "Text.cpp"

using std::string;
using std::getline;

class ConsoleView
{
	
	public: start()
	{
		string temp;
		getline(std::cin,temp,'\t');
		Text text(temp);
		text.delimitText();
		std::cout<<"\nTexto reducido: \n";
		std::cout<<text.getText();
	}
	
	
};                                                                                                                                                                                                          
