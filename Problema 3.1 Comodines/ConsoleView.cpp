#include <iostream>
#include "TextView.cpp"

class ConsoleView
{

	public: start()
	{
		std::string titleApp = "Problema 3.1 Comodines";
		std::cout<<titleApp<<"\n";
		this->coordinate();
	}
	
	private: coordinate()
	{
		TextView text;
		text.store();
		std::cout<<"\n";
		text.show();
	}
	
	
};

