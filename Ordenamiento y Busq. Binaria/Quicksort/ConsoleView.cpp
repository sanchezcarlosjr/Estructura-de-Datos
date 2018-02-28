#include <iostream>
#include "ArrayView.cpp"

class ConsoleView
{
	ArrayView array;
	public: start()
	{
		std::string titleApp = "Algoritmos de ordenamiento: QuickSort";
		std::cout<<titleApp<<"\n";
		this->coordinate();
	}
	
	private: coordinate()
	{
		array.interact();
		cout<<"\n\n";
		system("pause");
	}
	
};
