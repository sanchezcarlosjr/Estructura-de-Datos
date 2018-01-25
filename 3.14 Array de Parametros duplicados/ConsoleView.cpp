#include <iostream>
#include "ArrayView.cpp"

class ConsoleView
{

	public: start()
	{
		std::string titleApp = "3.14 Array de parametros duplicados";
		std::cout<<titleApp<<"\n";
		this->coordinate();
	}
	
	private: coordinate()
	{
		ArrayView array;
		array.store();
		std::cout<<"\n";
		array.show();
	}
	
	
};
